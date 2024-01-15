#include <iostream>
using namespace std;
int findindexlinear(int arr[], int  n)
{
    for(int i=0;i<n;i++)
    {
    if(arr[i]%2==0) //condition if index element is even
     return i; //return the index if element is even
    else
     i=i+1; //go to the next element index to check condition
    } 
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {  
        cin>>arr[i]; //taking input array separated by size
    }
    cout<<"Index of first even element: "<<findindexlinear(arr,n)<<endl;//calling function
}