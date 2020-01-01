/*

You are given two binary strings A and B, each with length N.
You may reorder the characters of A in an arbitrary way and reorder the characters of B also in an arbitrary 
(not necessarily the same) way. Then, you should compute the XOR of the resulting strings.
Find the number of distinct values of this XOR which can be obtained, modulo 1,000,000,007 (109+7).

Example Input
1
2
00
10


Example Output
2


Explanation
Example case 1: The characters in each string can be reordered in two ways (swap them or do nothing),
                so there are four values of their XOR:

                "00" XOR "10" is "10"
                "00" XOR "01" is "01"
                "00" XOR "10" is "10"
                "00" XOR "01" is "01"
                There are only two distinct values.
                
*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf pop_front
#define modulo 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll p[100005];

void calculate_factorials(){
    p[0]=1;
    for(ll i=1;i<100005;i++) {
        p[i]=(p[i-1]*i)%modulo;
    }
}

ll calculate_power(ll a,ll n,ll mod)
{
    ll ans=1,t=a; 
    while(n > 0){
 	    if(n%2==1){
 		    ans=(ans*t)%mod;
 	    }
 	    t=(t*t)%mod;
 	    n/=2;
    }
    return ans;
}

ll function1(ll n, ll mod) {
    return calculate_power(n,mod-2,mod);
}

ll permutation(ll n, ll r, ll mod) {
    return (p[n]*((function1(p[r],mod)*function1(p[n-r],mod))%mod))%mod;
}
int main() {
    calculate_factorials();
    fast;
	ll t,n,i,j;
	string a,b;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll counta=0,countb=0,ans=0,permcount;
	    cin>>a>>b;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]=='1')
	        {
	            counta++;
	        }
	        if(b[i]=='1')
	        {
	            countb++;
	        }
	    }
	    permcount=counta+countb;
	    	if(countb==counta)
         	{
    	      ans=1;
        	}
    	while(permcount>=abs(counta-countb))
    	{
    	    //cout<<"hgh";
    	    if(permcount==n) {
                if(countb+counta==permcount){
                    ans=(ans+permutation(n,permcount,modulo))%modulo;
                    //cout<<permcount<<"\n";
                }
            }
    	    if(permcount<n)
    	    {
    	        if(permcount>0 and permcount<=(n-counta+n-countb))
    	        {
    	            
    	            ans=(ans+permutation(n,permcount,modulo))%modulo;
    	            //cout<<"ans= "<<ans<<endl;
    	        }
    	    }
    	    permcount-=2;
    	}
    
    	cout<<ans%modulo<<"\n";
	}
   	return 0;
}
