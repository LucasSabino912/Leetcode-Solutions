// https://github.com/LucasSabino912

/*
    https://leetcode.com/problems/is-subsequence/

    Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

    A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the 
    characters without disturbing the relative positions of the remaining characters. Basically, if s is a subset of t, 
    s is a subsequence of t.
*/

bool isSubsequence(char* s, char* t) {
    unsigned int slen = strlen(s), tlen = strlen(t); // String's length
    unsigned int i = 0, j = 0; // Indexes
    
    while(i < slen && j < tlen){
        if(s[i] == t[j]){
            i++;
        }
        j++;
    }

    return i == slen;
}
