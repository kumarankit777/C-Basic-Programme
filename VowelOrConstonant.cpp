#include<iostream>
using namespace std;
int main()
{
    char c;
    int isVowel;
    cout<<"Enter a character:"<<endl;
    cin >> c ;
    isVowel=(c =='a'||c =='e'||c =='i'||c =='o'||c =='u');

    if(isVowel)
    {
        cout<<c<<" is a vowel"<<endl;
    }
    else
    {
        cout<<c<<" is a consonant";
    }
    
    return 0;
}