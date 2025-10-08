#ifndef LFU_H
#define LFU_H

#include "EvictionAlgo.h"

class Lfu : public EvictionAlgo {
public:
    void evict(Cache* cache) override;
};

#endif // LFU_H
