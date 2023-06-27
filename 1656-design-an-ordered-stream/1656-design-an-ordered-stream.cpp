class OrderedStream {
public:
    int pointer = 1;
    map<int, string> m;
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        m[idKey] = value;
        auto it= m.find(pointer);
        if(it==m.end()){
            return {};
        }
        vector<string> ans;
        for(auto i=it; i!=m.end();i++){
            if(pointer == i->first){
                ans.push_back(i->second);
                pointer++;
            }
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */