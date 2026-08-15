class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int xor_num=0;
        int n= nums.size();
        bool non_zero=false;

        for(int i=0;i<n;i++){
            xor_num= nums[i]^xor_num;
            if(nums[i]!=0){
                non_zero= true;
            }
        }
        if(xor_num!=0)  return n;
        if(non_zero)    return n-1;

        return 0;
    }
};