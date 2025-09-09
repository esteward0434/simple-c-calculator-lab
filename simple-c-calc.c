#include <stdio.h>

int main () {
 float num1, num2, result;
 char operator;
 printf ("Enter your first number\n");
 scanf ("%f", &num1);
 printf ("Enter your second number\n");
 scanf ("%f", &num2);

// Letting the user input the numbers they would like to calculate

 printf ("Enter the operator you would like to use: ('+')");
 scanf ("%c", &operator);

// Allows user to pick their operation
 return 0; 
}