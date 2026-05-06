/* Напишите программу, которая запрашивает имя пользователя и его фамилию.
 * Сделайте так, чтобы она выводита введённые имена в одной строке и количество
 * символов в каждом слове в следующей строке. Выровняйте каждое количество 
 * символов по окончанию соответствующего имени, как показано ниже:
 *    Иван Петров
 *       4      6
 * Затем сделайте так, чтообы программа выводила ту же самую информацию, но с 
 * количепством символов, выровненным по началу каждого слова:
 *    Иван Петров
 *    4    6
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
   char name[30];
   char last_name[30];

   printf("%s", "Введите ваше имя: ");
   scanf("%s", name);
   printf("%s", "Введите вашу фамилию: ");
   scanf("%s", last_name);

   printf("%s %s\n", name, last_name);
   printf("%*d %*d\n", strlen(name), strlen(name), strlen(last_name), strlen(last_name ));

   printf("%s %s\n", name, last_name);
   printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(last_name), strlen(last_name));
}
