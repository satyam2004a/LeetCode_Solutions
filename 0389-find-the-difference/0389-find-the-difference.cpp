class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;

        for(char x: t){
            sum += x;
        }

        for(char y: s){
            sum -= y;            
        }

        return (char)sum;
    }
};