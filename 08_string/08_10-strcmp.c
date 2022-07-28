// strcmp():- This function is used to compare two string
//********************************************************
/*It returns 0 if both strings are equal
 It return negative(-)value if first string mismatch character ASCII value is not greater than second string corresponding mismatching character.
 It returns positive value otherwise
 */

#include <stdio.h>
#include <string.h>
int main()
{
   char st1[40] = "Hello";
   char *st2 = "He";

   int value = strcmp(st1, st2);
   printf("Now the value is %d", value);
   return 0;
}
// To understand this programm just change the value of char st1 and st 2

//