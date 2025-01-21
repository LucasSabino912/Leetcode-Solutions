// https://github.com/LucasSabino912

/*
    https://leetcode.com/problems/find-closest-number-to-zero/

    Given an integer array nums of size n, return the number with the value closest to 0 in nums. 
    If there are multiple answers, return the number with the largest value.
*/

// Returns the absolute of an integer
int abs(int x){
    return (x < 0) ? -x : x; 
}

// Returns true if a x is closer to 0 than y
bool closest_to(int x, int y){
    return ((abs(x) < abs(y)) || (abs(x) == abs(y) && x > y)) ? true : false;
}

// Returns the closest number to 0 of a given array
int findClosestNumber(int a[], int length) {
    int closest = a[0];
    for(unsigned int i = 0; i < length; i++){
        if(closest_to(a[i], closest)){
            closest = a[i];
        }
    }

    return closest;
    
}
