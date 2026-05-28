char* toLowerCase(char* s) {

    int length = strlen(s);
    
    for (int i = 0; i < length; i++) {
        s[i] = tolower(s[i]);
    }

    return s;
}
