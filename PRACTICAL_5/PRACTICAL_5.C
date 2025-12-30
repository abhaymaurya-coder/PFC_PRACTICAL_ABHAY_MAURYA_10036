#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Sum = %d", a + b);
            break;
        case 2:
            printf("Difference = %d", a - b);
            break;
        case 3:
            printf("Product = %d", a * b);
            break;
        case 4:
            printf("Division = %d", a / b);
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even Number") : printf("Odd Number");

    return 0;
}



#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even Number") : printf("Odd Number");

    return 0;
}


#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("Maximum = %d", a);
    else if(b >= a && b >= c)
        printf("Maximum = %d", b);
    else
        printf("Maximum = %d", c);

    return 0;
}


#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");

    return 0;
}
