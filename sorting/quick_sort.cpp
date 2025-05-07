    #include <iostream>
    #include <vector>

    using namespace std;

    int partition(vector<int> &arr, int low, int high) {
        int pivot = arr[low];
        int count = 0;
        for(int i = low + 1; i <= high; i++) {
            if(arr[i] <= pivot) count++;
        }
        int pivotIndex = low + count;
        swap(arr[pivotIndex], arr[low]);
        int i = low, j = high;
        while(i < pivotIndex && j > pivotIndex) {
            while(i < pivotIndex && arr[i] <= pivot) i++;
            while(j > pivotIndex && arr[j] > pivot) j--;
            if(i < pivotIndex && j > pivotIndex) {
                swap(arr[i], arr[j]);
            }
        }
        return pivotIndex;
    }

    void quick_sort(vector<int> &arr, int low, int high) {
        if(low < high) {
            int pi = partition(arr, low, high);
            quick_sort(arr, low, pi - 1);
            quick_sort(arr, pi + 1, high);
        }
    }

    int main() {
        vector<int> arr = {5, 2, 9, 1, 3, 6};
        quick_sort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        return 0;
    }

