//this is comment

#include <bits/stdc++.h>
using namespace std;

pair<int, int> func(vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());            // nlogn
    int i = 0;
    int j = arr.size() - 1;
 
    while (i < j)  {                          // n with
        int sum = arr[i] + arr[j];
        if (sum == target) {
            return {arr[i], arr[j]};
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return {-1, -1}; // Indicates no valid pair found
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    pair<int, int> result = func(arr, target);
    if (result.first != -1) {
        cout << "Pair found: " << result.first << ", " << result.second << "\n";
    } else {
        cout << "No pair found with the given sum.\n";
    }

    return 0;
}
