#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the num:"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<num<<" is an even number"<<endl;
    }
    else{
        cout<<num<<" is an odd number";
    }
    return 0;
}