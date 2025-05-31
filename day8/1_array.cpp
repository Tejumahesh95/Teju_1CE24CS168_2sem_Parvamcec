#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int* ptr = arr;
    int max = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    cout << "The greatest number is: " << max << endl;

    return 0;
}