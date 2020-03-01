/*

Chef is teaching Sourav Straight lines on Co-ordinate system.

Chef gave him N points having (xi,yi) as co-ordinates (no two points will be identical), 
and asked him to make straight lines by joining these points, 
but Chef hates the axes and so he only wants straight lines neither parallel to X-axis nor parallel to Y-axis.

Sourav wonders how many straight lines he can make by selecting the given points 
such that no line is parallel to the axes. Sourav asks you to help, can you help him?

Sample Input 1 :
1
4
3 2
5 2
6 2
4 4

Sample Output 1 :
3


Sample Input 2 :
2
5  
3 9
5 1
6 1
4 7
6 2
3
2 2
3 3
4 4

Sample Output 2 :
8  
3


EXPLANATION:
Sample -1
Valid straight lines can only be created using poitns
(3,2) and (4,4)
(5,2) and (4,4)
(6,2) and (4,4)
All other lines are parallel to X-axis, hence answer is 3.

*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t,n,x,y,countx,county,total,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll xc[100003]={0},yc[100003]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>x>>y;
	        xc[x]++;
	        yc[y]++;
	        total=((n-1)*n)/2;
	        
	    }
	   // cout<<"to= "<<total<<endl;
	    for(ll j=0;j<=100000;j++)
	        {
	            if(xc[j]!=0)
	            {
	                total=total-((xc[j]*(xc[j]-1))/2);
	            }
	            if(yc[j]!=0 )
	            {
	                total=total-((yc[j]*(yc[j]-1))/2);
	            }
	        }
	    cout<<total<<endl;
	}
	return 0;
}
