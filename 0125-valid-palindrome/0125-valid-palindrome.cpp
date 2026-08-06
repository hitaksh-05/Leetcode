class Solution {
public:
    bool isPalindrome(string s) {     
        
        s.erase(remove_if(s.begin(),s.end(),
        [](char c){ return !isalnum(c);}), 
            s.end());      
            
            
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
        string s1=s;
        reverse(s1.begin(),s1.end());   
        return s==s1;      
    }
    };