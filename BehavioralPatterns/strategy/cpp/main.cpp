#include "Cache.h"
#include "Fifo.h"
#include "Lru.h"
#include "Lfu.h"

int main() {
    Lfu* lfu = new Lfu();
    Cache* cache = new Cache(lfu);
    cache->add("a", "1");
    cache->add("b", "2");
    cache->add("c", "3");

    Lru* lru = new Lru();
    cache->setEvictionAlgo(lru);
    cache->add("d", "4");

    Fifo* fifo = new Fifo();
    cache->setEvictionAlgo(fifo);
    cache->add("e", "5");

    delete lfu;
    delete lru;
    delete fifo;
    delete cache;

    return 0;
}
