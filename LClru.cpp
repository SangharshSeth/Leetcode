//include header files
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class LRUCache
{
private:
    //store key and a iterator to a li of pairs(key,value)
    unordered_map<int, list<pair<int, int>>::iterator> map;
    //store key and value as a pair in li
    list<pair<int, int>> li;
    int size;

public:
    LRUCache(int capacity)
    {
        size = capacity;
    }

    int get(int key)
    { //iterator to find the key in map
        auto it = map.find(key);
        if (it == map.cend())
            return -1;
        //if found then move the key value pair to the begining to refresh the li as these are most reently used
        li.splice(li.begin(), li, it->second);
        //return the value from the value of li iterator
        return it->second->second;
    }

    void put(int key, int value)
    {
        //check if key already exist then update only the value
        auto it = map.find(key);
        if (it != map.cend())
        {
            it->second->second = value;
            li.splice(li.begin(), li, it->second);
            return;
        }
        if (li.size() == size)
        {
            //delete the least recently used entry which will be at the back of the li
            //(2,3),(1,2),(4,5)
            //remove the entry from the map by its key
            //you can get the key by li.back()//[4,5]//.first which will give 4
            map.erase(li.back().first);
            //delete the key value pair from the end of the li
            li.pop_back();
        }
        //insert the date in the front of the li
        li.emplace_front(key, value);
        //update the map by its key value
        //li.begin() gives a iterator to the first pair
        map[key] = li.begin();
    }
};
