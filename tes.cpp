#include <iostream>
#include <vector>        // using array is ok but in c++ we have vector 
using namespace std;
const int N=40;  // replacement of #define N=40
void sum(int &p,vector<int>d)   //  reference is added in c++.
{                                // &p make more c++ like code.
    for(int i=0;i<d.size();i++)    // so here we use vector so no need to pass size of vector as
    {                              // we have .size() function.
        p+=d[i];                     
    }
}
int main()
{
    int accum=0;
    vector<int>data;
    for(int i=0;i<N;i++)
    {
        data.push_back(i);       // as vector have push_back function 
    }
    sum(accum,data);             // no need to pass address of accum  
    cout<<"Sum is "<<accum;
    return 0;
}