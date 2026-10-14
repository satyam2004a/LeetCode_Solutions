class Solution {
public:
    int maxProduct(int n) {
        int dig1 = 0;
        int dig2 = 0;

       
        while(n > 0){
            
            int ld = n % 10;
            n /= 10;

            if (ld > dig1){
                dig2 = dig1;
                dig1 = ld;
            }
            else if (ld > dig2) {
                dig2 = ld;
            }
        }

        return dig1 * dig2;
        
    }
};