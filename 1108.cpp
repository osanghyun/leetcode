class Solution {
public:
    string defangIPaddr(string address) {
        int size = address.size();
        
        string front;
        string end;
        
        for(int i=0;i<size;i++){
            if(address[i] == '.'){
                front = address.substr(0,i);
                end = address.substr(i+1);
                address= front + "[.]" + end ;
                size += 2;
                i+=2;
            }
        }
        
        return address;
    }
};
