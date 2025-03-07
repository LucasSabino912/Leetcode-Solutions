// https://github.com/LucasSabino912

/*
    https://leetcode.com/problems/roman-to-integer/

    Given a roman numeral, convert it to an integer.
*/

#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        // Create map of Roman numeral values
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int prevValue = 0;

        // Iterate through the Roman numeral string
        for (int i = s.length() - 1; i >= 0; i--) {
            int currentValue = romanMap[s[i]]; // Get the value of the current Roman numeral

            // Check if we need to subtract or add the value
            if (currentValue < prevValue) {
                total -= currentValue; // Subtract if a smaller numeral comes before a larger one
            } else {
                total += currentValue; // Otherwise, add the value
            }

            prevValue = currentValue; // Update previous numeral value
        }

        return total;
    }
};

