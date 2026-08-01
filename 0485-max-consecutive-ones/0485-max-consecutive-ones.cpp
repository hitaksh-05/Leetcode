class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0,max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum=0;
            }
            else{
                sum++;
                if(sum>max)
                    max=sum;
            }
        }
        return max;
    }
};