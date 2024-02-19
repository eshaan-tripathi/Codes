class Solution {
public:
    int myAtoi(std::string s) {
        long long sum = 0;
        int flag = 0;
        int i = 0;

        // Skip leading whitespaces
        while (s[i] == ' ')
            i++;

        // Handle sign
        if (s[i] == '-' || s[i] == '+') {
            flag = (s[i++] == '-') ? 1 : 0; // Update flag based on sign
        }

        // Parse digits
        while (isdigit(s[i])) {
            int a = s[i] - '0';
            sum = sum * 10 + a;
            if (flag == 0 && sum > INT_MAX) return INT_MAX;
            if (flag == 1 && -sum < INT_MIN) return INT_MIN;
            i++;
        }

        return flag ? -sum : sum;
    }
};