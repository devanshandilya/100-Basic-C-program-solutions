#include<iostream>
#include <vector>
using namespace std;
//2-D vectors
//print matrix using 2D vectors
void fun(int m, int n, vector<vector<int> > mat)
{
       for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
    }
}
int main()
{
    int n,m;
    cin>>m;
    cin>>n;
    vector<vector<int> > mat(m,vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    fun(n,m,mat);
}