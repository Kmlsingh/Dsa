#include<iostream>
using namespace std;
int leftrotatebyone(int arr[],int n){
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];

    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    leftrotatebyone(arr, n);
    return 0;
}