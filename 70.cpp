class Solution {
public:
    int climbStairs(int n) {
        int* DP = new int[n+1]();
        int value = 0;
        
        DP[0] = 1;
        DP[1] = 1;
        
        for(int i=2;i<=n;i++)
            DP[i] = DP[i-1] + DP[i-2];
        
        value = DP[n];
        
        delete []DP;
        
        return value;
        
    }
};
