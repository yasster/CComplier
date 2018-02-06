#include <stdio.h>

int fibonacci(int i) {
    if (i <= 1) {
        return 1;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}

int main()
{
    int i, value;
    i = 0;
    value = 1962; 
    while (i <= value) {
        printf("fibonacci(%d) =  %d\n", i, fibonacci(i));
        i = i + 1;
    }
    return 0;
}