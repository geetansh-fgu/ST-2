#include <bits/stdc++.h>
using namespace std;
int convertToFive(int N) {
   if(N==0){
      return 0;
   }
   int last_digit= N%10;
   if(last_digit==0)
      last_digit=5;
   return convertToFive(N/10)*10 +last_digit;
}
int main() {
   int N;cin>>N;
   cout << convertToFive(N) << endl;
}