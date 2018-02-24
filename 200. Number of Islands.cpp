// method 1 --- BFS
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        set< pair<int, int> > set;
        queue<pair<int, int>> q;
        vector<pair<int, int>> action = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1' && set.count({i, j}) == 0){
                    q.push({i, j});
                    set.insert({i, j});
                    res++;
                }
                while(!q.empty()){
                    pair<int, int> tmp = q.front(); q.pop();
                    for(int k = 0; k < 4; k++){
                        int r_off = tmp.first + action[k].first;
                        int c_off = tmp.second + action[k].second;
                        if(0 <= r_off && r_off < grid.size() && 0 <= c_off && c_off < grid[0].size()){
                            if(grid[r_off][c_off] == '1' && set.count({r_off, c_off}) == 0) {
                                set.insert({r_off, c_off});
                                q.push({r_off, c_off});
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
};


// method 2 --- DFS
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    res++;
                    dfs(i, j, grid);   
                }
            }
        }
        return res;
    }
    void dfs(int i, int j, vector<vector<char>>& grid){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0') return;
        grid[i][j] = '0';
        dfs(i-1, j, grid);
        dfs(i, j-1, grid);
        dfs(i+1, j, grid);
        dfs(i, j+1, grid);
    }
};