class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long base, long long exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1)
                result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long even_positions = (n + 1) / 2; // even indices
        long long odd_positions = n / 2;        // odd indices

        long long result = (power(5, even_positions) * power(4, odd_positions)) % MOD;
        return result;
    }
};
