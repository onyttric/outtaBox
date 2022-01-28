#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int N = (int)1e7;
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

vector <int> factors;
void factorize (int n) {
    int sqrtn = sqrt(n);
    for (int i = 0; i < primes.size() && primes[i] <= sqrtn; i++) {
        if (n % primes[i] == 0) {
            while (n % primes[i] == 0) {
                n /= primes[i];
                factors.push_back(primes[i]);
            }
            sqrtn = sqrt(n);
        }
    }
    if (n != 1) factors.push_back(n);
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    sieve();
    factorize(24);
    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i] << " ";
    }
    cout << endl;
    return 0;
}
