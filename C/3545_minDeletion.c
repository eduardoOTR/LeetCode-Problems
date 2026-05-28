/*
Solution to the "Minimun Deletions for At Most K Distinct Characters" problem from LeetCode.

"You are given a string s consisting of lowercase English letters, and an integer k.
Your task is to delete some (possibly none) of the characters in the string so that the number of distinct characters in the resulting string is at most k.
Return the minimum number of deletions required to achieve this."

Author: Eduardo Ramos, Apr 14, 2026
*/

#include <stdio.h>
#include <string.h>

int minDeletion(char* s, int k) {
    int size, counterLetters[26] = {0}, minimumDeletions = 0, swapped = 1, j = 0, z = 0, i, noZero[26] = {0}, w = 0;
    char temp;

    size = strlen(s);

    while ( swapped ) {
        swapped = 0;
        for ( i = 0; i < size - 1 - j; i++ ) {
                if (s[i] > s[i+1]) {
                    temp = s[i];
                    s[i] = s[i+1];
                    s[i+1] = temp;
                    swapped = 1;
                }
            }
            j++;
        }

    for ( i = 0; s[i] != '\0'; i++ ) {
        if (s[i] >= 'a' && s[i] <= 'z')
            counterLetters[s[i] - 'a']++;
    }

    for ( i = 0; i < 26; i++ ) {
        if ( counterLetters[i] > 0 ) {
            noZero[w] = counterLetters[i];
            w++;
        }
    }

    swapped = 1;
    while ( swapped ) {
        swapped = 0;
        for ( i = 0; i < w - 1 - z; i++ ) {
                if (noZero[i] > noZero[i+1]) {
                    temp = noZero[i];
                    noZero[i] = noZero[i+1];
                    noZero[i+1] = temp;
                    swapped = 1;
                }
            }
            z++;
        }
    
        for ( i = 0; i < w; i++ ) {
                if ( w == k || k > w )
                    break;
                minimumDeletions += noZero[i];
                k++;
            }

    return minimumDeletions;
}

int main() {
    char str[] = "yyyzz";
    int k = 1;

    int result = minDeletion(str, k);

    printf("Result: %d\n", result);

    return 0;
}
