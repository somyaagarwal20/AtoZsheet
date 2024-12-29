#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotatebyd(int arr[], int n , int k){

    int d = k%n;
    if(k%n==0){
        return;
        }
        reverse(arr,arr+d);
        reverse(arr+d,arr+n);
        reverse(arr,arr+n);
    
}

 int main(){
   int n;
   cin>>n;
   int k;
   cin>>k;

   int arr[n];

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    rotatebyd(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
 }