// Q.There are n stairs, a person standing at the bottom wants to climb stairs to reach the nth stair.
//The person can climb atmost m stairs at a time, the task is to count the number of ways that a person can reach at the top.

#include<iostream>
using namespace std;
int helper(int n, int &m){
    if(n<0)return 0;
    if(n==0)return 1;
    int ways = 0;
    for(int i = 1; i <= m; i++){
        ways += helper(n-i, m);
    }
    return ways;
}
int main(){
    int n,m; cin>>n>>m;
    cout<<helper(n,m)<<endl;
    return 0;
}
