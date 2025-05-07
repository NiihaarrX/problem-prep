#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0;i < n-1;i++) {
        bool check = false;
        for(int j = 0;j < n - i - 1;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                check = true;
            }
        }
        if(!check) break;
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 3, 6};
    bubble_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
