#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void counting_sort(vector<int> &arr) {
    int max_element = *std::max_element(arr.begin(), arr.end());
    int min_element = *std::min_element(arr.begin(), arr.end());
    int range = max_element - min_element + 1;
    
    vector<int> count(range, 0);
    
    for(int i = 0; i < arr.size(); i++) {
        count[arr[i] - min_element]++;
    }
    
    for(int i = 1; i < count.size(); i++) {
        count[i] += count[i - 1];
    }
    
    vector<int> output(arr.size());
    
    for(int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min_element] - 1] = arr[i];
        count[arr[i] - min_element]--;
    }

    for(int i = 0; i < arr.size(); i++) {
        arr[i] = output[i];
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 3, 6};
    counting_sort(arr);
    for(int num : arr) {
        cout << num << " ";
    }
    return 0;
}