class Solution {
    vector<string> str;
    
public:
    
    //DFS BackTracking
    void Permutation(string S,int size,int index){
    
        if(size==index){
            str.push_back(S);
            return;
        }

        if(S[index]>='A'){
            
            // a~z
            if(S[index]>='a'){
               Permutation(S,size,index+1);
               
               S[index] -= 32;
               Permutation(S,size,index+1);
               S[index] += 32;
           }
            
            // A~Z
            else{
               Permutation(S,size,index+1);
               
               S[index] += 32;
               Permutation(S,size,index+1);
               S[index] -= 32;
           }
        }
        
        else{
            Permutation(S,size,index+1);
        }
}
    
    vector<string> letterCasePermutation(string S) {
        
        Permutation(S,(int)S.size(),0);
        
        return str;
    }
};
