#include <iostream>;
#include <vector>;

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indexes;
        indexes.assign({-1, -1});
        for(int i = 0; i != nums.size() && indexes[1] == -1; i++){
            indexes[0] = i;
            int lookFor = target - nums[i];
            for(int j = 0; j != nums.size(); j++){
                if(nums[j] == lookFor && j != i){
                    indexes[1] = j;
                };
            };
        };
        return indexes;
    };
};