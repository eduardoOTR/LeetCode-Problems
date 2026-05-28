/*
Solution to the "Fibonacci Number" problem from LeetCode. This code receives a value n and calculates F(n) (Fibonacci sequence).

Author: Eduardo Ramos, Apr 06, 2026
*/

#include <stdio.h>

int fib( int n ) {
    int numOne = 0, numTwo = 1, next;

    if ( n <= 1 )
        return n;

    for ( int i = 2; i <= n; i++ ) {
        next = numOne + numTwo;
        numOne = numTwo;
        numTwo = next;
    }

    return numTwo;
}

int main() {
    int n;

    printf("Enter the n number of Fibonacci sequence:\n");
    scanf("%d", &n);

    unsigned long long int result = fib(n);

    printf("The number in position %d of Fibonacci sequence is %llu.", n, result);
}
