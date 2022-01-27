// Binary Exponentiation
// Calculating Power (Base and Exponent Based)
int power (int base, int exponent) {
    if (exponent == 0) return 1;
    int half = power (base, exponent / 2);
    int result = half * half;
    if (exponent % 2 == 1) result *= base;
    return result;
}

// BigMod (Recursive One)
// Calculating Power Mod (Base, Exponent, Modulus Based)
int bigMod (int base, int exponent, int modulus) {
    if (exponent == 0) return 1;
    int half = power_mod (base, exponent / 2, modulus);
    int result = (half * half) % modulus;
    if (exponent % 2 == 1) result = (result * base) % modulus;
    return result;
}

// BigMod (Interative One, Faster)
int bigMod (int base, int exponent, int modulus) {
    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) result = (result * base) % modulus;
        base = (base * base) % modulus;
        exponent /= 2;
    }
    return result;
}
