bool isPalindrome(int x) {
    unsigned long long reverse = 0;
    int digit, store = x;

    while (x > 0) {
        digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
    }

    return store == reverse;
}
