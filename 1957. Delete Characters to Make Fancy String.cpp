class Solution {
public:
    string makeFancyString(string s) {
        if(s.size() < 3) return s;  // If string length is less than 3, return it as is

        string ans;
        ans += s[0]; 
        ans += s[1];  
        
        // Process each character starting from the third one
        for(int i = 2; i < s.size(); i++) {
            // Only add s[i] if it does not create three consecutive identical characters
            if(!(s[i] == s[i-1] && s[i] == s[i-2])) {
                ans += s[i];
            }
        }
        
        return ans;
    }
};