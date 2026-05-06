/* Напишите программу, которая запрашивает раст в сантиметрах и имя, после чего
 * отображает полученную информацию в следующей форме:
 *    Ларри, ваш рост составляет 1.84 метра 
 * Используйте тип float, а также операцию деления.
 */

#include <stdio.h>

int main(int argc, char** argv) {
   char name[30];
   float height;

   printf("%s", "Enter your name: ");
   scanf("%s", name);
   printf("%s", "Enter your height in centimeters: ");
   scanf("%f", &height);

   printf("%s, your height is %.2f meters.\n", name, height / 100);
}
