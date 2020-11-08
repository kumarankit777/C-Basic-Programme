#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter number upto which u want sum:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum is "<<sum;
    return 0;


}