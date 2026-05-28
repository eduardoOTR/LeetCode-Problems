double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int total = nums1Size + nums2Size;
    int mergedArray[total];

    int i = 0, j = 0, k = 0;

    while ( i < nums1Size && j < nums2Size ) {
        if ( nums1[i] < nums2[j] ) {
            mergedArray[k] = nums1[i];
            k++;
            i++;
        } else {
            mergedArray[k] = nums2[j];
            k++;
            j++;
        }
    }

    while ( i < nums1Size ) {
        mergedArray[k] = nums1[i];
        k++;
        i++;
    }

    while ( j < nums2Size ) {
        mergedArray[k] = nums2[j];
        k++;
        j++;
    }

    if ( total % 2 == 0 ) {
        return (mergedArray[total/2 - 1] + mergedArray[total/2])/2.0;
    } else {
        return mergedArray[total/2];
    }
}
