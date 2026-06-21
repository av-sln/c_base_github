/*
 * Напишите программу, которая создаёт массив из 26 элементов и помещает в 
 * него 26 строчных букв английского алфавита. Также предусмотрите вывод
 * содержимого этого массива.
 */

#include <stdio.h>

int main(int argc, char** argv) {
   char alphabet[26];
   char i = 'a';
   int j = 0;

   while (i <= 'z') {
      alphabet[j] = i;
      i++;
      j++;
   }

   for (int j = 0; j < 26; j++) {
      printf("%c ", alphabet[j]);
   }

   printf("\n");
}
