#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0;i < n-1;i++) {
        int min_index = i;
        for(int j = i+1;j < n;j++) {
            if(arr[j] < arr[min_index]) {   
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 3, 6};
    selection_sort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}
