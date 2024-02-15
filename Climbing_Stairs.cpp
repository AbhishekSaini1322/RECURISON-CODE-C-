
class Solution {
public:
    int climbStairs(int n) {
    //    base case
    if(n == 1)
    return 1;

    if(n == 2)
    return 2;

    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;

    }
};

 // int climbStairs(int n) {
    //     int ways = 1;

    //     for (int i = 1; i <= n / 2; i++) {
    //         double sum = 1;

    //         for (int j = i; j < 2 * i; j++) {
    //             sum *= (double)(n - j) / (j - i + 1);
    //         }

    //         ways +=sum;
    //     }

    //     return ways;
    