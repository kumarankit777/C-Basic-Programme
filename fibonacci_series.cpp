#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1){
        return n;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    int n,i;
    cout<<"Enter no of term:"<<endl;
    cin>>n;
    cout<<"Fibonacci series is:"<<endl;
    while(i<n)
    {
        cout<<fib(i)<<" ";
        i++;
    }

    return 0;
}