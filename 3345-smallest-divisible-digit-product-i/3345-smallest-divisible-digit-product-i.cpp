class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int copy_n=n;
            int l_digit=0;
            int product=1;
            while(copy_n>0){
                l_digit= copy_n%10;
                product*=l_digit;
                copy_n/=10;
            }
            if(product%t==0){
                break;
            }
            n++;
        }
        return n;
    }
};