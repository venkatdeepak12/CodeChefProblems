/*

Striver is the coolest boy of the college and everyone loves him too.

He was studying for his end semester exams.
Meanwhile he started looking for his favourite string "JGEC" in every sentence. 
He is counting the number of times the word is written in a sentence.

A sentence in his college only consists of capital english alphabets without any spaces. Your task is to check his counting.

Sample Input:
2
4   
JGEC
15
JOLITEORJGECIAN

Sample Output:
1  
1  

*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string str,check="JGEC";
	ll t,n,i,count;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>str;
	    int f=0;
	    count=0;
	    for(i=0;i<n;i++)
	    {
	        
	       if(str[i]=='C' && str[i-1]=='E' && str[i-2]=='G' && str[i-3]=='J' && i>=3)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}

