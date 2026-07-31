class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt_0, cnt_1, cnt_2, i = 0, cnt = 0;
        int n = nums.size();
        cnt_0 = count(nums.begin(), nums.end(), 0);
        cnt_1 = count(nums.begin(), nums.end(), 1);
        cnt_2 = count(nums.begin(), nums.end(), 2);
        while (cnt < cnt_0) {
            nums[i] = 0;
            i++;
            cnt++;
        }
        cnt = 0;
        while (cnt < cnt_1) {
            nums[i] = 1;
            i++;
            cnt++;
        }
        cnt = 0;
        while (cnt < cnt_2) {
            nums[i] = 2;
            i++;
            cnt++;
        }
    }
};