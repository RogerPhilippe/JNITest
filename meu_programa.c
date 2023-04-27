#include "minha_biblioteca.hpp"
#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int c = add(a, b);
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}

