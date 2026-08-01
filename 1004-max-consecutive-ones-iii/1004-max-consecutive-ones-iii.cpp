class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        if(n==0)    return 0;

        int j=0;
        int cnt=0;
        int max_size=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
            }
            
            while(cnt>k){
                if(nums[j]==0){
                    cnt--;
                }
                j++;
            }
            
            max_size= max(max_size, i-j+1 );
        }

        return max_size;
    }
};