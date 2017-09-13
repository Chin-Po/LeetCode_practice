class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res(nums.size());
        map<int, int> m;  
        
        for(int i = 0; i < nums.size(); i++)
		    m.insert(pair<int, int>(nums[i], i));
        
        int idx = nums.size();
        for (auto iter = m.begin(); iter != m.end(); ++iter) 
        {  
            //cout << iter->first << " " << iter->second << endl; 
            if(to_string(idx) == "1") res[iter->second] = "Gold Medal";
            else if(to_string(idx) == "2") res[iter->second] = "Silver Medal";
            else if(to_string(idx) == "3") res[iter->second] = "Bronze Medal";
            else res[iter->second] = to_string(idx); 
            idx--;
	    }  
        return res;
    }
};