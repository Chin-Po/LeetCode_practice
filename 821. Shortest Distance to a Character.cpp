class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> pos_C;
        for(int i = 0; i < S.size(); i++)
            if(S[i] == C) pos_C.push_back(i);
        vector<int> distance(S.size(), INT_MAX);
        for(int i = 0; i < S.size(); i++){
            for(int j = 0; j < pos_C.size(); j++){
                int dist = abs(i - pos_C[j]);
                if(dist < distance[i]) distance[i] = dist;
            }
        }
        return distance;
    }
};