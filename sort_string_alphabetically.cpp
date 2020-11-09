#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    sort(str.begin(),str.end());
    cout<<"String is: "<<str;
}