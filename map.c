// Author: Daniel Hunter
// Date: Sept 16 2017

#include "map.h"


unsigned long getHash(unsigned char *str) {
  unsigned long hash = 5381;
  int c;

  while (c = *str++)
      hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

  return hash;
}

struct HashMap constructor(int size) {
  struct HashMap h;
  // h.size = size;
  return h;
}

bool set(char* key, int value) {
  unsigned long hash = getHash(key);
}


int* get(char* key) { // TODO Return pointer to custom arbitrary struct?
  unsigned long hash = getHash(key);
}

// delete the value associated with the given key, returning the value on success or null if the key has no value.
int delete(char* key) { // TODO Same here
  unsigned long hash = getHash(key);
}

// return a float value representing the load factor (items in hash map)/(size of hash map) of the data structure. Since the size of the data structure is fixed, this should never be greater than 1.
float load() {

}
