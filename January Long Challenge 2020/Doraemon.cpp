/*

Doraemon has a matrix with N rows (numbered 1 through N) and M columns (numbered 1 through M). 
Let's denote the element in row i and column j by Ai,j.
Next, let's define a sub-row of a row r as a sequence Ar,x,Ar,x+1,…,Ar,y for some x and y (1≤x≤y≤M) and 
a sub-column of a column c by Ax,c,Ax+1,c,…,Ay,c for some x and y (1≤x≤y≤N).

You need to find the number of pairs (sub-row of some row, sub-column of some column) with the following properties:

1. Both sequences (the sub-row and the sub-column) have the same length.
2. This length is odd.
3. The central elements of both sequences are the same (they correspond to the same element of the matrix).
4. Both sequences are palindromes.

Example Input
1
3 3
2 1 2
1 1 1
2 1 2

Example Output
10

Explanation
Example case 1: Each element forms a valid pair (where the sub-row and sub-column contain only this element) 
                and the middle row and middle column also form one valid pair.

*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace boost::multiprecision;
using namespace std;

int main() {
	fast;
	ll t,n,i,j,m,count,min,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    count=0;
	    ll a[n][m];
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    if(n<=m)
	    {
	        min=n;
	    }
	    else
	    {
	        min=m;
	    }
	    
	    for(i=0;i<n;i++)
	    {
	            for(j=0;j<m;j++)
	            {
	                    for(k=1;k<=(min/2);k++)
	                    {
	                        if(i-k>=0 && i+k<n && j-k>=0 && j+k<m && a[i-k][j]==a[i+k][j] && a[i][j-k]==a[i][j+k])
	                        {
	                            count++;
	                        }
	                        else
	                        {
	                            break;
	                        }
	                    }
	           }
	    }
	    cout<<(n*m)+count<<endl;
	}
	
	return 0;
}
