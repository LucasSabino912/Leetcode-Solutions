// https://github.com/LucasSabino912

/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

char * mergeAlternately(char * word1, char * word2){
    unsigned int len1 = 0, len2 = 0, k = 0, i = 0, j = 0;
    len1 = strlen(word1);
    len2 = strlen(word2);

    char* merged = malloc(len1 + len2 + 1);

    while(i < len1 && j < len2){
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }

    while(i < len1){
        merged[k++] = word1[i++];
    }

    while(j < len2){
        merged[k++] = word2[j++];
    }

    merged[k] = '\0';

    return merged;
}
