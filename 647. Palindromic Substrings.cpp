class Solution {
public:
    int countSubstrings(string s) {
        int cnt = s.size();
        for(int i = 0; i < s.size() - 1; i++)
        {
            for(int j = i + 1; j < s.size(); j++)
            {
                string str = s.substr(i, j-i+1);
                string rev = str;
                reverse(rev.begin(), rev.end());
                if(rev == str) cnt++;
            }
        }
    
        return cnt;
    }
};