#include <vector>
#include <iostream>
#include <optional>
using namespace std;

//to do: Design a HashMap without using any built-in hash table libraries.



class MyhashMap{
    vector<int> MapArray;
public:
    MyhashMap(){
        /*initializes the object with an empty array*/
         MapArray = vector<int>(100001,-1);
    }
    void put(int key,int value){
        /*inserts a key,value pair into the Hashmap.*/
        MapArray[key] = value;
    }
    int get(int key){
        /*returns the value to which the specified key is mapped,
        or -1 if this map contains no mapping for the key*/
        return MapArray[key];

    }
    void remove(int key){
        /*
        removes the key and its corresponding value if the map contains the mapping for key
        */
       MapArray[key] = -1;
    }
};

int main(){
    MyhashMap hashmap;
    hashmap.put(1,1);
    hashmap.put(2,2);
    hashmap.get(2);
    // hashmap.remove(1);
    cout << hashmap.get(2) << endl;
    cout << hashmap.get(1) << endl;
    hashmap.put(2,1);
    cout << hashmap.get(2) << endl;
    hashmap.remove(2);
    cout << hashmap.get(2) << endl;

    return 0;
}