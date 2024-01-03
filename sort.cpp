#include<iostream>
using namespace std;
string sortchar( string s) //declaring a function 
{
    vector <int> freq(26,0); //declaring a vector freq(26,0) as the numbering of charachters from 0 upto 26, or a to z
    for(int i =0;i< s.length();i++) //loop upto the length of the string that we will input in the main function
    {
        int index = s[i] - 'a'; //we subtract a to get index of first chrachter as 0 and adding +1 as index of further charchtes i.e a-a =0, b-a =1, c-a =2...
        freq[index]++; //incrementing to get to 26 i.e index of Z
    }
    int j = 0;
    for(int i =0; i<26;i++)//loop for indexes of all charachters from 0 to 25
    {
        while(freq[i]--) //while loop for condition freq vector decrementing 
        {
            s[j++] = i + 'a'; //for inserting the charachter as many times as necessary until the frequency of charachter becomes 0 with respect to input
        }
    }
    return s;
}
int main()
{
    string st;
    cout<<"Enter string to sort in ascending order of charachters : ";
    cin>>st;
    cout<<"Ascending Order: "<<sortchar(st);//calling function
    return 0;
} 
