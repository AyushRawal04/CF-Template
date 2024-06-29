void dfs(int node, int parent, vector<vector<int>> &adj, vector<vector<int>>&par, vector<int> &lev){
    par[0][node]=parent;
    if(parent != -1 ? lev[node]=lev[parent]+1 : lev[node]=1);
    for(auto& x: adj[node]){
        if(x!=par[0][node]){
            dfs(x, node, adj, par, lev);
        }
    }
}

int findkth(int a, int k, vector<vector<int>>& par){
    int n=par.size();
    for(int i=0; i<n; i++){
        if(k&(1<<i)){
            a=par[i][a];
            if(a==-1){
                return a;
            }
        }
    }
    return a;
}

int lca(int a, int b, vector<vector<int>> &par, vector<int> &lev){
    int maxpow=par.size();
    if(lev[a]>lev[b]){
        a=findkth(a, lev[a]-lev[b], par);
    }else{
        b=findkth(b, lev[b]-lev[a], par);
    }
    if(a==b){
        return a;
    }
    for(int i=maxpow-1; i>=0; i--){
        if(par[i][a]!=par[i][b]){
            a=par[i][a];
            b=par[i][b];
        }
    }
    return par[0][a];
}

void ConstructParent(vector<vector<int>> &par){
    int maxpow=par.size();
    int n=par[0].size()-1;
    for(int i=1; i<maxpow; i++){
        for(int j=1; j<=n; j++){
            int imd=par[i-1][j];
            if(imd==-1){
                par[i][j]=-1;
                continue;
            }
            par[i][j]=par[i-1][imd];
        }
    }
}
