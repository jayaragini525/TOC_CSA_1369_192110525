#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 1000
int is_valid(char* string, int start, int end);
int main() {
 char string[MAX_LENGTH];
 printf("Enter a string: ");
 scanf("%s", string);
 if (is_valid(string, 0, strlen(string)-1)) {
 	printf("The string is in the language defined by the CFG.\n");
 } else {
 printf("The string is not in the language defined by the CFG.\n");
  }
 return 0;
}
int is_valid(char* string, int start, int end)  {
 if (start > end) {
 return 1; // the empty string is in the language
 }
 if (string[start] == '1' && string[end] == '1' && end == start +2){
 return 1; // S -> A101A
 }
 if (string[start] == '0' || string[start] == '1') {
 for (int i = start+1; i <= end; i++) {
 if (string[i] != '0' && string[i] != '1') 
 {
 	break;
 }
 if (i == end) {
 return 1; // A -> 0A | 1A | e
 }
 }
 for (int i = end-1; i >= start; i--) {
 if (string[i] != '0' && string[i] != '1') {
 	break;
 }
 if (i == start) {
 return 1; // A -> 0A | 1A | e
 }
 }
 for (int i = start+1; i <= end-1; i++) {
 if (string[i] == '0' || string[i] == '1') {
 	if (is_valid(string, start+1, i-1) && is_valid(string, i+1, end)) {
 return 1; // A -> 0A | 1A |e
}
}
}
}
return 0;
}
