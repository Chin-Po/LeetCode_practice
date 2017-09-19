class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> bit_n(n);
        string bit_n_str = bit_n.to_string<char,string::traits_type,string::allocator_type>();
        int cnt = 0;
        for(auto i : bit_n_str)
            if(i == '1') cnt++;
        return cnt;
    }
};