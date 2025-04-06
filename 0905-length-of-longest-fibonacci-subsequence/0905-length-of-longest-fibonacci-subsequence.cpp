class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int maxLen = 0;
        int n = arr.size();

        for (int i = 0; i < n - 2; i++) {
            for (int k = i + 1; k < n - 1; k++) {
                int x = arr[i], y = arr[k];
                int count = 2;

                for (int j = k + 1; j < n; j++) {
                    if (arr[j] == x + y) {
                        int z = x + y;
                        x = y;
                        y = z;
                        count++;
                        maxLen = max(maxLen, count);
                    }
                }
            }
        }

        return (maxLen > 2) ? maxLen : 0;
    }
};
