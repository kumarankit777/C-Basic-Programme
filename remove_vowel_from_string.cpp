#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//Initializing variable.
	char str[100];
	int i,j,len=0;
	
	//Accepting input.
	cout<<"Enter a string : ";
	cin>>(str);
	len=strlen(str);
	
	//Accepting input.
	for(i=0; i<len; i++)
	{   
	    //Checking vowels.
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
		    
		    //Deleting vowels. 
			for(j=i; j<len; j++)
			{
			    //Storing string without vowels.
				str[j]=str[j+1];
			}
		len--;
		}
	}
	cout<<"After deleting the vowels, the string will be : "<<str;
    
    return 0;	
}
