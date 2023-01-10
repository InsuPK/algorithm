class Solution {
public:
    int addDigits(int num) {
        if (num / 10 == 0)
            return num;
        int digit1 = num % 10;
        int digit2 = num / 10;
        int sum = digit1 + digit2;
        return addDigits(sum);
    }
};