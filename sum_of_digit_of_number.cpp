#include<iostream>
using namespace std;

int digitSum(int num)
{
    int sum=0,rem;
    while(num!=0)
    {   
        rem=num%10;
        num=num/10;

        sum=sum+rem;
    
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter the num:"<<endl;
    cin>>num;
    cout<<"Sum of digit of "<<num<<" is "<<digitSum(num);
    return 0;
}