class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(1, 1);
        int idx2 = 0, idx3 = 0, idx5 = 0;
        while(res.size() < n){
            int m2 = res[idx2] * 2;
            int m3 = res[idx3] * 3;
            int m5 = res[idx5] * 5;
            int m_min = min(m2, min(m3, m5));
            res.push_back(m_min);
            if(m2 == m_min) idx2++;
            if(m3 == m_min) idx3++;
            if(m5 == m_min) idx5++;
        }
        return res.back();
    }
};