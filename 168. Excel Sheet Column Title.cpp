class Solution {
public:
    string convertToTitle(int n) {
        string title = "";
        while(n)
        {
            int remain = (n-1)%26;
            title = (char)('A'+remain) + title;
            n = (n-1)/26;
        }
        return title;
    }
};