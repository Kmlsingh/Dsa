#include<iostream>
using namespace std;

int linnearSearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int x = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linnearSearch(arr, n, x);
    if(result == -1) {
        cout << "Element is not present in the array" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }
    return 0;
}