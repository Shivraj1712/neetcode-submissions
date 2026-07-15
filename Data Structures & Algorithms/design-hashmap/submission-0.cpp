class MyHashMap {
public:
    vector<pair<int,int>> arr ;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto &it : arr){
            if(it.first == key){
                it.second = value;
                return;
            }
        }
        arr.push_back({key,value});
    }
    
    int get(int key) {
        for(auto it : arr){
            if(it.first == key) return it.second;
        }
        return -1;
    }
    
    void remove(int key) {
        if(get(key) == -1) return ;
        else {
            for(auto it = arr.begin() ; it != arr.end(); ++it){
                if(it->first == key){
                    arr.erase(it);
                    return ;
                }
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */