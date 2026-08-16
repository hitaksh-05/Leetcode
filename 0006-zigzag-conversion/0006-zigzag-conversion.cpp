class Solution {
public:
    string convert(string s, int nr) {
        if(nr==1) return s;

        int n= s.size();
        string res="";
        int increment= 2*(nr-1);
        for(int r=0;r<nr;r++){
            for(int i=r;i<n;i+=increment){

                res+=s[i];
                if(r>0 && r<nr-1 && i+increment-2*r<n){
                    res+=s[i+increment-2*r];
                }
            }
        }
        return res;
    }
};