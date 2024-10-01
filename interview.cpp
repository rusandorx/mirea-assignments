#include <map>
using namespace std;

class CacheNode {
public:
  int key;
  int value;
  CacheNode *right;
  CacheNode *left;

  CacheNode(int key, int value) {
    this->key = key;
    this->value = value;
  }
};

class LRUCache {
public:
  map<int, CacheNode *> cache;
  int capacity;
  CacheNode *left;
  CacheNode *right;
  LRUCache(int capacity) {
    this->capacity = capacity;
    this->cache = {};

    this->left = new CacheNode(0, 0);
    this->right = new CacheNode(0, 0);

    this->left->right = this->right;
    this->right->left = this->left;
  }

  void remove(CacheNode *node) {
    CacheNode *left = node->left;
    CacheNode *right = node->right;

    left->right = right;
    right->left = left;
  }

  void push(CacheNode *node) {
    CacheNode *prevLeft = this->right->left;

    prevLeft->right = node;
    this->right->left = node;

    node->left = prevLeft;
    node->right = this->right;
  }

  int get(int key) {
    if (!this->cache.count(key)) {
      return -1;
    }

    CacheNode *node = this->cache[key];
    this->remove(node);
    this->push(node);

    return node->value;
  }

  void put(int key, int value) {
    if (this->cache.count(key)) {
      this->remove(cache[key]);
    }

    CacheNode *node = this->cache[key];
    this->push(node);
    this->cache[key] = node;

    if (this->cache.size() > this->capacity) {
      CacheNode *toDelete = this->left->right;
      this->remove(toDelete);
      map<int, CacheNode *>::iterator iter = this->cache.find(toDelete->key);
      this->cache.erase(iter);
    }
  }
};

int main(int argc, char *argv[]) {
  LRUCache *lru = new LRUCache(2);
  lru->put(1, 1);
  return 0;
}
