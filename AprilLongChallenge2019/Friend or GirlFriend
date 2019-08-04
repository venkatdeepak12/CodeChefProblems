/*
Shlok and Sachin are good friends. Shlok wanted to test Sachin, so he wrote down a string S with length N and one character X.
He wants Sachin to find the number of different substrings of S which contain the character X at least once. Sachin is busy with his girlfriend,
so he needs you to find the answer.
Two substrings of S are considered different if their positions in S are different.

Example Input
2
3
abb b
6
abcabc c

Example Output
5
15

*/

//CODE:
#include <iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main() {
	long t,n,i,ch,ans;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    char str[n+1],x;
	    cin>>str>>x;
	    ans=n*(n+1)/2;
	    ch=0;
	    i=0;
	    while(str[i]!='\0')
	    {
	        if(str[i]!=x)
	        {
	            ch++;
	        }
	        i++;
	        if(str[i]==x||str[i]=='\0')
	        {
	            ans=ans-(ch*(ch+1)/2);
	            ch=0;
	        }
	        
	        
	    }
	
	    cout<<ans<<endl;
	}
	return 0;
}
