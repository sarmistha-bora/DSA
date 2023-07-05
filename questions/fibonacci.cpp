/*
The Fibonacci sequence are numbers in the following integer series:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144… 
where the n-th number is the sum of the n-1-th and n-2-th number. 
That is F(n) = F(n-1) + F(n-2) where F(0) =0 and F(1) =1.
*/

#include<bits/stdc++.h>
using namespace std;

//bruteforce 
//TC O(2^n) SC O(n)
int fibb_rec(int n){

    if(n==0 || n==1)
    return n;

    return fibb_rec(n-1)+fibb_rec(n-2);
}

//recursion with memoization(top down)
//TC O(n) SC O(n)
#define NIL -1

int mem[n+1]={NIL};

int fibb_mem(int n){
    if(mem[n]==NIL){
            if(n==0 || n==1)
            mem[n]=n;
            else 
            mem[n]=mem[n-1]+mem[n-2];
    }
    return  mem(n);
}

//dp/tabulation(bottom up)
//TC O(n) SC O(n)

int fibb_dp(int n){
    int dp[n+1];

    //base states
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    fibb_rec(n);
    return 0;
}