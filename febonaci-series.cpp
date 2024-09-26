#include<iostream>
using namespace std;

int main()
{
    int n,curr,prew,last;
    cout<<"Enter Number upto which you want to generate fibonacci series : ";
    cin>>n;

    curr=0;
    prew=1;
   
   for( last=0;last<=n;last=curr+prew)
    {
        cout<<"\n"<<last;
        curr=prew;
        prew=last;
        
    }
    return  0;
}