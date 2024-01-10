class Solution {
public:
   int reverse(int x) {
        int rev_num = 0;
        
        while (x != 0) {
            int digit = x % 10;
            
            // Check for overflow before updating the reversed number
            if (rev_num > INT_MAX / 10 || (rev_num == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (rev_num < INT_MIN / 10 || (rev_num == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
            
            rev_num = rev_num * 10 + digit;
            x = x / 10;
        }
        
        return rev_num;
    }
    
};