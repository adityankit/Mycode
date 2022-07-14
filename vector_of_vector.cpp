#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> v1;
        for(int j=0;j<k;j++){
            
            int g;
            cin>>g;
            v1.push_back(g);
        }
        v.push_back(v1);
    }
    for(int h=0;h<q;h++){
        int i,j;
        cin>>i>>j;
        cout<<v[i][j]<<endl;
    }
       
    return 0;
}