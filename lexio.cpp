// Q. Take as input N, a number. Write a recursive function which prints counting from 0 to N in lexicographical order.
// In lexicographical (dictionary) order 10, 100 and 109 will be printed before 11.

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
