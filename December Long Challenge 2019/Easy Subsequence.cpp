/*

Chef has always been fond of girls, but he could not make any girl his friend.
In order to finally make one, he was asked to solve the following problem:

You are given a string S with length N. 
Choose an integer K and two non-empty subsequences A and B of characters of this string, each with length K, such that:

A=B, i.e. for each valid i, the i-th character in A is the same as the i-th character in B.

Let's denote the indices of characters used to construct A by a1,a2,…,aK, i.e. A=(Sa1,Sa2,…,SaK). 

Similarly, let's denote the indices of characters used to construct B by b1,b2,…,bK.

If we denote the number of common indices in the sequences a and b by M, then M+1≤K.
Since Chef is busy right now, 
he asks you to find the maximum value of K such that it is possible to find sequences A and B which 
satisfy the given conditions or determine that there is no such K.

Example Input
1
4
anxa

Example Output
1

*/

//Code:

#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf pop_front
using namespace std;

int main() {
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str;
        ll characters[26],i,k,h;
        ll minimum[26];
         for(i=0;i<26;i++)
         {
             characters[i]=-1;
             minimum[i]=1000000;
         }
        int flag=0;
        cin>>str;
        for(i=0;i<n;i++)
        {
            if(characters[str[i]-'a']==-1)
            {
                characters[str[i]-'a']=i;
            }
            else
            {
                flag=1;
                h=i-characters[str[i]-'a'];
                characters[str[i]-'a']=i;
                if(minimum[str[i]-'a']>h)
                {
                    minimum[str[i]-'a']=h;
                }
            }
        }
        ll min=1000000;
        for(i=0;i<26;i++)
        {
            if(min>minimum[i])
            {
                min=minimum[i];
            }
        }
        if(flag==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<n-min<<endl;
        }
        
    }
	return 0;
}
