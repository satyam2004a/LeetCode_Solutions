class Solution {
public:
    bool isPalindrome(int x) {
         long rev = 0;
        int temp = x;
        if (temp < 0){
            return false;
        }   
        while (temp > 0){
            int ld = temp % 10;
            rev = (rev * 10) + ld;
            temp /=10;
        }
        if (rev == x){
            return true;
        }
        return false;
    }
};