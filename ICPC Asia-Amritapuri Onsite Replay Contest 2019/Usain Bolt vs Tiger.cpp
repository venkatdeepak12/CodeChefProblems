/*
Usain Bolt announced that he'll be retiring after the 2017 World Championship. 
Though his final season did not end gloriously, we all know that he is a true legend and we witnessed his peak during 2008 - 2013.

Post retirement, Usain Bolt is still leading an adventurous life.
He's exploring the unexplored parts of the globe. But sometimes he gets bored, 
and reads questions asked about him on Quora. One such question he read was,
"Who would win a race between Usain Bolt and a tiger if the race is on a straight line track and the tiger is distancetoBolt 
meters behind Bolt? The finishing point is finish meters away from Bolt's starting position. 
The tiger starts with an initial speed of 0 meter/second, and will accelerate itself with tigerAccelaration m/s2. 
Bolt can run with a constant speed of boltSpeed m/s from start to finish. Given these values, 
find out who will win the race - Bolt or the tiger? "

Note that Bolt will win the race if and only if he touches the finishing line before the tiger touches it. 
If both of them finish together, the tiger is announced as the winner since Bolt was given an initial advantage.
See the figure below for more clarity.

Since Bolt was busy practicing in the tracks during his Physics school classes,
he is asking for your help to solve the question. Can you please help him?

He just remembers two formulae from the class, and thinks that they will be useful to you:

Displacement(S) = ut +(1/2)at2 where u is the initial velocity , #is the acceleration and t is the time taken.

Velocity = Displacement/Time

*/

//Code:
#include <iostream>
#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
	ll t,n,i,j,finish,dis,tiger,bolt;
	double s1,s2,t1;
	cin>>t;
	while(t--)
	{
	    cin>>finish>>dis>>tiger>>bolt;
	    t1=double(finish)/double(bolt);
	    //cout<<t1<<endl;
	    s1=(tiger*t1*t1)/2;
	    //cout<<s1<<endl;
	    if(s1>=finish+dis)
	    {
	        cout<<"Tiger\n";
	    }
	    else
	    {
	        cout<<"Bolt\n";
	    }
	}
	return 0;
}


