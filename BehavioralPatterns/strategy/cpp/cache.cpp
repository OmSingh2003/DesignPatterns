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
  Cache(EvictionAlgo *e) {
    this->evictionAlgo = e;
    this->maxCapacity = 2;
    this->capacity = 0;
  }
};
