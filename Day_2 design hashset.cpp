public:
    /** Initialize your data structure here. */
    
    bool table[1000001]={0};
    MyHashSet() {
        
        
        
    }
    
    void add(int key) {
        table[key]=1;
        
    }
    
    void remove(int key) {
        table[key]=0;
        
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return table[key];
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */