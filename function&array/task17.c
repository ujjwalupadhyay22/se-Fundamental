//17. WAP to show difference between Structure and Union.  

#include <stdio.h>

// Define a structure
struct StructExample {
    int x;
    char y;
};

// Define a union
union UnionExample {
    int x;
    char y;
};

int main() {
    printf("Size of struct: %lu\n", sizeof(struct StructExample));
    printf("Size of union: %lu\n", sizeof(union UnionExample));

    return 0;
}
