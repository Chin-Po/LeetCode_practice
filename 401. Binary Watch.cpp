class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for(int hr = 0; hr < 12; hr++)
        {
            for(int min = 0; min < 60; min++)
            {
                bitset<4> hr_binary = bitset<4>(hr);
                bitset<6> min_binary = bitset<6>(min);
                if( hr_binary.count() + min_binary.count() == num )
                {
                    res.push_back(to_string(hr) + (min < 10 ? ":0" : ":") + to_string(min));
                }
            }
        }
        return res;
    }
};