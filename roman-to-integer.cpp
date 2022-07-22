#include <iostream>;
#include <vector>;
#include <string>;

using namespace std;

class Solution {
public:
    int romanToInteger(char r){
    switch(r){
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return -1;
            break;
    }            
}
    int romanToInt(string s) {
        int total = 0;
        for(int i = 0; i < s.size(); i++){
            int current = romanToInteger(s[i]);
            int next = romanToInteger(s[i+1]);
            
            if( current >= next ){
                total += current;
            }else if( current < next ) {
                total += (next - current);
                i++;
            }
        }
        return total;
    }
};