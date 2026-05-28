int lengthOfLastWord(char* s) {

    int size = strlen(s), length = 0, j = 1, i, newSize = size;

    while ( s[size - j] == ' ' ) {
        newSize = size - j;
        j++;
    }

    for ( i = 0; i < newSize; i++ ) {
        if ( s[i] != ' ' ) {
            length++;
        } else {
            length = 0;
        }
    }

    return length;
}
