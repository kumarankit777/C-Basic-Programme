#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a<b){
        return gcd(a,b-a);
    }
    else{
        return gcd(a-b,b);
    }
}

int lcm(int a,int b)
{
    return ((a*b)/gcd(a,b));
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b);
}
