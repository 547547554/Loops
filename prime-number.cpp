#include<iostream>
using namespace std;

int main()
{
    int i ,n;
    cout<<"Enter the number : ";
    cin>>n;

    if(n<2)
    {
        cout<<"Not a prime number ";
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"Not a prime number";
            }
        }
        cout<<"prime Number";
        return 0;
    }
}