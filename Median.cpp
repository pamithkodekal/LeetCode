//==============================================================|
// ************ Scroll to line no 34 for Solution***************|
//==============================================================|

// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.

// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

 

// Constraints:

//     nums1.length == m
//     nums2.length == n
//     0 <= m <= 1000
//     0 <= n <= 1000
//     1 <= m + n <= 2000
//     -106 <= nums1[i], nums2[i] <= 106

#include <iostream>
#include <vector>
using namespace std;

int main() {
    size_t m, n;
    cin >> m >> n;

    vector<int> nums1(m), nums2(n);

    for (size_t i = 0; i < m; i++) cin >> nums1[i];
    for (size_t i = 0; i < n; i++) cin >> nums2[i];

    vector<int> merged(m + n);

    size_t i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    size_t total = m + n;
    double median;

    if (total % 2 == 1) {
        median = merged[total / 2];
    } else {
        median = (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    }

    cout << median;
    return 0;
}
