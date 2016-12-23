#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
char a[33], b[33];
int i;
    fgets(a, 33, stdin);
    fgets(b, 33, stdin);
    puts(a);
    for (i = 0; a[i]; i++) {
        if (a[i] != b[i]) {
            a[i] = b[i];
            puts(a);
        }
    }
    return EXIT_SUCCESS;
}
