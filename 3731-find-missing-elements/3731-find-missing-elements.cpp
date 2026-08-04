class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();

        sort(nums.begin(),nums.end());
        int min= nums[0];
        int max=nums[n-1];
        int j=0;
        while(min<max+1){
            if(j<n && nums[j]==min){
                j++;
            }
            else{
                ans.push_back(min);
            }
            min++;
        }
        return ans;
    }
};