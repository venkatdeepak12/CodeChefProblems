/*

Chef has a sequence A1,A2,…,AN. 
He needs to find the number of pairs (i,j) (1≤i<j≤N) such that Ai+Aj=Ai⋅Aj. 
However, he is busy, so he asks for your help.

Example Input
2
3
2 4 2
3
0 2 3

Example Output
1
0

Explanation
Example case 1: The only valid pair is (1,3).

Example case 2: We can see that no valid pair exists.

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
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll zero=0,two=0,value;
        for(i=0;i<n;i++)
        {
           cin>>value;
           if(value==0)
           {
               zero++;
           }
           else if(value==2)
           {
               two++;
           }
        }
        ll sum=0;
        if(zero>1)
        {
            sum=(zero*(zero-1))/2;
        }
        if(two>1)
        {
            sum+=(two*(two-1))/2;
        }
        cout<<sum<<"\n";
    }
	return 0;
}
