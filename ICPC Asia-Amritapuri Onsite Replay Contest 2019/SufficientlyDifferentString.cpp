/*

You are teaching students to generate strings consisting of unique lowercase latin characters (a-z).
You give an example reference string s to the students.

You notice that your students just copy paste the reference string instead of creating their own string. 
So, you tweak the requirements for strings submitted by the students.

Let us define a function F(s, t) where s and t are strings as the number of characters that are same in both the strings. 
Note that the position doesn't matter. Here are a few examples of F(s, t):

F("abc", "def") = 0

F("abc", "acb") = 3

F("back", "abcd") = 3

Now you ask your students to output a string t with lowercase unique characters of the same length as s,
such that F(s, t) ≤k where you are also given the value of k.
If there are multiple such strings, you ask them to output the lexicographically smallest possible string. 
If no such string is possible, output the string "NOPE" without quotes.

Sample Input:

4
helowrd 0
background 0
abcdefghijklmnopqrstuvwxyz 0
b 1

Sample Output:

abcfgij
efhijlmpqs
NOPE
a

*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t,n,i,len,k,j;
	cin>>t;
	while(t--)
	{
	    string str,ans,alphabets={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	    cin>>str>>k;
	    ans="";
	    len=str.length();
	    if(len*2-k>26)
	    {
	        cout<<"NOPE";
	    }
	    else
	    {
	        sort(str.begin(),str.end());
	        i=0;
	        n=0;
	       for(j=0;j<26;j++)
	       {
	           if(i<len)
	          {
	             
	                  if(alphabets[j]==str[n] && k>0)
	                  {
	                      cout<<alphabets[j];
	                      n++;
	                      i++;
	                      k--;
	                  }
	                
	            else 
	            {
	                if(alphabets[j]!=str[n])
	                {
	                    cout<<alphabets[j];
	                    i++;
	                }
	                else
	                {
	                    n++;
	                }
	                
	            }
	              
	          }
	          
	        }
	    }
	    cout<<endl;
	}
	return 0;
}

