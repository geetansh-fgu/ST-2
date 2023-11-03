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