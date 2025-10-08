#ifndef CACHE_H
#define CACHE_H

#include <iostream>
#include <string>
#include <map>
#include "EvictionAlgo.h"

class Cache {
private:
    std::map<std::string, std::string> storage;
    EvictionAlgo* evictionAlgo;
    int capacity;
    int maxCapacity;

public:
    Cache(EvictionAlgo* algo);
    void setEvictionAlgo(EvictionAlgo* algo);
    void add(std::string key, std::string value);
    void evict();
    void get(std::string key);
};

#endif // CACHE_H
