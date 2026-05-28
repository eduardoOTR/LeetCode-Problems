int mostWordsFound(char** sentences, int sentencesSize) {
    int wordsStore = 0, j = 0;

    for (int i = 0; i < sentencesSize; i++) {
        char *s = sentences[i];
        int words = 0;

        while (s[j] != '\0') {
            if (s[j] == ' ') words++;
            j++;
        }

        j = 0;
        if (wordsStore < words) wordsStore = words;
    }

    return wordsStore + 1;
}
