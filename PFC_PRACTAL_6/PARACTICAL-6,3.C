#include <stdio.h>
void atmPin() {
    int pin = 1234, input, tries = 3;
    while(tries--) {
        printf("Enter PIN: ");
        scanf("%d", &input);
        if(input == pin) {
            printf("Access Granted\n");
            return;
        }
        printf("Wrong PIN\n");
    }
    printf("Card Blocked\n");
}
  return 0 ;
}