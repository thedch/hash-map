#include <stdio.h>
#include "map.h"

int main() {
    printf("Welcome to the hash map.\n");
    printf("%d\n", getHash("hello"));
    printf("%d\n", getHash("daniel"));
    printf("%d\n", getHash("blah"));
    printf("%d\n", getHash("hello"));
}
