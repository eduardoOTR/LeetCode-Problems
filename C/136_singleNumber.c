int singleNumber(int* nums, int numsSize) {

    int i = 0;
    int *num = calloc(numsSize, sizeof(int));

    for (i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize; j++) {
            if ( nums[j] == nums[i] ) {
                num[i]++;
            }
        }
    }

    for (i = 0; i < numsSize; i++) {
        if ( num[i] < 2 ) {
            break;
        }
    }

    free(num);

    return nums[i];
}
