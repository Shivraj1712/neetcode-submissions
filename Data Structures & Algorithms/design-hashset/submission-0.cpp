class MyHashSet {
public:
    vector<int> arr;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(contains(key)) return ;
        else arr.push_back(key);
    }
    
    void remove(int key) {
        if(arr.size() == 0) return;
        if(!contains(key)) return ;
        else {
            for(auto i = 0 ; i < arr.size(); ++i){
                if(arr[i] == key){
                    arr.erase(arr.begin()+i);
                    return;
                }
            }
        }
    }
    
    bool contains(int key) {
        if(arr.size() == 0) return false;
        for(auto i : arr){
            if(i == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */