/**
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
*/

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        
        int length = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[length] = nums[i];
                length++;
            }
        }
        return length;
    }
};

int main(){
    Solution solution;
    vector<int> vec = {0,2,2,5,6,7,7,8};
    //vector<int> vec = {1,1,2};
    int length = solution.removeDuplicates(vec);
    printf("%d\n", length);
    for(int i = 0; i < length; i++){
        printf("%d ", vec[i]);
    }
    printf("\n");
    return 0;
}