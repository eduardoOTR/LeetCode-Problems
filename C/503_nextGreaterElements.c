#include <stdio.h>
#include <stdlib.h>

int* NextGreaterElements( int* nums, int numsSize, int* returnSize ) {

    int* greaterNums = ( int* )malloc( sizeof( int ) * numsSize );
    int i = 0;
    *returnSize = numsSize;

    while ( i < numsSize ) {
        greaterNums[i] = -1;
        int j = 1;
        while ( j < numsSize ) {
            int circular = ( i + j ) % numsSize;
            if ( nums[circular] > nums[i] ) {
                greaterNums[i] = nums[circular];
                break;
            }
            j++;
        }
        i++;
    }

    return greaterNums;
}

int main( void ) {
    int nums[] = {1,5,3,1,2}, returnSize;
    int numsSize = sizeof( nums ) / sizeof( nums[0] );

    int *result = NextGreaterElements( nums, numsSize, &returnSize );

    printf( "[" );

    for ( int i = 0; i < returnSize; i++ ) {
        printf( "%d", result[i] );

        if ( i < returnSize - 1 ) {
            printf( "," );
        }
    }

    printf( "]\n" );

    free( result );

    return 0;
}
