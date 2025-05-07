#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &arr) {
    int n = arr.size();
    int j;
    for(int i = 1;i < n;i++) {
        int key = arr[i];
        for(j = i-1;j >=0;j--) {
            if(arr[j] > key) arr[j+1] = arr[j];
            else break;
        }
        arr[j+1] = key;
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 3, 6};
    insertion_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
