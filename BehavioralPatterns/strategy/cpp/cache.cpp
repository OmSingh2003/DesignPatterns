#include "Cache.h"

Cache::Cache(EvictionAlgo* algo) {
    storage = std::map<std::string, std::string>();
    evictionAlgo = algo;
    capacity = 0;
    maxCapacity = 2;
}

void Cache::setEvictionAlgo(EvictionAlgo* algo) {
    evictionAlgo = algo;
}

void Cache::add(std::string key, std::string value) {
    if (capacity == maxCapacity) {
        evict();
    }
    capacity++;
    storage[key] = value;
}

void Cache::evict() {
    evictionAlgo->evict(this);
    capacity--;
}

void Cache::get(std::string key) {
    storage.erase(key);
}