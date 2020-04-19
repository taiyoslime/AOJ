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
    int n, q, c, x, y;
    cin >> n >> q;
    UnionFind uf(n);
    for (int i = 0; i < q; i++){
        cin >> c >> x >> y;
        if(c){
            cout << (uf.same(x, y) ? "1" : "0") << endl;
        } else {
            uf.unite(x, y);
        }
    }
}