#include<iostream>
#include<map>

using namespace std;

int fibonacci(int n, map<int,int>& dp){
    if (dp.find(n) != dp.end())
        return dp[n];
    if(n<=1)
        return n;
    dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
    return dp[n];
} 

int main(){
    map<int,int> dp;
    int n=6;
    cout<<fibonacci(n,dp);
    return 0;
}