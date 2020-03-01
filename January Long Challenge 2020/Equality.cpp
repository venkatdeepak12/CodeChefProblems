/*

Chef Aditi keeps changing the flavours of her dishes and she wants to analyse feedback from her customers 
in order to improve her performance. The customers visiting Aditi's restaurant can rate the food online and 
Aditi knows an aggregated rating for each day. As she is busy cooking, you should perform the data analysis.

You are given a sequence A1,A2,…,AN of distinct integers denoting the customers' feedback during N days.
You should process Q queries. In each query, you are given two integers L and R. 
Consider any contiguous subsequence Ap,Ap+1,…,Aq, where L≤p<q≤R; 
let's call it a maximal increasing subsequence if the following conditions hold:

Ap<Ap+1…<Aq

if p>L, then Ap<Ap−1
if q<R, then Aq>Aq+1

Similarly, let's define a maximal decreasing subsequence. 
You should find out if the number of maximal increasing subsequences is equal to the number of maximal decreasing subsequences 
(with L≤p<q≤R).

For example, if A=(10,20,30,5), we can see that the only maximal increasing subsequence of this sequence 
(for L=1 and R=N) is (10,20,30), since (10,20) does not satisfy the third condition and (20,30) 
does not satisfy the second condition, and there is only one maximal decreasing subsequence (30,5).

Example Input 1
4 3
1 3 2 4
1 4
2 3
2 4

Example Output 1
NO
NO
YES

Explanation 1
For the first query, there are two maximal increasing subsequences (1,3) and (2,4),
but only one maximal decreasing subsequence (3,2).

*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
//using namespace boost::multiprecision;
using namespace std;
ll count_same(ll inc[],ll l,ll r)
{
    ll i,count=0,flag=0;
    for(i=l+1;i<=r;i++)
    {
       if(inc[i]==inc[i-1])
       {
           flag=1;
       }
       else if(flag==1 && inc[i]!=inc[i-1])
       {
           count++;
           flag=0;
       }
    }
    i--;
   // cout<<"i= "<<i<<endl;
    if(flag==1 )
       {
           count++;
           flag=0;
       }
    //cout<<count<<endl;
    return count;
    
}
int main() {
	fast;
	ll t,n,q,i,j;
	    cin>>n>>q;
	    ll a[n+1],inc[n+1],dec[n+1],in=0,de=0,cuminc[n+1],cumdec[n+1];
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        if(i==1)
	        {
	            inc[i]=-1;
	            dec[i]=-1;
	        }
	        else
	        {
	            if(a[i]>a[i-1])
	            {
	                if(inc[i-1]==-1)
	                {
	                    in++;
	                }
	                inc[i-1]=in;
	                inc[i]=in;
	                dec[i]=-1;
	                
	            }
	            else if(a[i]<a[i-1])
	            {
	                if(dec[i-1]==-1)
	                {
	                de++;
	                }
	                dec[i-1]=de;
	                dec[i]=de;
	                inc[i]=-1;
	            }
	        }
	    }
	    ll l,r,flag=0,go=0;
	    for(i=1;i<=n;i++)
	    {
	        if(i==1)
	        {
	            cuminc[i]=0;
	        }
	        else if(inc[i]==inc[i-1] && flag==0 && inc[i]!=-1 )
	        {
	            cuminc[i]=cuminc[i-1]+1;
	            flag=1;
	        }
	        else if(inc[i]==inc[i-1] && flag==1)
	        {
	            cuminc[i]=cuminc[i-1]; 
	        }
	        else
	        {
	            cuminc[i]=cuminc[i-1];
	            flag=0;
	        }
	    }
	    flag=0;
	    go=0;
	     for(i=1;i<=n;i++)
	    {
	        if(i==1)
	        {
	            cuminc[i]=0;
	        }
	        else if(inc[i]==inc[i-1] && flag==0 && inc[i]!=-1 )
	        {
	            cuminc[i]=cuminc[i-1]+1;
	            flag=1;
	        }
	        else if(inc[i]==inc[i-1] && flag==1)
	        {
	            cuminc[i]=cuminc[i-1]; 
	        }
	        else
	        {
	            cuminc[i]=cuminc[i-1];
	            flag=0;
	        }
	    }
	    flag=0;
	     for(i=1;i<=n;i++)
	    {
	        if(i==1)
	        {
	            cumdec[i]=0;
	        }
	        else if(dec[i]==dec[i-1] && flag==0 && dec[i]!=-1 )
	        {
	            cumdec[i]=cumdec[i-1]+1;
	            flag=1;
	        }
	        else if(dec[i]==dec[i-1] && flag==1)
	        {
	            cumdec[i]=cumdec[i-1]; 
	        }
	        else
	        {
	            cumdec[i]=cumdec[i-1];
	            flag=0;
	        }
	    }
	  
	 /*for(i=1;i<=n;i++)
	    {
	        cout<<cuminc[i]<<" ";
	    }
	    cout<<endl;
	    for(i=1;i<=n;i++)
	    {
	        cout<<cumdec[i]<<" ";
	    }
	    cout<<endl;*/
	    
	    while(q--)
	    {
	        cin>>l>>r;
	        
	        ll increment,decrement;
	        increment=cuminc[r]-cuminc[l];
	        decrement=cumdec[r]-cumdec[l];
	       // cout<<increment<<" "<<decrement<<endl;
	        
	           /* if((inc[l]!=-1 && inc[r]==-1 && inc[l+1]==inc[l] && cuminc[l+1]==cuminc[l]))
	            {
	                increment++;
	            }*/
	            if(l!=1)
	            {
	               if(inc[l]==inc[l-1] && inc[l]==inc[l+1] && inc[l]!=-1)
	               {
	                   increment++;
	               }
	            }
	             if(l!=1)
	            {
	               if(dec[l]==dec[l-1] && dec[l]==dec[l+1] && dec[l]!=-1)
	               {
	                   decrement++;
	               }
	            }
	           
	       /*
	            if((dec[l]!=-1 && dec[r]==-1  && dec[l+1]==dec[l] && cumdec[l+1]==cumdec[l]))
	            {
	                decrement++;
	            }
	        */
	       // cout<<increment<<" "<<decrement<<endl;
	       if(decrement==increment && decrement!=0)
	        {
	            cout<<"YES\n";
	        }
	        else
	        {
	            cout<<"NO\n";
	        }
	    }
	return 0;
}

