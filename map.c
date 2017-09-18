// Author: Daniel Hunter
// Date: Sept 16 2017

#include <stdio.h>
#include "map.h"

unsigned long getHash(unsigned char *str) { // http://www.cse.yorku.ca/~oz/hash.html
  // TODO Take char point, and cast it as unsigned?
  unsigned long hash = 5381;
  int c;

  while ((c = *str++))
      hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

  return hash;
}

struct HashMap constructor(int size) {
  struct HashMap h;
  h.currentItems = 0;
  return h;
}

bool set(char* key, int* value, HashMap* h) {
  unsigned long hash = getHash((unsigned char*) key);
  hash = hash % 100;
  h->map[hash] = value;
  h->currentItems++;
  return true;
}

int* get(char* key, HashMap h) { // TODO Return pointer to custom arbitrary struct?
  unsigned long hash = getHash((unsigned char*) key);
  hash = hash % 100;
  if (h.map[hash] == NULL) {
    printf("Attempting to access a null value.\n");
    return NULL;
  }
  return h.map[hash];
}

// delete the value associated with the given key, returning the value on success or null if the key has no value.
int* delete(char* key, HashMap* h) {
  unsigned long hash = getHash((unsigned char*) key);
  hash = hash % 100;
  int* value = h->map[hash];
  h->map[hash] = NULL;
  h->currentItems--;
  return value;
}

// return a float value representing the load factor (items in hash map)/(size of hash map) of the data structure. Since the size of the data structure is fixed, this should never be greater than 1.
float load(HashMap h) {
  float load = h.currentItems / (float) MAP_SIZE; // cast as float to avoid integer division
  return load;
}
