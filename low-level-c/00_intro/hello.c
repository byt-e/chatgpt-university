#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello, Byt-e! You passed %d arguments.\n", argc-1);
    for (int i = 1; i < argc; i++) {
        printf("Arg %d: %s\n", i, argv[i]);
    }

    return 0;
}
