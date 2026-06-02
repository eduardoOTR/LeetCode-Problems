bool isValid(char* s) {
    int size = strlen(s), top = -1;

    if ( size % 2 != 0 ) return false;

    for ( int i = 0; i < size; i++ ) {
        if ( s[i] == '(' || s[i] == '[' || s[i] == '{' ) {
            s[++top] = s[i];
        } else {
            if ( top == -1 ) return false;

            if ( ( s[i] == ')' && s[top] != '(' ) || ( s[i] == ']' && s[top] != '[' ) || ( s[i] == '}' && s[top] != '{' ) ) return false;

            top--;
        }
    }

    return top == -1;
}
