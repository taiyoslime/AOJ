#include <bits/stdc++.h>
using namespace std;
struct UnionFind{
    vector<int> parent;

    UnionFind(int n) : parent(n){
        for (int i = 0; i < n; i++)parent[i] = i;
    }

    int find(int e){
        if (parent[e] == e) return e;
        else return parent[e] = find(parent[e]);
    }

    void unite (int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return;
        parent[a] = b;
    }

    bool same(int a, int b){
        return find(a) == find(b);
    }
};

int main() {
    vector<tuple<int, int, int>> a;
    int n, t, ans = 0;
    cin >> n;
    UnionFind uf(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> t;
            if (i <= j && t != -1) a.push_back(make_tuple(t,i,j));
        }
    }
    sort(a.begin(), a.end(), [](const tuple<int, int, int>& x, const tuple<int, int, int>& y) { return get<0>(x) < get<0>(y);} );
    for(auto e : a){
        if( !uf.same(get<1>(e), get<2>(e)) ){
            ans += get<0>(e);
            uf.unite(get<1>(e), get<2>(e));
        }
    }
    cout << ans << endl;
}