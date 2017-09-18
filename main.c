#include <stdio.h>
#include "map.h"

int main() {
    printf("Welcome to the hash map.\n");

    HashMap h = constructor(10);
    set("hello", 5, &h);
    int value = get("hello", h);
    printf("%d\n", value);

    value = delete("hello", &h);
    printf("%d\n", value);
    value = get("hello", h);
    printf("%d\n", value);

}
