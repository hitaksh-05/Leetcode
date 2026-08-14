class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int n= nums.size();
        int maxi= 0;
        int mini= 0;
        int maxsum= 0;
        int minsum= 0;
        int ans=0;
        for(int i=0;i<n;i++){

            maxi= max(maxi+ nums[i], nums[i]);
            mini= min(mini+ nums[i], nums[i]);

            maxsum= max(maxsum, maxi);
            minsum= min(minsum, mini);
        }

        ans= max(maxsum, -(minsum));
        return ans;
    }
};