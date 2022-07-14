#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int g=0;
        for(int i=0;i<n;i++){
            int j=i;int c=0;int r=1;int f=1;
            while(j!=0){
                int k;
                k=j%10;
                j=j/10;
                c++;
                r=r*k;
                f=f*c;
            }
            if(r>=f){
                g++;
            }
        }
        cout<<g<<"\n";
    }
    return 0;
}