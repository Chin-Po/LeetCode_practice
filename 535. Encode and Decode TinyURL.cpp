class Solution {
public:

    Solution(){
        long2short.clear();
        short2long.clear();
        dict = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        srand(time(NULL));
        
    }
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if(long2short.count(longUrl))
            return "http://tinyurl.com/" + long2short[longUrl];
        string randStr;
        int idx = 0;
        for(int i = 0; i < 6; i++)
            randStr.push_back(dict[rand() % 62]);
        while(short2long.count(randStr)){
            randStr[idx] = dict[rand() % 62];
            idx = (++idx) % 6;
        }
        short2long[randStr] = longUrl;
        long2short[longUrl] = randStr;
        return "http://tinyurl.com/" + randStr;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string randStr = shortUrl.substr(shortUrl.size()-6, 6);
        if(short2long.count(randStr)) return short2long[randStr];
        else return shortUrl;
    }

private:
    unordered_map<string, string> long2short;
    unordered_map<string, string> short2long;
    string dict;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));