// NOD - Number of Divisors
const int N = (int)1e6;
int divNum[N + 5];
void generateNOD () {
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) divNum[j]++;
    }
}


// SOD - Sum of Divisors
const int N = (int)1e6;
int divSum[N + 5];
void generateSOD () {
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) divSum[j] += i;
    }
}
