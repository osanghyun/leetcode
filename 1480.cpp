class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        
        vector<int> DP;
        
        DP.push_back(nums[0]);
        
        for(int i=1;i<size;i++)
            DP.push_back(nums[i] + DP[i-1]);
        
        return DP;
    }
};
