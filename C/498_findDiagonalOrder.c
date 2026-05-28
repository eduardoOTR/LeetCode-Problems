#include <stdio.h>
#include <stdlib.h>

int* FindDiagonalOrder( int** mat, int matSize, int* matColSize, int* returnSize ) {

    *returnSize = matSize * *matColSize;
    int *diagonal = malloc(*returnSize * sizeof(int));

    int row = 0, col = 0;
    int i = 0;

    while ( i < *returnSize ) {
        diagonal[i++] = mat[row][col];

        if ( ( row + col ) % 2 == 0 ) {
            if ( col == *matColSize - 1 ) {
                row++;
            } else if ( row == 0 ) {
                col++;
            } else {
                row--;
                col++;
            }
        } else {
            if ( row == matSize - 1 ) {
                col++;
            } else if ( col == 0 ) {
                row++;
            } else {
                row++;
                col--;
            }
        }
    }

    return diagonal;
}

int main( void ) {
    const int rows = 3;
    int cols = 3;

    int** mat = (int**) malloc(rows * sizeof(int*));
    for ( int i = 0; i < rows; i++ ) {
        mat[i] = (int*) malloc(cols * sizeof(int));
    }

    int value = 1;
    for ( int i = 0; i < rows; i++ ) {
        for ( int j = 0; j < cols; j++ ) {
            mat[i][j] = value++;
        }
    }

    int returnSize;
    int* result = FindDiagonalOrder( mat, rows, &cols, &returnSize );

    printf( "[" );

    for ( int i = 0; i < returnSize; i++ ) {
        printf( "%d", result[i] );

        if ( i < returnSize - 1 ) {
            printf( "," );
        }
    }

    printf( "]\n" );

    free( result );
    for ( int i = 0; i < rows; i++ ) {
        free( mat[i] );
    }
    free( mat );

    return 0;
}
