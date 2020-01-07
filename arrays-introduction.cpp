https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArr(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int k;cin>>k;
        arr[i]=k;
    }

    reverseArr(arr,n);
    printArr(arr, n);
    return 0;
}
