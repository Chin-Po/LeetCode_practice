class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(), people.end(), [](pair<int, int> &p1, pair<int, int> &p2)->bool
             {return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);});
        for(int i = 0; i < people.size(); i++){
            if(people[i].second != i){
                auto p = people[i];
                people.erase(people.begin() + i);
                people.insert(people.begin() + p.second, p);
            }
        }
        return people;
    }
};