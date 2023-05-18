#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 1000
int is_valid(char* string);
int main() {
 char string[MAX_LENGTH];
 printf("Enter a string: ");
 scanf("%s", string);
 if (is_valid(string)) {
 printf("The string is in the language defined  by the CFG.\n");
 } else {
 printf("The string is not in the language defined by the CFG.\n");
 }
 return 0;
}
int is_valid(char* string) {
 if (strlen(string) == 0) {
 return 1; // the empty string is in the language
 }
 if (string[0] == '0' && string[strlen(string)-1] == '1') {
 char* new_string = (char*) malloc((strlen(string)-2) * sizeof(char));
 strncpy(new_string, string+1, strlen(string)-2);
 new_string[strlen(string)-2] = '\0';
 if (is_valid(new_string)) 
 {
 	return 1;
 }
 }
 return 0;
}
