#include<iostream>
using namespace std;
void helper(int n, int x){
    if(x>n)return;
    if(x<n){
        cout<<x<<endl;
    }
    for(int i = 0; i <= 9; i++){
        helper(n, x*10+i);
    }
}
int main(){
    int n;cout<<"Enter Number: ";cin>>n;
    helper(n,1);
    return 0;
}