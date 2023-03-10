class Solution {
public:
    bool isPerfectSquare(int num) {
        long r = num;

        while (r * r > num) {
            r = (r + num / r) / 2;
        }
        return r * r == num;
    }
};