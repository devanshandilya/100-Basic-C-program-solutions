#include<iostream>
using namespace std;
int linearsearch(int arr[], int key,int n)//declaring function to do llinear search
{
    for(int i=0; i<n; i++) //loop to iterate index one at a time to check key element 
    {
        if(arr[i]==key) //condition in loop to return the index value of key element if it exists in the array
         return i; //returning the index value of key element
    }
    return -1;//returning to -1 i.e element does not exist in the array
}
int main()
{
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for( int i=0; i<n; i++)
    {
        cin>>arr[i]; //taking input array, elements separated by space
    }
    
    cout<<"Enter element to search: ";
    int key;
    cin>>key; //taking target element as input to search for its index in array
    cout<<key<<" is at index "<<linearsearch(arr, key, n)<<endl; //calling function to return the index value of key element
}