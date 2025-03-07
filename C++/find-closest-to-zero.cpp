// https://github.com/LucasSabino912

/*
    https://leetcode.com/problems/find-closest-number-to-zero/

    Given an integer array nums of size n, return the number with the value closest to 0 in nums. 
    If there are multiple answers, return the number with the largest value.
*/

#include <vector>
#include <cmath> // To use abs()
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];

        for(int num : nums){
            if(isCloser(num, closest)){
                closest = num;
            }
        }

        return closest;
    }

    private:
    bool isCloser(int num, int closest){
        // Checks if x is closer to 0 than y
        if(abs(num) < abs(closest)) return true;
        if(abs(num) == abs(closest)) return num > closest; // If they are equal, choose the greater number 
        return false;
    }
};
