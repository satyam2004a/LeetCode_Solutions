class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int i = 0; 

        while(start < s.size()){
            
            if (s[start] == ' '){
                reverse(s.begin() + i, s.begin() + start);
                i = start + 1;
            }
            start++;
        }  

        reverse(s.begin() + i, s.end());

        return s;
        
    }
};