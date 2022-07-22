// O(N) time complexity
// O(N) space complexity
#include <iostream>;
#include <vector>;

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

 
        int carry = 1;
        for(int i = digits.size()-1 ; i >= 0 ; i--) {
            int value = (digits[i] + carry--) % 10;  
            digits[i] = value;
            value == 0 ? carry++ : carry = 0;
        }
        
        if(carry > 0) digits.insert(digits.begin(), 1);
        
        return digits;
    
        
    }
};
