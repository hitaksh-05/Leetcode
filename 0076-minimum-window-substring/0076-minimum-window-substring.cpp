class Solution {
public:
    string minWindow(string s, string t) {

        int m= s.size();
        int n= t.size();
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++)    freq[t[i]]++;
        
        int left=0;
        int start=0;
        int min_len= INT_MAX;
        for(int right=0;right<m;right++){
            if(freq[s[right]]>0)    n--;
            freq[s[right]]--;
            
            while(n==0){
                if(right-left+1<min_len){
                    min_len= right-left+1;
                    start=left;
                }
                
                freq[s[left]]++;
                
                if(freq[s[left]]>0) n++;
                
                left++;
            }
        }
        if(min_len==INT_MAX)    return "";
        return s.substr(start,min_len);
    }
};