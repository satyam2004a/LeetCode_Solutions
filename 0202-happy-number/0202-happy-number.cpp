class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        set<int> s;

        while(sum != 1){
            if (s.count(n)) {
                return false;
            }
            s.insert(n);
            
            sum = 0;
            
            while(n > 0){
                int ld = n % 10;
                n = n / 10;
                sum = sum + (ld * ld);
            }
            n = sum;
       
        }
        if (sum == 1){
            return true;
        }
        return false;
        
    }
};