#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,rem,temp;
    cout<<"Enter a number: ";
    cin>>num;
    int digitNum=0;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        digitNum++;
    }
    temp=num;
    int digitSum=0;
    while(temp!=0)
    {
        rem=temp%10;
        temp=temp/10;
        digitSum=digitSum+pow(rem,digitNum);
    }

    if(num==digitSum)
    {
        cout<<num<<" is "<<"an armstrong number";
    }
    else
    {
        cout<<num<<" is "<<"not an armstrong number";

    }
    return 0;

}