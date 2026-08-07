class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n= s.size();
        if(n==0)    return 0;
        
        unordered_set<char> cnt;
        vector<char> ans;
        ans.push_back(s[0]);
        cnt.insert(s[0]);
        
        int size=1;

        for(int i=1;i<n;i++){

            while(cnt.count(s[i])!=0){
                cnt.erase(ans[0]);
                ans.erase(ans.begin());
            }

            ans.push_back(s[i]);
            cnt.insert(s[i]);
            
            size= max(size, (int)ans.size());
        }
        return size;
    }
};