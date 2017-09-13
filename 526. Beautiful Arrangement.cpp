class Solution {
public:
    int countArrangement(int N) 
    {
        vector<int>states(N+1, 0);
        int count = 0;
        arrange(states, count, 1, N);
        return count;
    }

    void arrange(vector<int>& states, int& count, int i, int N) 
    {
        if (i > N) 
        {
            count++;
            return;
        }
        for (int q = 1; q <= N; q++) 
        {
            if (!states.at(q)&&(q % i == 0 || i % q == 0)) 
            {
                states.at(q) = 1;
                arrange(states, count, i+1, N);
                states.at(q) = 0;
            }
        }
    }
};