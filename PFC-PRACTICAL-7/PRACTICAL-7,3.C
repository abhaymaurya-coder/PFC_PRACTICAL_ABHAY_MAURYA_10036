#include <stdio.h>
void alphaPattern() {
    for(int i = 1; i <= 4; i++) {
        for(char ch = 'A'; ch < 'A' + i; ch++)
            printf("%c", ch);
        printf("\n");
    }
}