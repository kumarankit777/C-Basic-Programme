#include<iostream>
using namespace std;

int reverse(int n)
{
    int n2=0;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        n2=(n2*10)+rem;
        
    }
    return n2;
    
}

int main()
{
    int num,rev;
    cout<<"Enter an integer :";
    cin>>num;
    int newNum=0;
    if(num==0)
    {
        newNum=1;
    }
    while(num!=0)
    {
        rev=num%10;
        if(rev==0)
        {
            rev=1;
        }
        num=num/10;
        newNum=(newNum*10)+rev;
        
    }
    cout<<"New Number is: "<<reverse(newNum);
    
    
    return 0;
}