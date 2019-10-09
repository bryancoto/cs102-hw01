#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calc(double num1, double num2, char operator) {
  double result;
  if (operator == '+'){
    result = num1 + num2;
  }
  else if (operator == '-'){
    result = num1 - num2;
  }
  else if (operator == 'x'){
    result = num1 * num2;
  }
  else if (operator == '/'){
    result = num1 / num2;
  }
  return result;
}
int main (int argc, char* argv[]) {
  double sum;
  sum = calc(atof(argv[2]), atof(argv[3]), argv[1][0]);
  printf("%f\n", sum);
  return 0;
}
