class Solution {
public:
    bool checkDivisibility(int n) {
        
        int original_n=n;
        int l_digit=0;
        int product=1;
        int sum=0;
        while(n>0){
            l_digit= n%10;
            product*=l_digit;
            sum+=l_digit;
            n=n/10;
        }
        int ans= sum+product;
        if(original_n%ans==0){
            return true;
        }
        else{
            return false;
        }
    }
};