#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of the key
int first_occur(vector<int> &v, int key, int n) {
    int start = 0;
    int end = n - 1;
    int res = -1; // Variable to store the result (index of the first occurrence)

    // Perform binary search to find the first occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid-point to avoid overflow
        if (v[mid] == key) { // If key is found
            res = mid;       // Store the index
            end = mid - 1;   // Continue searching in the left half
        }
        else if (key < v[mid]) { // If key is smaller than mid element
            end = mid - 1;       // FIXED: Correct condition to search left half
        }
        else {                   // If key is larger than mid element
            start = mid + 1;     // Continue searching in the right half
        }
    }
    return res; // Return the first occurrence index or -1 if not found
}

// Function to find the last occurrence of the key
int last_occur(vector<int> &v, int key, int n) {
    int start = 0;
    int end = n - 1;
    int res = -1; // Variable to store the result (index of the last occurrence)

    // Perform binary search to find the last occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid-point to avoid overflow
        if (v[mid] == key) { // If key is found
            res = mid;       // Store the index
            start = mid + 1; // Continue searching in the right half
        }
        else if (key < v[mid]) { // If key is smaller than mid element
            end = mid - 1;       // FIXED: Correct condition to search left half
        }
        else {                   // If key is larger than mid element
            start = mid + 1;     // Continue searching in the right half
        }
    }
    return res; // Return the last occurrence index or -1 if not found
}

// Function to return both first and last occurrence of the key
pair<int, int> FandL(vector<int> &v, int key, int n) {
    int first = first_occur(v, key, n); // Get the first occurrence
    if (first == -1) return {-1, -1};   // If key is not found, return {-1, -1}
    int last = last_occur(v, key, n);   // Get the last occurrence
    return {first, last};               // Return both indices
}

// Function to count the total number of occurrences of the key
int count(vector<int> &arr, int key, int n) {
    pair<int, int> ans = FandL(arr, key, n); // Get first and last occurrence
    if (ans.first == -1) return 0;           // If key is not found, return 0
    return (ans.second - ans.first + 1);     // Return the total count
}

int main() {
    vector<int> v = {1, 2, 3, 3, 3, 3, 4}; // Input array
    int n = 7;                             // Size of the array
    int key = 3;                           // Key to find
    int ans = count(v, key, n);            // Get the count of occurrences
    cout << "The total no. of 3 is: " << ans << endl; // Print the result

    return 0;
}
