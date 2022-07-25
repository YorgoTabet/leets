#include <vector>;

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        int current;
        
        while(fast < nums.size()){
            if(nums[fast] != current){
                current = nums[fast++];
                nums[slow] = current;
                slow++;
            }else{
                fast++;
            }
        }
        return slow;
    }
};
