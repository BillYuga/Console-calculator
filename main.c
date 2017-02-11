#include <stdio.h>
#include "arithmetic_functions.h"

int main()
{
float operand1, operand2;
float result;
char operator;
  

printf("Enter expression (operand operator operand): ");
scanf("%f %d %f",&operand1, &operator, &operand2);
switch(operator){
  case '+': result = add(operand1, operand2);
            break;
  case '-': result = subt(operand1, operand2);
            break;
  case '*': result = mult(operand1, operand2);
            break;
  case '/': result = div(operand1, operand2);
}
printf("Result: %f", result);
return 0;
}
