#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int s=0,es=0,j=n-1,i=0;
    while(i<j){
        if(s>es){
            es+=a[j];
            j--;
        }
        else if(s<es){
            s+=a[i];
            i++;
        }
        else
        {
            s+=a[i];
            i++;
            es+=a[j];
            j--;
        }

    } 
    if(s==es)
    {cout<<i<<"th index and element is"<<s;}
    else
     cout<<-1;

    return 0;
     

}