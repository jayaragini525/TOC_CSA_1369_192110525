#include<stdio.h>
#include<string.h>
int S(char []);
int A(char []);
int main() {
char str[100];
printf("Enter a string to check: ");
scanf("%s", str);
if(S(str))
{
printf("String is accepted by the grammar.\n");
} 
else
{
printf("String is not accepted by the grammar.\n");
}
return 0;
}
int S(char str[])
{
if(str[0] == '0' && str[strlen(str)-1] == '1')
{
return A(&str[1]);
}
 else 
{
return 0;
}
}
int A(char str[])
 {
if(strlen(str) == 0) 
{
	return 1;
} else if(str[0] == '0') 
{
return A(&str[1]);
} else if(str[0] == '1')
{
return A(&str[1]);
} 
else
{
return 0;
}
}
