#define MAP_SIZE 100

typedef int bool;
enum { false, true }; // Create a data type to nicely represent booleans

// typedef struct HashMap HashMap;
struct HashMap {
  float size;
  // int* map[MAP_SIZE];
};

// return an instance of the class with pre-allocated space for the given number of objects.
struct HashMap constructor(int size);

// stores the given key/value pair in the hash map. Returns a boolean value indicating success / failure of the operation.
bool set(char* key, int value);

// return the value associated with the given key, or null if no value is set.
int* get(char* key); // TODO Return pointer to custom arbitrary struct?

// delete the value associated with the given key, returning the value on success or null if the key has no value.
int delete(char* key); // TODO Same here

// return a float value representing the load factor (items in hash map)/(size of hash map) of the data structure. Since the size of the data structure is fixed, this should never be greater than 1.
float load();
