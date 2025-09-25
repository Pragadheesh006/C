/* C Programming Basics: Demonstrations and Practices (No Separate Functions)
   All code is in main() for simplicity.
   Compile: gcc basics.c -o basics
   Run: ./basics
   This file shows program structure, I/O, types, casting, and sizeof.
   Multi-line comment example.
*/

// Include necessary headers
#include <stdio.h>   // For printf, scanf
#include <stdlib.h>  // For exit (optional)

int main() {  // Program entry point
    printf("=== Hello World + Program Structure ===\n");
    printf("Hello, C World!\n");  // Basic print
    printf("This program demonstrates C basics.\n\n");

    // Variables and types demo
    printf("=== Basic Types & Variables ===\n");
    int age = 25;                    // int
    char initial = 'A';              // char
    float height = 5.9f;             // float
    double pi = 3.14159265359;       // double
    long population = 8000000000L;   // long
    short score = 95;                // short
    const int max_tries = 3;         // const int

    printf("Age (int): %d\n", age);
    printf("Initial (char): %c\n", initial);
    printf("Height (float): %.2f\n", height);
    printf("Pi (double): %.10f\n", pi);
    printf("Population (long): %ld\n", population);
    printf("Score (short): %hd\n", score);
    printf("Max tries (const int): %d\n", max_tries);
    printf("\n");

    // Print sizes (inlined)
    printf("Sizes on this machine (bytes):\n");
    printf("char: %zu\n", sizeof(char));
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("Size of 'int main()': %zu\n", sizeof(int));  // Just int for return type
    // Note: sizeof works on types or variables
    int x = 10;
    printf("Size of variable x (int): %zu\n", sizeof(x));
    printf("\n");

    // Type-casting practice (inlined)
    printf("=== Type-Casting Exercises ===\n");
    int a = 10, b = 3;
    printf("Integer division (10 / 3): %d\n", a / b);  // 3 (truncates)

    // Explicit casting to float
    float result1 = (float)a / b;
    printf("Cast to float (10 / 3): %.2f\n", result1);  // 3.33

    // Casting double to int (truncates decimal)
    double d = 9.99;
    int i = (int)d;
    printf("Double 9.99 cast to int: %d\n", i);  // 9

    // Implicit promotion: int + double -> double
    double sum = a + pi;
    printf("int + double: %.2f\n", sum);  // 13.14

    // Unsafe: large int to char (overflow)
    int large = 300;
    char c = (char)large;  // Truncates to 44 (300 % 256)
    printf("int 300 cast to char: %d (as int: %c)\n", c, c);
    printf("\n");

    // Input/Output practice (interactive, inlined)
    printf("=== Practice: Print and Take Input ===\n");
    int user_age;
    char user_initial;
    float user_height;

    printf("Enter your age (int): ");
    scanf("%d", &user_age);  // Input int
    printf("You are %d years old.\n", user_age);

    printf("Enter your initial (char, e.g., A): ");
    scanf(" %c", &user_initial);  // Space before %c skips whitespace
    printf("Your initial is: %c\n", user_initial);

    printf("Enter your height (float, e.g., 5.9): ");
    scanf("%f", &user_height);
    printf("Your height is %.2f feet.\n", user_height);

    // String input (simple, no spaces)
    char name[50];
    printf("Enter your name (no spaces): ");
    scanf("%s", name);  // Arrays don't need &
    printf("Hello, %s! (%c%c%c...)\n", name, name[0], name[1], name[2]);

    // Clear input buffer (simple flush for next inputs)
    // In practice, use getchar() or fgets for robustness

    printf("\nProgram complete. Returning 0 for success.\n");
    return 0;  // Exit main
}
