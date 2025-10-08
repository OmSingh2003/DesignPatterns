#include <string>
#include <unordered_map>
using namespace std;
class EvictionAlgo;

class Cache {
private:
  unordered_map<string, string> storage;
  EvictionAlgo *evictionAlgo;
  int capacity;
  int maxCapacity;

public:
  Cache(EvictionAlgo *algo, int maxCap) {
    this->evictionAlgo = algo;
    this->maxCapacity = maxCap;
    this->capacity = 0;
  }
};
