/*
Solution to the "Roman to Integer" problem from LeetCode. This code converts Roman numerals into integers.
Note: It also supports invalid Roman numerals.

Author: Eduardo Ramos, Apr 03, 2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int value(char roman) {
    if (roman == 'I') return 1;
    if (roman == 'V') return 5;
    if (roman == 'X') return 10;
    if (roman == 'L') return 50;
    if (roman == 'C') return 100;
    if (roman == 'D') return 500;
    if (roman == 'M') return 1000;
    return 0;
}

int romanToInt(char* s) {
    int total = 0;
    int i = 0;
    
    while (s[i] != '\0') {
        int v1 = value(s[i]);
        int v2 = value(s[i+1]);

        if (v2 > v1) {
            total += (v2 - v1);
            i += 2;
            } else {
                total += v1;
                i++;
            }
        }
        return total;
    }


int execute() {
      char *romanNumber = (char *)malloc(20 * sizeof(char));

      if (romanNumber == NULL) {
        printf("Memory allocation error.");
        return 1;
      }

      printf("Enter the Roman numeral: ");
      scanf("%19s", romanNumber);

      printf("Value: %d\n", romanToInt(romanNumber));

      free(romanNumber);

      return 0;
}

int main() {
    execute();

    return 0;
}
