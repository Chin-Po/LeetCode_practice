class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter() {
        timestamp = 0;
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        follow(userId, userId);
        tweet[userId].insert({timestamp++, tweetId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        map<int, int> top10; // <timestamp, tweetId>
        for(auto iter = friends[userId].begin(); iter != friends[userId].end(); iter++){ // go through all friends
            int i = *iter; // the Id of friends
            for(auto j = tweet[i].begin(); j != tweet[i].end(); j++){ // go through each tweet from each friend
                top10.insert(*j);
                if(top10.size() > 10) top10.erase(top10.begin());
            }
        }
        for(auto iter = top10.rbegin(); iter != top10.rend(); iter++){
            res.push_back(iter->second);
        }
        return res;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        if(followerId != followeeId){
            friends[followerId].erase(followeeId);
        }
    }
private:
    int timestamp;
    unordered_map<int, set<int>> friends; // <usrID, all_followee>
    unordered_map<int, map<int, int>> tweet; // <usrID, <timestamp,tweetID>>
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter obj = new Twitter();
 * obj.postTweet(userId,tweetId);
 * vector<int> param_2 = obj.getNewsFeed(userId);
 * obj.follow(followerId,followeeId);
 * obj.unfollow(followerId,followeeId);
 */