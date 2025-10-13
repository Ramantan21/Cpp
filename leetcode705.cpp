#include <optional>
#include <iostream>
#include <vector>

using namespace std;

class MyHashSet {
public:
    vector<int> hashset;
    MyHashSet() {
        hashset = vector<int> (10001,-1);
    }
    
    void add(int key) {
        hashset[key] = key;
    }
    
    void remove(int key) {
        hashset[key] = -1;
    }
    
    bool contains(int key) {
        return hashset[key] != -1;
    }
};

int main(){
    MyHashSet hashset;
    hashset.add(5);
    hashset.add(3);
    cout << hashset.contains(3) << endl;
    cout << hashset.contains(5) << endl;
    cout << hashset.contains(44) << endl;
    hashset.remove(3);
    hashset.remove(5); 
    cout << hashset.contains(3) << endl;

    return 0;
}