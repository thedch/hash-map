#include <stdio.h>
#include "map.h"

int main() {
    printf("Welcome to the hash map.\n");

    HashMap* h = constructor(10);
    int input = 5;
    set("hello", &input, h);
    int* value = get("hello", h);
    printf("%d\n", *value);

    printf("%.2f\n", load(h));
    printf("%d\n", h->size);
    printf("%d\n", h->currentItems);

    value = delete("hello", h);
    printf("%d\n", *value);

}
