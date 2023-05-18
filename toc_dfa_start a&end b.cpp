#include <stdio.h>
int main()
{
	char s[100],f='x';
		printf("enter the string:");
		scanf("%s",s);
		for(int i=0;s[i]!='\0';i++)
		{
			switch(f)
			{
				case'x':
				if (s[i]=='a')
				{
					f='y';
				}
				else
				{
					break;
				}
				case'y':
				if(s[i]=='b')
				{
					f='y';
				}
				else if(s[i]=='a')
				{
					f='z';
				}
				break;
			    case'z':
					if (s[i]=='a')
					{
						f='z';
					}
					else if (s[i]=='b')
					{
						f='y';
					}
				break;
			
			}
	}
			if (f=='z')
			{
				printf("string is accepted");
			}
			else{
				printf("string is  not accepted");
			}
}
