#ifndef LRU_H
#define LRU_H

#include "EvictionAlgo.h"

class Lru : public EvictionAlgo {
public:
    void evict(Cache* cache) override;
};

#endif // LRU_H
