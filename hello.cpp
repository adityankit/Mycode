#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t ;cin>>t;
    int res=INT16_MAX;
    while(t--){
        string str;
        cin>>str;
        int fi[256];
        for(int i=0;i<256;i++){
            fi[i]=-1;
        }
        for(int i=str.length()-1;i>=0;i--){
            if(fi[str[i]]==-1)
             fi[str[i]]=i;
            else 
             res=fi[str[i]];
        }
        cout<<(res==INT16_MAX)?-1:res;

    }


    return 0;
}