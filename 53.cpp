class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = (int)nums.size();
    
        int* DP = new int[size]();

        DP[0] = nums[0];

        int rv=DP[0];

        for(int i=1;i<size;i++){
            DP[i] = max(DP[i-1]+nums[i],nums[i]);
            
            if(rv < DP[i])
                rv = DP[i];
        }

        delete []DP;

        return rv;
    }
};
