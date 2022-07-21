#include <vector>;
#include <iostream>;

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = strs[0];
        
        for(auto x: strs){
            int it = 0;
            string newLongest;
            
            while(it < longestPrefix.size()){
                if(x[it] == longestPrefix[it]){
                    newLongest += x[it];
                    it++;               
                }else{
                    break;
                }
                
            }
            
            longestPrefix = newLongest;
        }
        
        return longestPrefix;
    }
};