class Solution {
public:
    int mySqrt(int x) {
        long r = x;
        while (r * r > x) {
            r = 0.5 * (r + (x/r));
        }
        return r;
    }
};