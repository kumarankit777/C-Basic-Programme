#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,rem,temp,low,high;
    cout<<"Enter two numbers:";
    cin>>low >>high;
    cout<<"Armstrong numbers between "<<low<<" and "<<high<<" are :";
    for(i=low;i<=high;i++)
    {
        temp=i;
        int digitNum=0;
        while(temp!=0)
        {
            temp=temp/10;
            digitNum++;
        }
        temp=i;
        int digitSum=0;
        while(temp!=0)
        {
            rem=temp%10;
            digitSum=digitSum+pow(rem,digitNum);
            temp=temp/10;
        }

        if(i==digitSum)
        {
            cout<<i<<" ";
        }
    }
    return 0;
    
}