//Euclidean Algorithm
// Recursive One
int gcd (int a, int b) {
    if (b == 0) return a;
    return gcd (b, a % b);
}

//Iterative One (Faster)
int gcd (int a, int b) {
    while (b > 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int lcm (int a, int b) {
    return (a / gcd(a, b)) * b;
}
