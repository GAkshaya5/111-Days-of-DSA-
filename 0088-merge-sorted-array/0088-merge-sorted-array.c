void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;      // Pointer for the end of valid elements in nums1
    int j = n - 1;      // Pointer for the end of nums2
    int k = m + n - 1;  // Pointer for the last position in nums1

    // While there are elements in both arrays
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If there are remaining elements in nums2, copy them
    // (If elements remain in nums1, they are already in the right place)
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}