#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int biNum,rem,decNum=0,i;
    cout<<"Enter a binary number: ";
    cin>>biNum;
    int digitNum=0;
    int temp=biNum;
    while(temp!=0)
    {
        temp=temp/10;
        digitNum++;
    }
    for(i=0;i<digitNum;i++)
    {
        rem=biNum%10;
        biNum=biNum/10;
        decNum=decNum+(rem*pow(2,i));
        
    }
    cout<<"Equivalent decimal number is: "<<decNum;
    return 0;
}