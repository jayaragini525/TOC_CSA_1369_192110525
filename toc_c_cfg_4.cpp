#include <stdio.h>
#include <string.h>
int main() {
 char input[100];
 int length, i;
printf("Enter a string to check: ");
 scanf("%s", input);
 length = strlen(input);
  // Check if the input string is valid
 for (i = 0; i < length; i++) {
 if (input[i] != '0' && input[i] != '1') 
 {
 printf("Invalid string: contains characters other than 0 and 1\n");
 return 0;
}
}
if (length == 0 || input[0] == '0' || input[0] == '1') 
{
 for (i = 1; i < length; i++)
 {
 if (input[i] != '0' && input[i] != '1') {
 printf("Invalid string: contains characters other than 0 and 1\n");
 return 0;
 }
}
printf("The string is accepted\n");
 }
  else if (input[0] == '0' && input[length - 1] == '0') {
 char substring[100];
 strncpy(substring, input + 1, length - 2);
 substring[length - 2] = '\0';
 if (strlen(substring) == 0 || (strlen(substring) == 1 && (substring[0] == '0' || substring[0] ==
'1'))) {
 printf("The string is accepted\n");
 } else {
 printf("The string is not accepted\n");
 }
 }
  else if (input[0] == '1' && input[length - 1] == '1') 
 {
 	char substring[100];
 strncpy(substring, input + 1, length - 2);
 substring[length - 2] = '\0';
 if (strlen(substring) == 0 || (strlen(substring) == 1 && (substring[0] == '0' || substring[0] ==
'1'))) {
 printf("The string is accepted\n");
 } else {
 printf("The string is not accepted\n");
 }
 } 
 else
 {
 printf("The string is not accepted\n");
}
 return 0;
}
 
