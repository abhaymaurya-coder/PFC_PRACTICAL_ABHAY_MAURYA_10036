1️⃣ Missing Semicolon
#include <stdio.h>

int main() {
    int a = 10
    printf("%d", a);
    return 0;
}


Error: expected ';' before 'printf'

2️⃣ Undeclared Variable
#include <stdio.h>

int main() {
    a = 5;
    printf("%d", a);
    return 0;
}


Error: 'a' undeclared

3️⃣ Wrong Function Name
#include <stdio.h>

int main() {
    print("Hello");
    return 0;
}


Error: implicit declaration of function 'print'

4️⃣ Missing Header File
int main() {
    printf("Hello");
    return 0;
}


Error: printf not declared

5️⃣ Type Mismatch
#include <stdio.h>

int main() {
    int a = "Hello";
    return 0;
}


Error: invalid conversion from string to int

🔵 Run-Time Errors

👉 Errors that occur while the program is running.

1️⃣ Division by Zero
#include <stdio.h>

int main() {
    int a = 10, b = 0;
    printf("%d", a / b);
    return 0;
}


Error: program crashes (divide by zero)

2️⃣ Array Index Out of Bounds
#include <stdio.h>

int main() {
    int a[3] = {1, 2, 3};
    printf("%d", a[5]);
    return 0;
}


Error: undefined behavior / garbage value

3️⃣ Infinite Loop
#include <stdio.h>

int main() {
    int i = 1;
    while(i > 0) {
        printf("%d ", i);
    }
    return 0;
}


Error: program never stops

4️⃣ Invalid Memory Access
#include <stdio.h>

int main() {
    int *p;
    *p = 10;
    return 0;
}


Error: segmentation fault

5️⃣ Stack Overflow (Too Much Recursion)
#include <stdio.h>

void fun() {
    fun();
}

int main() {
    fun();
    return 0;
}
