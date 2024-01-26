//uses of 2-D arrays in c++
#include<iostream>
using namepsace std;
int main()
{
  int m;
  int n;
  cout<<"Enter number of rows and columns with space: "
  cin>>m, n;
  int arr[m][n];
  cout<<"Enter below the elements in 2-D array (matrix): "<<endl;
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
        {
          cin>>arr[i][j];
        } 
    }
  cout<<arr[m][n];
  return 0;
} 
