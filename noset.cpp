#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a[4];
        map<int,int> x;
        for(int i=0;i<4;i++){
            cin>>a[i];
            x[a[i]]++;
        }
        if(x.size()==3 || x.size()==4)
          cout<<2<<"\n";
        else if(x.size()==1)
         cout<<0<<"\n" ;
        else{
            if(x[a[0]]==2)
             cout<<2<<"\n";
            else
             cout<<1<<"\n";
        }
        for(int i=0;i<x.size();i++)
         cout<<x[i]<<" "<<x[a[i]]<<"\n";
          
        
    }
    return 0;
}