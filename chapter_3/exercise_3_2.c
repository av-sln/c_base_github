/* exercise_3_2.c -- 
 * Напишите программу, которая приглашает ввести некоторое значение в коде
 * ASCII, например 66, а затем выводит символ, которому соответствует введённый
 * код. 
 */

#include <stdio.h>

int main(int argc, char** argv) {
  char symbol;

  printf("Введите цифровой код символа: ");
  scanf("%d", &symbol);
  printf("Коду %d соответствует символ %c.\n", symbol, symbol);

  return 0;
}
