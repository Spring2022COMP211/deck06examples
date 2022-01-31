#include <stdio.h>

void bar(int x);
void foo();

int main() {
    foo();
    bar(211);
    foo();
}

void bar(int x) {
    printf("%d\n", x);
}

void foo() {
    int a;
    printf("%d\n", a);
}



