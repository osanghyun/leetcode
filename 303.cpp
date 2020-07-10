class NumArray {
    int *dp;
    int n;
public:
    NumArray(vector<int>& nums) {
        n = nums.size();
        if(n!=0){
            dp = new int[n];
            dp[0] = nums[0];
            
        }
        for(int i=1;i<n;i++)
            dp[i] = nums[i] + dp[i-1];
    }
    
    int sumRange(int i, int j) {
        if(i==0)
            return dp[j];
        else
            return dp[j] - dp[i-1];
    }
};
