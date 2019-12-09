/*

Alice and Bob created N and M recipes, respectively (N,M≥1),
and submitted them to Chef for evaluation. Each recipe is represented by a string containing only lowercase English letters.
Let's denote Alice's recipes by A1,A2,…,AN and Bob's recipes by B1,B2,…,BM.

Accidentally, Chef mixed up those recipes ― now, he has L=N+M recipes in a sequence S1,S2,…,SL.
Thankfully, the recipes created by Alice and Bob are distinguishable from each other.
It is well-known that for each recipe s created by Alice,
the following property holds, and for each recipe created by Bob, 
it does not hold: For each 1≤l<r≤|s|, the substring sl,sl+1,…,sr contains at least as many vowels as consonants. 
The letters 'a', 'e', 'i', 'o', 'u' are vowels, while the other letters are consonants.

The score of a candidate who made K recipes is calculated as the product of xc/fxKc for all letters c 
that occur in at least one of these recipes; here, 
xc is the number of recipes which contain the letter c 
fxc is the total number of occurrences of this letter in all K recipes.

Let's denote the scores of Alice and Bob by scA and scB respectively. 
Chef wants to know their ratio scA/scB.
We know that Chef is a legendary cook, but he is not very good at calculating, so he is asking you to find that number.

Example Input
2
4
aba
abc
bab
aac
3
aba
baab
abc

Example Output
1.1250000
0.0277778

*/

//Code:

# cook your dish here
#partition of strings betwween Bob and Alice
def partition(s):
    l=len(s)
    d='aeiou'
    for i in range(l):
        if(i+1<l):
            if(s[i] not in d and s[i+1] not in d):
                return 0
        if(i+2<l):
            if(s[i] not in d and s[i+2] not in d):
                return 0
    return 1

#Main code        
t=int(input())
while(t!=0):
    t-=1 
    n=int(input())
    alice=[]
    bob=[]
    for i in range(n):
        s=input()
        if(partition(s)==1):
            alice.append(s)
        else:
            bob.append(s)
    alocc=[0]*26  #alice occurances
    bocc=[0]*26  #bob occurances
    alrow=[0]*26    # alice row occurances
    bobrow=[0]*26   #bob row occurances
    r=[0]*26       #refernce array
    for i in range(len(alice)):
        a=alice[i]
        for j in range(len(a)):
            h=ord(a[j])-ord('a')
            alocc[h]+=1 
            if(r[h]==0):
                alrow[h]+=1
                r[h]=1
        r=[0]*26
    r=[0]*26
    for i in range(len(bob)):
        b=bob[i]
        for j in range(len(b)):
            h=ord(b[j])-ord('a')
            bocc[h]+=1 
            if(r[h]==0):
                bobrow[h]+=1
                r[h]=1
        r=[0]*26
    #print(alice)
    #print(alocc)
    #print(alrow)
    #print(bob)
    #print(bocc)
    #print(bobrow)
    numa=1
    numb=1 
    dena=1 
    denb=1
    for i in range(26):
        if(alocc[i]!=0):
            numa=numa*alrow[i]
            dena=dena*alocc[i]
        if(bocc[i]!=0):
            numb=numb*bobrow[i]
            denb=denb*bocc[i]
    n1=len(alice)
    m=len(bob)
    den=1
    if(dena==denb):  #if denominator of bob is equal to denominator of alice
        res=(numa*pow(denb,m-n1)/numb)
    elif(m==n1):        #if size of both lists are equal
        #print(denb," ",dena)
        den=denb/dena
        res=(numa*pow(den,m)/numb)
    else:
        if(m%2==0):
            h=pow(denb,m//2)
        else:
            h=pow(denb,m//2+1)
        if(n1%2==0):
            k=pow(dena,n1//2)
        else:
            k=pow(dena,n1//2+1)
        den=h/k 
        den=den*den
        if(m%2!=0):
            den=den/denb 
        if(n1%2!=0):
            den=den*dena
        res=(numa*den/numb)
    if(res>10000000):
        print("Infinity")
    else:
        print('%.8f'%(res))
    
 
