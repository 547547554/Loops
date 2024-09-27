#include<iostream>
using namespace std;

int main()
{
    int n,curr,prew,last,count;
    cout<<"Enter number to generate fibbonacci series : ";
    cin>>n;
    
    curr=0;
    prew=1;
    last=0;

    for(count=0;count<=n;count++)
    {
        cout<<"\n"<<last;
        curr=prew;
        prew=last;
        last=prew+curr;

    }

}