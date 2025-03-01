#include<iostream>
using namespace std;
int checkifSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;

        }
        
            return true;
        
    }
int main() {
    int arr1[] = {2,5,1,3,0};
    int n = 5;
    if(checkifSorted(arr1, n)){
        cout << "The array is sorted" << endl;
    }
    else{
        cout << "The array is not sorted" << endl;
    }
    int arr2[] =  {8,10,5,7,9};
    n = 5;
    if(checkifSorted(arr2, n)){
        cout << "The array is sorted" << endl;
    }
    else{
        cout << "The array is not sorted" << endl;
    }
    return 0;
  }