#include<iostream>
using namespace std;
void tow(int n, char s, char h, char t){
    if(n == 0)return;
    tow(n-1,s,t,h);
    cout<<"Moving ring "<<n<<" from "<<s<<" to "<<t<<endl;
    tow(n-1, h, s, t);
}
int main(){
    int n = 5, step = 0;
    tow(n, 'A', 'B', 'C');
    return 0;
}