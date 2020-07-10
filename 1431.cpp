class Solution {
public:
    int MaxCandies(vector<int>& candies,int size){
        int max = 0;
        
        for(int i=0;i<size;i++){
            if(max < candies[i])
                max = candies[i];
        }
        return max;
    }
    
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        
        int size = candies.size();
        
        int max = MaxCandies(candies,size);
        
        for(int i=0;i<size;i++){
            if(candies[i]+extraCandies >= max)
                v.push_back(true);
            else
                v.push_back(false);
        }
        
        return v;
    }
};
