#include<iostream>
using  namespace std;
void tri(int N,int a=1,int b=1,int c=1){
    static int co=0;
    if( ((a%b)==c) && ((b%c)==0) )
    {
        co++;
    }

    if(a>N){return ;}
    if(b>N){return ;}
    if(c>N){return ;}

    tri(N,a+1,b,c);
    tri(N,a,b+1,c);
    tri(N,a,b,c+1);
    

}
int main(){
    int t;cin>>t;
    while(t--){
        int N;
        cin>>N;
        tri(N);

        

    }
    return 0;
}