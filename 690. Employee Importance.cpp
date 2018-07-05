/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, vector<int>> m_sub; // manager, subordinates
        unordered_map<int, int> m_importance; // employee, importance
        for(auto i: employees){
            m_sub[i->id] = i->subordinates;
            m_importance[i->id] = i->importance;
        }
        queue<int> q; // all the subordinates
        q.push(id);
        int res = 0;
        while(!q.empty()){
            int tmp = q.front(); q.pop();
            for(int i = 0; i < m_sub[tmp].size(); i++){
                q.push(m_sub[tmp][i]);
            }
            res += m_importance[tmp];
        }
        return res;
    }
};