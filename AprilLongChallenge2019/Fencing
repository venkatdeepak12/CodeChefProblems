/*
There is a field with plants — a grid with N rows (numbered 1 through N) and M columns (numbered 1 through M); 
out of its NM cells, K cells contain plants, while the rest contain weeds. Two cells are adjacent if they have a common side.

You want to build fences in the field in such a way that the following conditions hold for each cell that contains a plant:

it is possible to move from this cell to each adjacent cell containing a plant without crossing any fences
it is impossible to move from this cell to any cell containing weeds or to leave the grid without crossing any fences
The fences can only be built between cells or on the boundary of the grid, i.e. on the sides of cells. 
The total length of the built fences is the number of pairs of side-adjacent cells such that there is 
a fence built on their common side plus the number of sides of cells on the boundary of the grid which have fences built on them. 
Find the minimum required total length of fences that need to be built.

Example Input
2
4 4 9
1 4
2 1 
2 2
2 3
3 1
3 3
4 1
4 2
4 3
4 4 1
1 1

Example Output
20
4

Explanation
Example case 1: The field looks like this ('x' denotes a cell containing a plant, '.' denotes a cell containing weeds):

...x
xxx.
x.x.
xxx.
An optimal solution is to build fences around the topmost plant (with length 4), 
around the remaining eight plants (with length 12) and around the hole between them (with length 4). The total length is 4+12+4=20

*/
//CODE:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int check(long arr[],long m,long  k,long key)
{
    long  middle;
   while(m<= k)
      {
            middle = (m + k) / 2;
            if(key > arr[middle])
                  m = middle + 1;	
            else if(key < arr[middle])
                  k = middle - 1;		
            else
                  return 1;
      }
   return 0;
}
int main()
{
    int t;
    long  n,m,k,i,ans,sum,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(k>m*n||n<1||m<1)
        {
            exit(0);
        }
        long  a[k];
        for(i=0;i<k;i++)
        {
            cin>>p>>q;
            if(p>n||p<1)
            {
                exit(0);
            }
            if(q>m||q<1)
            {
                
                exit(0);
            }
            
              a[i]=((p-1)*m)+(q-1);  
           // cout<<a[i]<<endl;
        }
        sort(a,a+k);
        sum=k*4;
        for(i=0;i<k;i++)
        {
            
            if(i<k-1){
              if(a[i+1]==a[i])
              {
                  exit(0);
              }
            if(a[i]/m==a[i+1]/m){
                
            if(a[i]+1==a[i+1])
            {
                sum-=2;
            }}
            }
           
           ans=check(a,i,k,a[i]+m);
            if(ans)
            {
               sum-=2; 
            }
            
        }
        cout<<sum<<endl;
    }
    return 0;
}
