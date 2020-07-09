class Solution {
public:
    int min(int a,int b){
        if(a < b)
            return a;
        else
            return b;
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        int value = 0;
        
        int* DP = new int[len+1]();
        
        DP[0] = cost[0];
        DP[1] = cost[1];
        
        for(int i=2;i<len;i++){
            DP[i] = min(cost[i]+DP[i-1],cost[i]+DP[i-2]);
        }
        
        DP[len] = min(DP[len-1],DP[len-2]);
            
        
        value = DP[len];
        
        delete []DP;
        
        return value;
    }
};
