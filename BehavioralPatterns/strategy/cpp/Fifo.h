#ifndef FIFO_H
#define FIFO_H

#include "EvictionAlgo.h"

class Fifo : public EvictionAlgo {
public:
    void evict(Cache* cache) override;
};

#endif // FIFO_H
