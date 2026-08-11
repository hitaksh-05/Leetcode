class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]= nums[i]-1;
            }
        }
        
        int sum=0;
        int maxlength=0;
        
        unordered_map<int,int>mp;
        mp[0]=-1;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(mp.find(sum)!=mp.end()){
                
                int last= mp[sum];
                maxlength= max(maxlength, i-last);
            }
            else{
                mp[sum]=i;
            }
        }
        return maxlength;
    }
};