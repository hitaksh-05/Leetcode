class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int sliding_size= p.size();
        vector<int>ans;

        int left=0;
        int right= left+sliding_size-1;
        while(right<s.size()){
            
            vector<int> freq(26,0);
            bool possible=true;
            
            for (int i = left; i <= right; i++) {
                freq[s[i]-'a']++;
                freq[p[i-left]-'a']--;
            }
            for (int i=0;i<26;i++) {
                if (freq[i] != 0) {
                    possible= false;
                    break;
                }
            }
            if(possible)    ans.push_back(left);
            left++;
            right++;
        }
        return ans;
    }
};