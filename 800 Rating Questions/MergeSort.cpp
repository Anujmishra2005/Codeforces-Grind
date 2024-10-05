#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) cin >> arr[i];
    mergeSort(arr, 0, size - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
