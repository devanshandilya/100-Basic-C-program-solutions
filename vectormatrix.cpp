//print a matrix using 2-D vectors
//print a matrix using function
//2-D vectors basics
#include<iostream>
#include <vector> //using vector library
using namespace std;

void fun(int m, int n, vector<vector<int> > mat) //declaring funtion with 2-D vector integer declared as mat
{
       for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) //2-D loop to get integers line by line i.e row and column like a matrix
        {
            cout<<mat[i][j]<<" "; //printing the matrix separated by space with i and j being the rows and columns in the loop
        }
    }
}
int main()
{
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    vector<vector<int> > mat(m,vector<int> (n)); //declaring a 2-D vector called mat
    cout<<"Enter elements in matrix: "<<endl; //endl to end line so as to input elements in a pattern from the next line
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];  //enter matrix following the rows and columns or enter the matrix in one line, output will be in matrix form either way
        }
    }
    cout<<"matrix is: "<<fun(n,m,mat);
}
