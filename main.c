#include <stdio.h>
#include <stdlib.h>




int main() {
    FILE *file;
    file = fopen("default.txt", "r");
    if (file == NULL) {
        puts("Error opening file");
        exit(EXIT_FAILURE);
    }

}
