//Problem Statement

/*
Write a program to find if a given integer x appears more than n/2
times in a sorted array of n integers. Solve using divide and conquer
algorithm.
*/


#include <bits/stdc++.h>
using namespace std;
void solve(){
    //size of array
    int size;
    cin>>size;

    //Array
    int arr[size];

    //Filling Array
    for(int i=0;i<size;i++) cin>>arr[i];

    //target integer
    int target;
    cin>>target;

    //Check for empty array
    if(size==0) return;

    //leftmost and rightmost index of occurance of that element
    long long int left=0,right=size;
    long long int mid;

    //Binary search for finding leftmost index
    while(left<right){
        
        mid=left+(right-left)/2;
        if(mid==size) break;
        if(arr[mid]>=target){
            right=mid;
        }
        else{
            left=mid+1;
        }
    }

    right=left+size/2;

    //Minimum condition for an element if it is repeating more than n/2 times
    if(arr[left]==arr[right]) cout<<"YES, the integer : '"<<target<<"' Appears more than n/2 times"<<endl;
    else cout<<"NO, the integer : '"<<target<<"'did't appear more than n/2 times"<<endl;
    return;
}
int main(){
   solve();
   return 0;
}