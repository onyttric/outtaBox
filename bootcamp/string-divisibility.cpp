bool isDivisible (string s, int n) {
    int rem = 0, len = s.size();
    for (int i = 0; i < len; i++) {
        int dig = s[i] - '0';
        rem = (rem * 10) + dig;
        rem = rem % n;
    }
    if (rem == 0) return true;
    return false;
}
