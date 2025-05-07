#include <iostream>

using namespace std;

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
}

int main() {
    int n, target;
    cin >> n >> target;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = linear_search(arr, n, target);
    if (result != -1) cout << "Target found at index " << result << endl;
    else cout << "Target not found" << endl;
    
    return 0;
}