//Q. Rotate array 90 degree anti-clockwise

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n; cin>>m>>n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
    }
    for (int j = n-1; j >= 0; j--)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
