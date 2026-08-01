class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>freq;
        long long sum=0;
        long long max_sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            freq[nums[i]]++;
        }

        if(freq.size()==k)  max_sum=sum;

        int left=0;
        for(int right=k;right<nums.size();right++){

            
            sum= sum-nums[left];
            freq[nums[left]]--;
            
            if(freq[nums[left]]==0) freq.erase(nums[left]);
            left++;
            
            sum+=nums[right];
            freq[nums[right]]++;
            
            if(freq.size()==k)  max_sum= max(max_sum, sum);
        }
        return max_sum;


    }
};
