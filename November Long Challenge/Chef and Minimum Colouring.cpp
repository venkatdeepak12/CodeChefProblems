/*

Chef placed N boxes (numbered 1 through N) in a straight line. For each valid i, the i-th box contains Ai balls.

Then, Chef painted the boxes using M distinct colours in such a way that for each M consecutive boxes,
no two of these boxes have the same colour.

Help Chef choose M distinct boxes (not necessarily consecutive) 
such that no two of the chosen boxes have the same colour and the difference between the number of balls in a box 
that contains the maximum number of balls and a box that contains the minimum number of balls
among the chosen boxes is the smallest possible.

Example Input
1   
4 2  
10 20 15 28

Example Output
5

Explanation
Example case 1: Let's denote the colours by 'R' (red) and 'G' (green). 
                There are two possible ways of painting the boxes: "RGRG" and "GRGR".

                There are four ways to choose two boxes (one red and one green box).
                The numbers of balls in them and the differences are:

                (10,28) with difference 28−10=18
                (10,20) with difference 20−10=10
                (15,28) with difference 28−15=13
                (15,20) with difference 20−15=5, which is the smallest possible

*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void merge(long long arr[],long long l,long long m,long long r,long long diff[]) 
{ 
    long long i, j, k; 
    long long n1 = m - l + 1; 
    long long n2 =  r - m; 
    long long L[n1], R[n2],L1[n1],L2[n2]; 
    for (i = 0; i < n1; i++) 
    {
        L[i] = arr[l + i]; 
        L1[i]=diff[l+i];
    }
    for (j = 0; j < n2; j++) 
    {
        R[j] = arr[m + 1+ j];
        L2[j]=diff[m+1+j];
    }
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            diff[k]=L1[i];
            
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            diff[k]=L2[j];
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        diff[k]=L1[i];
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        diff[k]=L2[j];
        j++; 
        k++; 
    } 
}
void mergeSort(long long arr[],long long l,long long r,long long diff[]) 
{ 
    if (l < r) 
    { 
        long long  m = l+(r-l)/2; 
        mergeSort(arr, l, m,diff); 
        mergeSort(arr, m+1, r,diff); 
        merge(arr, l, m, r,diff); 
    } 
} 
int binary(long long a[],long long n) 
{ 
    long long i=0;
    for(i=0;i<n;i++){
        if (a[i]==-1){
            return 0; 
        }
    } 
    return 1;
} 
long long maximum(long long a[],long long n)
{
    long long max=-1,i;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
    
}
long long minim(long long a[],long long n)
{
    long long min=1000000000,i;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
    
}
long long index(long long a[],long long n, long long ans){
    long long i;
    for(i=0;i<n;i++){
        if (a[i]==ans){
            return i;
        }
    }
}
int main() {
    fast;
	long long t,n,i,j,m,k,min,max,ans,g;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    long long a[n],diff[n],check[m],minimum;
	    
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(i<m)
	        {
	            check[i]=-1;
	        }
	        diff[i]=i%m;
	    }
	    /* for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<"  "<<diff[i]<<endl;
	    }*/
	    mergeSort(a,0,n-1,diff);
	  /*  for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<"  "<<diff[i]<<endl;
	    }*/
	    minimum=10000000005;
	    g=0;
	    for(i=0;i<n;i++)
	    {
	        check[diff[i]]=i;
	       /* if(min>check[diff[i]])
	        {
	            min=check[diff[i]];
	        }
	        if(max<check[diff[i]])
	        {
	            max=check[diff[i]];
	        }
	        cout<<"max= "<<max<<" min= "<<min<<endl;
	       ans=a[max]-a[min];*/
	        /*for(j=0;j<m;j++)
	    {
	        cout<<check[j]<<endl;
	    } */
	       if(binary(check,m+1))
	        {
	            //for(j=0;j<m;j++){
	            //    cout<<check[j]<<ends;
	            //}   
	            //cout<<endl;
	            max=maximum(check,m);
	            min=minim(check,m);
	            ans=a[max]-a[min];
	           // cout<<" max= "<<max<<" min= "<<min<<"ans= "<<ans<<endl;
	            if(minimum>ans)
	            {
	                minimum=ans;
	            }
	            check[index(check,m,min)]=-1;
	        }
	    }
	     /*for(i=0;i<m;i++)
	    {
	        cout<<check[i]<<endl;
	    }*/
	    cout<<minimum<<"\n";
	}
	return 0;
}
