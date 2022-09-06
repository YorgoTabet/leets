#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size(), pivot = nums.size() / 2;
        
        while(low<high){
            if(nums[pivot] == target) return pivot;
            if(nums[pivot] < target){
                low = pivot + 1;
            }else{
                high = pivot;
            }
            pivot = low + (high - low)/2;
        }
        return pivot;
    }