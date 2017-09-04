/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.


*/

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while(left <= right){
            int mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid;
            
            if (nums[left] <= nums[mid]){
                //左半有序
                if ( nums[left] <= target && target < nums[mid]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            else{
                //右半有序
                if ( target <= nums[right] && target > nums[mid]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main()
{
    return 0;
}