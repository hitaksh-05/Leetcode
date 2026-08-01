class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, len = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target) {
                len = min(len, right - left + 1);
                sum -= nums[left++];
            }
        }
        return (len == INT_MAX) ? 0 : len;
    }
};
