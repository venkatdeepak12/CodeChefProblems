/*

A competition with N participants (numbered 1 through N) is taking place in Chefland. 
There are N−1 rounds in the competition; in each round, two arbitrarily chosen contestants battle,
one of them loses and drops out of the competition.

There are 10 types of weapons (numbered 1 through 10).
You are given N strings S1,S2,…,SN; 
for each valid i and j, the j-th character of Si is '1' if the i-th contestant initially has a weapon of type j or '0' otherwise.
During each battle, for each type j such that both contestants in this battle currently have weapons of type j,
these weapons of both contestants are destroyed; after the battle, 
the winner collects all remaining (not destroyed) weapons of the loser.
Note that each contestant may win or lose regardless of the weapons he/she has.

Chef is feeling bored watching the contest, 
so he wants to find the maximum possible number of weapons the winner of the tournament could have after the last battle,
regardless of which contestants fight in which battles or the results of the battles. Can you help him?

Example Input
1
3
1110001101
1010101011
0000000011

Example Output
4

Explanation
Example case 1: If the first person defeats the second person, weapons 1, 3, 7 and 10 are destroyed.
                Then, if the third person defeats the first person (who now has weapons 2, 5, 8 and 9),
                weapons 9 are destroyed and the winner has weapons 2, 5, 8 and 10.
                
*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t,n,i,j,ans,c;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string s[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    ans=0;
	    for(i=0;i<10;i++)
	    {
	        c=0;
	        for(j=0;j<n;j++)
	        {
	            if(s[j][i]=='1')
	            {
	                c++;
	            }
	        }
	        if(c%2!=0)
	        {
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
