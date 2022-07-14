#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int N,p,k;
        cin>>N>>p>>k;
        int d=0;
        for(int i=0;i<k;i++){
            int j;bool f=false;
            for( j=i;j<N; ){
                d++;
                if(j==p){n
                    f=true;
                    break;
                }
                j+=k;
            }
            if(f){
                cout<<d<<"\n";
                break;
            }            
        }
    }
    return 0;

}