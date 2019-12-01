/*

Chef decided to exercise by running somewhere from ShareChat. He chose three sets of points in a plane:

A set of N points (numbered 1 through N): for each valid i, the i-th of them has coordinates (ai,bi).
A set of M points (numbered 1 through M): for each valid i, the i-th of them has coordinates (ci,di).
A set of K points (numbered 1 through K): for each valid i, the i-th of them has coordinates (ei,fi).
ShareChat has coordinates (x,y). Chef must choose one point (aj,bj), one point (ck,dk), and one point (el,fl).
Then, he starts running from ShareChat, visits the chosen points (aj,bj) and (ck,dk) in any order, 
and then runs to the point (el,fl), where he finishes his run.

Help Chef find the minimum distance he has to run.

Example Input
2
1 4
3 2 2
4 4 2 0 8 1
10 1 3 1
1 3 9 5
6 4
2 2 3
7 10 5 7
1 6 2 3
1 8 0 7 0 2

Example Output
8.1820424980
8.6995968482

Explanation
Example case 1:  Chef should run from (1,4) to (3,1), then to (2,0) and then to (1,3).
                 The distance is 13−−√+2–√+10−−√≐8.1820424980.
                 
*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
double distance(long long x1,long long y1,long long x2,long long y2)
{
    double f=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return f;
}
int main() {
    fast;
	long long t,n,i,j,x,y,m,k,h;
	cin>>t;
	double temp1,temp2,tempx,tempab,temp;
	while(t--)
	{
	    cin>>x>>y;
	    cin>>n>>m>>k;
	    long long a[n],b[n],c[m],d[m],e[k],f[k];
	    for(i=0;i<n;i++) cin>>a[i]>>b[i];
	    for(i=0;i<m;i++) cin>>c[i]>>d[i];
	    for(i=0;i<k;i++) cin>>e[i]>>f[i];
	    temp1=temp2=90000000000;
	    for(i=0;i<n;i++)
	    {
	       
	        tempx=distance(x,y,a[i],b[i]);
	        temp=tempx;
	        if(tempx<temp1)
	        {
	        for(j=0;j<m;j++)
	        {   
	            temp=tempx;
	            temp+=distance(a[i],b[i],c[j],d[j]);
	            tempab=temp;
	            for(h=0;h<k;h++)
	            {
	                temp=tempab;
	                temp+=distance(c[j],d[j],e[h],f[h]);
	                //cout<<"temp= "<<temp<<endl;
	                if(temp1>temp)
	                {
	                    temp1=temp;
	                }
	            }
	        }
	        }
	    }
	    for(i=0;i<m;i++)
	    {
	        tempx=distance(x,y,c[i],d[i]);
	        temp=temp;
	        if(tempx<temp2)
	        {
	        //cout<<"temp c with x= "<<temp<<endl;
	        for(j=0;j<n;j++)
	        {
	            temp=tempx;
	            temp+=distance(c[i],d[i],a[j],b[j]);
	            tempab=temp;
	            //cout<<"temp c with a= "<<temp<<endl;
	            for(h=0;h<k;h++)
	            {
	                temp=tempab;
	                temp+=distance(a[j],b[j],e[h],f[h]);
	                //cout<<"temp2= "<<temp<<endl;
	                if(temp2>temp)
	                {
	
	                    temp2=temp;
	                }
	            }
	        }
	        }
	    }
	    cout<<fixed<<setprecision(10)<<min(temp1,temp2)<<"\n";
	}
	return 0;
}
