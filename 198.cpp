class Solution {
public:
    int max(int a,int b){
        if(a>b)
            return a;
        else
            return b;
    }
    
    int rob(vector<int>& nums) {
        int len = (int)nums.size();
        
        if(len == 0)
            return 0;
        
        if(len == 1)
            return nums[0];
        
        
        if(len == 2)
            return max(nums[0],nums[1]);
        
        
        
        int *DP = new int[len]();
        
        DP[0] = nums[0];
        DP[1] = nums[1];
        DP[2] = nums[2] + nums[0];
        
        
        for(int i=3;i<len;i++){
            DP[i] = max(nums[i]+DP[i-2],nums[i]+DP[i-3]);
        }
        
        int value = 0;
        
        value = max(DP[len-2],DP[len-1]);
        
        delete []DP;
        
        return value;
    }
};
