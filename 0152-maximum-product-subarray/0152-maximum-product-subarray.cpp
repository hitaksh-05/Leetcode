class Solution {
public:
    int maxProduct(vector<int>& nums) {

        long long maxi=nums[0];
        long long mini= nums[0];
        long long ans=nums[0];
        int n= nums.size();
        for(int i=1;i<n;i++){
            long long product= nums[i];

            long long newmax= max({product, product*maxi, product*mini});
            long long newmin= min({product, product*maxi, product*mini});

            maxi= newmax;
            mini= newmin;

            ans= max(ans, maxi);
        }
        return ans;
    }
};