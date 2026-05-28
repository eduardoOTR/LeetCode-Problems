#include <stdio.h>
#include <stdbool.h>

bool lemonadeChange(int* bills, int billsSize) {
    int countBills5 = 0, countBills10 = 0;
    
    for ( int i = 0; i < billsSize; i++ ) {
        if ( bills[i] == 5 ) {
            countBills5 += 5;
        } else if ( bills[i] == 10 && countBills5 >= 5 && countBills5 != 0 ) {
            countBills5 -= 5;
            countBills10 += 10;
        } else if ( bills[i] == 20 && ((countBills5 >= 5) && (countBills10 >= 10)) ) {
            countBills10 -= 10;
            countBills5 -= 5;
        } else if ( bills[i] == 20 && (countBills5 >= 15) ) {
            countBills5 -= 15;
        } else
        return 0;
    }

    return 1;
}

int main() {
    int bills[] = {5, 5, 10, 10, 20};
    int size = sizeof(bills) / sizeof(bills[0]);

    bool result = lemonadeChange(bills, size);

    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
