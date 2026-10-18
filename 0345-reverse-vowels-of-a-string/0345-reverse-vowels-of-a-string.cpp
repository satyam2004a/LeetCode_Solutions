class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i <= j){

            if(i < j && string("aeiouAEIOU").find(s[i]) == string::npos){
                i++;
                continue;
            }

            if(i < j && string("aeiouAEIOU").find(s[j]) == string::npos){
                j--;
                continue;
            }
        
        
            swap(s[i++], s[j--]);
        }
        return s;
        
    }
};