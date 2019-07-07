/*
Fernando Corral
WallBreakers
Cohort 3
My HashSet
*/
class MyHashSet {
public:
    /** Initialize your data structure here. */
    std::bitset<10'000'000> data;
    MyHashSet() {
        
    }
    
    void add(int key) {
        data.set(key);
    }
    
    void remove(int key) {
        data.reset(key);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return data.test(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
