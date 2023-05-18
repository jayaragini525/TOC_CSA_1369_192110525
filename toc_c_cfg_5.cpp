#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int is_valid(char string[], int start, int end);
int S(char string[], int start, int end) {
 if (string[start] == '0' && string[end] == '0' && is_valid(string, start+1, end-1))
{
	return 1;
}
else{
	return 0;
}
}
int A(char string[], int start, int end) {
 if (start > end) {
 return 1;
 } else if (string[start] == '1' && A(string, start+1, end)) 
 {
 	return 1;
 }
 else
 {
 	return 0;
 }
}
int is_valid(char string[], int start, int end) {
 for (int i = start; i <= end; i++) {
 if (string[i] != '0' && string[i] != '1')
 {
 	return 0;
 }
}
 return 1;
}
int main() {
 char input_string[MAX_LENGTH];
 printf("Enter input string: ");
 scanf("%s", input_string);
 int string_length = strlen(input_string);
 if (S(input_string, 0, string_length - 1)) {
 printf("Accepted\n");
 } else {
 printf("Rejected\n");
}
return 0;
}
