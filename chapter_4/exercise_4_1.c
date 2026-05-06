/* Напишите программу, которая запрашивает имя и фамилию, а затем выводит их
 * в формате фамилия, имя.
 */

#include <stdio.h>

int main(int argc, char** argv) {
   char name[30];
   char last_name[30];

   printf("%s", "Введите имя: ");
   scanf("%s", name);
   printf("%s", "Ведитие фамилию: ");
   scanf("%s", last_name);
   printf("%s, %s\n", last_name, name);
}
