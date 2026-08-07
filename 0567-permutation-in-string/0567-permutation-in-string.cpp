class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int left=0;
        int right= s1.size()-1;

        while(right<s2.size()){
            int cnt=0;
            vector<int>freq(26,0);
            for(int i=left;i<=right;i++){
                freq[s1[i-left]-'a']++;
                freq[s2[i]-'a']--;
            }
            for(int i=0;i<26;i++){
                if(freq[i]==0){
                    cnt++;
                }
            }
            if(cnt== 26) return true;
            left++;
            right++;
        }
        return false;
    }
};