#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int line_counter(char *buffer, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (buffer[i] == '\n')
            count++;
    }
    return count;
}

int int_counter(char *line, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (line[i] == ',')
            count++;
    }
    return count;
}


void print_file(FILE *p_file, int file_len) {
    char buffer[file_len];
    fread(buffer, sizeof(char), 30, p_file);
    printf("%s", buffer);
    int lines_num = line_counter(buffer, file_len);

    for (int i = 0; i < lines_num; i++) {

    }

}


int main() {
    FILE *p_file = fopen("../input.txt", "r");
    if (p_file == NULL) {
        puts("Error opening file");
        exit(EXIT_FAILURE);
    }

    fseek(p_file, 0, SEEK_END);
    int file_len = ftell(p_file);
    fseek(p_file, 0, SEEK_SET);



    fclose(p_file);
}
