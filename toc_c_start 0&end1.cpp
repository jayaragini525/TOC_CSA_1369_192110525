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
				if (s[i]=='0')
				{
					f='y';
				}
				else
				{
					break;
				}
				case'y':
				if(s[i]=='1')
				{
					f='z';
				}
				else if(s[i]=='0')
				{
					f='y';
				}
				break;
			    case'z':
					if (s[i]=='0')
					{
						f='y';
					}
					else if (s[i]=='1')
					{
						f='z';
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
