#include<iostream>

using namespace std;

// optimal solution

int secondlargest(int arr[], int n){
    int largest= arr[0];
    int seclargest = INT32_MIN;

    for(int i=0;i<n;i++){
       if(arr[i]>largest){
        seclargest=largest;
        largest=arr[i];
       }
       else if (arr[i]>seclargest && arr[i]!=largest){
        seclargest=arr[i];
       }
    }

    // for(int i=0;i<n;i++){
    //     if(arr[i]>largest){
    //     largest=arr[i];
    //     }
    // }
    //  for(int i=0;i<n;i++){
    //     if(arr[i]>seclargest && arr[i]!=largest){
    //         seclargest=arr[i];
    //     }
    //  }
     return seclargest;
}

 int main(){
   int n;
   cin>>n;

   int arr[n];

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<secondlargest(arr,n);



 }