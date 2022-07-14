#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int n=0;
        if(a!=b){
            n++;
            if(c!=d){
                n++;
                
            }
        }
        else if(a!=c){
            n++;
            if(b!=d){
                n++;
                
            }
        }
        else if(a!=d){
            n++;
            if(b!=c){
                n++;
                
            }
        }
        cout<<n<<"\n";
    }
    return 0;
}