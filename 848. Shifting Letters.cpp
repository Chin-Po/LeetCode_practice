class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        for(auto &i: shifts) i = i % 26;
        
        vector<int> total_shift;
        int sum = accumulate(shifts.begin(), shifts.end(), 0);
        for(int i = 0; i < shifts.size(); i++){
            total_shift.push_back(sum);
            sum -= shifts[i];
        }
        for(int i = 0; i < S.size(); i++){
            int idx = S[i] - 'a';
            int shift = (idx + total_shift[i]) % 26;
            S[i] = 'a' + shift;
        }
        return S;
    }
};