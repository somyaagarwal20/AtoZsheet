#include<iostream>
using namespace std;
int largestelemt(int arr[], int n){
    int largest= INT32_MIN;
    for(int i=0;i<n;i++){
         if(arr[i]>largest){
            largest=arr[i];
         }
        }
        return largest;
    }


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<largestelemt(arr,n);

    
}