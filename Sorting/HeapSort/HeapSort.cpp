// .

// 🔧 What is Heap Sort?
// Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure:

// It first builds a max-heap from the input array.

// Then repeatedly extracts the maximum element from the heap and places it at the end of the array.

// Heap is then adjusted (heapified) to maintain the max-heap property.

// ⏱ Time and Space Complexity:
// Time Complexity: O(n log n) for all cases (best, avg, worst).

// Space Complexity: O(1) (in-place sorting).

// Not Stable (relative order of equal elements may change).

// 💡 Key Concepts
// Max-Heap: Parent node is always greater than its children.

// Heapify: Maintain heap property for a subtree.

// ✅ Complete C++ Code with Comments
// cpp
// Copy
// Edit

#include <iostream>
using namespace std;

// Heapify a subtree rooted at index i, where n is the size of heap
void heapify(int arr[], int n, int i) {
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;   // left child
    int right = 2 * i + 2;  // right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// Main function to perform Heap Sort
void heapSort(int arr[], int n) {
    // Step 1: Build max heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Step 2: One by one extract elements from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root (maximum) to end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Utility function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Main driver
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
// 🧠 Step-by-Step Example
// Input: 12, 11, 13, 5, 6, 7

// Build Max Heap:

// Heap becomes: 13, 11, 12, 5, 6, 7

// Swap root with last element:

// 13 swapped with 7 → [7, 11, 12, 5, 6, 13]

// Heapify root → [12, 11, 7, 5, 6, 13]

// Continue until sorted:

// Final sorted array: [5, 6, 7, 11, 12, 13]

