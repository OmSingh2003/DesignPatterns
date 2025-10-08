using namespace std;
class Cache;
class EvictionAlgo {
public:
  virtual void evict(Cache *c) = 0;
  virtual ~EvictionAlgo() {}
};
