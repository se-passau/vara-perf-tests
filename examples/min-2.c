#include <stdio.h>
#include <stdlib.h>

int main() {
    ___REGION_START __RT_High "R1"
    int a = 42;
    puts(itoa(a));
    ___REGION_END __RT_High "R1"
    return 0;
}

