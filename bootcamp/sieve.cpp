const int N = (int)1e6;
bool isPrime[N + 1];
vector <int> primes;

void sieve() {
    for (int i = 1; i <= N; i++) isPrime[i] = true;
    isPrime[1] = false;
    for (int i = 4; i <= N; i += 2) isPrime[i] = false;
    for (int i = 3; i * i <= N; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += 2 * i) isPrime[j] = false;
        }
    }
    for (int i = 2; i <= N; i++){
        if (isPrime[i]) primes.push_back(i);
    }
}
