#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter your Number : ";
    cin>>n;
    
    // for(int i=1;i<=12;i++)
    // {
    //     cout<<n*i<<" ";
    // }

    for(i=n;i<=10*n;i=i+n)
    {
        cout<<i<<"\n";
    }
    

}