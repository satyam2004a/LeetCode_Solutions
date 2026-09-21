class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        
        while(i < s.size()){

            int left = i;

            int right = i + k - 1;

            if (right >= s.size()) {
                right = s.size() - 1;
            }

            while(left < right){
                swap(s[left++], s[right--]);
            }
            i = i + 2 * k;
        }
        return s;
        
    }
};