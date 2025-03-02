#include<iostream>
using namespace std;
int MaximumConsecutiveOnes(int arr[],int n){
    int cnt=0;
    int maxcnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt =0;
        }
        maxcnt = max(cnt,maxcnt);
    }
    return maxcnt;
}
int main() {
    int arr[] = {0,1,1,0,1,1,1,0,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = MaximumConsecutiveOnes(arr, n);
    cout << "The maximum number of consecutive 1's in the array is: " << max << endl;
    return 0;
}