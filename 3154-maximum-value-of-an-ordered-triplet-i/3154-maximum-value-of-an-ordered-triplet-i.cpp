class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max_value = 0;
        int n = nums.size();

        // Iterate all possible triplets (i, j, k) where i < j < k
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    long long current_value = (long long)(nums[i] - nums[j]) * nums[k];
                    if (current_value > max_value) {
                        max_value = current_value;
                    }
                }
            }
        }

        return max_value > 0 ? max_value : 0;
    }
};
