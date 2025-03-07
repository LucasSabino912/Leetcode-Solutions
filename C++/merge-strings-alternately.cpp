// https://github.com/LucasSabino912

/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        int len1 = word1.size(), len2 = word2.size();

        // Alternamos caracteres mientras ambas palabras tengan caracteres restantes
        while (i < len1 && j < len2) {
            merged += word1[i++];
            merged += word2[j++];
        }

        // Agregamos los caracteres restantes (si los hay)
        merged += word1.substr(i);
        merged += word2.substr(j);

        return merged;
    }
};
