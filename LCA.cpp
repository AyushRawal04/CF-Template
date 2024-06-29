void dfs(int node, int parent, vector<vi> &adj, vector<vi>&par, vi &lev){
    par[0][node]=parent;
    if(parent != -1 ? lev[node]=lev[parent]+1 : lev[node]=1);
    for(auto& x: adj[node]){
        if(x!=par[0][node]){
            dfs(x, node, adj, par, lev);
        }
    }
}

int findkth(int a, int k, vector<vi>& par){
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

int lca(int a, int b, vector<vi> &par, vi &lev){
    int n=par.size();
    if(lev[a]>lev[b]){
        a=findkth(a, lev[a]-lev[b], par);
    }else{
        b=findkth(b, lev[b]-lev[a], par);
    }
    if(a==b){
        return a;
    }
    debug(a);
    debug(b);
    for(int i=n-1; i>=0; i--){
        if(par[i][a]!=par[i][b]){
            a=par[i][a];
            b=par[i][b];
        }
    }
    return par[0][a];
}
