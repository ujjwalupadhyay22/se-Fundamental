//9. WAP to show difference between Structure and Union. 

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
    // Structure example
    struct StructExample s;
    s.x = 10;
    s.y = 'A';
    printf("Structure: x = %d, y = %c\n", s.x, s.y);

    // Union example
    union UnionExample u;
    u.x = 10;
    printf("Union: x = %d\n", u.x);
    u.y = 'A';
    printf("Union: y = %c\n", u.y);

    return 0;
}
