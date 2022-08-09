#include <iostream>;
#include <vector>;
#include <unordered_map>;

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> set{};
        for(auto x: nums){
            set[x]++;
        }
        for(auto x: set){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
    }
};