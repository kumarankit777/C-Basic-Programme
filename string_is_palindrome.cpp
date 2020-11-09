#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[50];
    int flag=0,i;
    cout<<"Enter a string: ";
    cin>>str;
    int length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"String is not palindrome";
    }
    else{
        cout<<"String is palindrome";
    }



}