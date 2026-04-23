class Solution {
public:
    const int MOD = 1337;

    int modPow(int a, int k) {
        int result = 1;
        a %= MOD;
        while (k > 0) {
            if (k % 2) result = (result * a) % MOD;
            a = (a * a) % MOD;
            k /= 2;
        }
        return result;
    }

    int superPow(int a, vector<int>& b) {
        int result = 1;
        for (int digit : b) {
            result = modPow(result, 10) * modPow(a, digit) % MOD;
        }
        return result;
    }
};