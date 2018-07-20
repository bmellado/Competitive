typedef pair<int, int> ii; //Data type shortcuts
typedef vector<ii> vii;
typedef vector<int> vi;

vi dfs_num;  // global variable, initially all values are set UNVISITED

void dfs(int u){ //DFS for normal usage: as graph transversal algorithm
    dfs_num[u] = VISITED; //We mark this vertex as visited
    for(int j = 0; j < (int)AdjList[u].size(); j++){
        ii v = AdjList[u][j];      //v is a (neighbor, weight) pair
        if (dfs_num[v.first] == UNVISITED)  // important check to avoid cycle
            dfs(v.first);
    }
}
