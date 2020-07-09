class Solution {
    int Hours[4] = {1,2,4,8};
    int Minutes[6] = {1,2,4,8,16,32};
    bool select[10];
    vector<string> v;
    
public:
    void init(){
        for(int i=0;i<10;i++){
            select[i] = false;
        }
    }
    
    void vPush(){
        int H = 0;
        int M = 0;
        
        string s;
        
        for(int i=0;i<10;i++){
            
            if(select[i]){
                if(i<6)
                    M += Minutes[i];
                else
                    H += Hours[i-6];
                    
            }
        }
        
        s.append(to_string(H));
        s.append(":");
        
        if(M<10){
            s.append("0");
        }
        s.append(to_string(M));
        
        v.push_back(s);
    }
    
    void writeTime(int num,int count,int index){
        
        
        if(select[2]&&select[3]&&select[4]&&select[5])
            return;
        
        if(select[8]&&select[9])
            return;
        
        if(num == count){
            vPush();
            return;
        }
        
        if(index>9)
            return;
        
        select[index] = true;
        writeTime(num,count+1,index+1);
        select[index] = false;
        
        writeTime(num,count,index+1);
        
    }
    
    
    vector<string> readBinaryWatch(int num) {
        init();
        writeTime(num,0,0);
        
        sort(v.begin(), v.end());
        return v;
    }
};
