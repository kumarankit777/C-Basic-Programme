#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a charcter:"<<endl;
    cin>>c;
    if ((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
    {
        cout<<c<<" is an alphabet"<<endl;
    }
    else
    {
        cout<<c<<" is not an alphabet";
    }
    return 0;
}