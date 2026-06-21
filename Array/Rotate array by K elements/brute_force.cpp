#include <bits/stdc++.h>
using namespace std;

void KRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d %= n;

    vector<int> temp(d);

    // Store first d elements
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy stored elements at the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    KRotate(arr, k);

    cout << "Array after left rotation by " << k << " positions:\n";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}