#include <stdio.h>

int main () {
 float num1, num2, result;
 char operator;
 printf ("Enter your first number\n");
 scanf ("%f", &num1);
 printf ("Enter your second number\n");
 scanf ("%f", &num2);

// Letting the user input the numbers they would like to calculate

 printf ("Enter the operator you would like to use: ('+', '-', '*', '/')\n");
 scanf (" %c", &operator);

// Allows user to pick their operation

 if(operator == '+') {
    result = num1 + num2;
    printf ("Result = %.2f\n", result);
 }

 // Addition function added ^

 else if ( operator == '-') {
    result = num1 - num2;
    printf ("Result = %.2f\n", result);
 }

 //Subtraction function added ^

 else if (operator == '*') {
    result = num1 * num2;
    printf ("Result = %.2f\n", result);
 }

 //Multiplication function added ^

 else if (operator == '/'){
    if (num2 != 0) {
        result = num1 / num2;
        printf ("Result = %.2f\n", result);
    } else {
        printf ("Divide By Zero ERROR\n");
    }
 }

 //Division function added


 return 0; 
}