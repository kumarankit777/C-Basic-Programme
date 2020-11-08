#include<iostream>
using namespace std;

int countDigit(long num)
{
    int count=0;
    while(num!=0)
    {
        num = num/10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a integer number:"<<endl;
    cin>>n;
    cout<<"No of Digits in "<<n<<" is "<<countDigit(n);
    return 0;


}