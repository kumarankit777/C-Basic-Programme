#include<iostream>
using namespace std;

int main()
{
    int i,j,low,high;
    cout<<"Enter two values: ";
    cin>>low >>high;
    cout<<"Prime numbers between "<<low<<" and "<<high<<" are: ";
    for(i=low;i<=high;i++)
    {
        if(i==0 || i==1)
        {
            continue;
        }
        int flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}