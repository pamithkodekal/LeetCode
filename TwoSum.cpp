// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

//Solution : Acceepted by LeetCode
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<int> temp(2);
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j] ==target){
//                     temp[0] = i;
//                     temp[1] = j;
//                 }
//             }
//         }
//         return temp;
//     }
// };

//My Solution
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "nums = ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int target;
    cout << "target = ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[j] + num[i] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                found = true;
                break; // remove if you want all pairs
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "No pair found with the given target." << endl;
    }

    return 0;
}