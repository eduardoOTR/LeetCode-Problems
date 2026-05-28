/*
Solution to the "CLimbing Stairs" problem from LeetCode. This code shows how many different ways it is possible to climb n stairs to the top, taking 1 or 2 steps at a time.

Author: Eduardo Ramos, Apr 04, 2026
*/

#include <stdio.h>

int climbStairs( int n ) {
    int numOne = 1, numTwo = 2, next;

    if ( n <= 2 )
        return n;

    for ( int i = 3; i <= n; i++ ) {
        next = numOne + numTwo;
        numOne = numTwo;
        numTwo = next;
    }

    return numTwo;
}

int main() {
    int n;

    printf("Enter the number of steps:\n");
    scanf("%d", &n);

    int result = climbStairs(n);

    printf("There are %d ways to climb to the top.\n", result);

    return 0;
}
