#ifndef EVICTIONALGO_H
#define EVICTIONALGO_H

class Cache;

class EvictionAlgo {
public:
    virtual void evict(Cache* cache) = 0;
    virtual ~EvictionAlgo() {}
};

#endif // EVICTIONALGO_H
