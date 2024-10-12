#include <map>
using namespace std;

class CacheNode {
public:
  int key;
  int value;

  CacheNode *left;
  CacheNode *right;

  CacheNode(int key, int value) {
    this->key = key;
    this->value = value;
  }
};

class LRUCache {
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

public:
  int get(int key) {
    if (this->cache.find(key) == this->cache.end()) {
      return -1;
    }

    CacheNode *node = this->cache[key];
    this->remove(node);
    this->push(node);
    return node->value;
  }

  int put(int key, int value) {
    if (this->cache.find(key) != this->cache.end()) {
      this->remove(cache[key]);
    }

    CacheNode *node = new CacheNode(key, value);
    this->push(node);
    this->cache.insert({key, node});

    if (this->cache.size() > this->capacity) {
      CacheNode *toRemove = this->left->right;
      this->remove(toRemove);
      this->cache.erase(toRemove->key);
    }
  }
};
