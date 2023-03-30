#include<stdio.h>
int main()
{
	char  str[100];
	int i,count=0;
	printf("enter a alphabets");
	scanf("%s",str);
	for(i=0;str[i] !='\0';str)
	{
		if(str[i]== 'a'||
		   str[i]== 'e'||
		   str[i]== 'i'||
		   str[i]== 'o'||
		   str[i]== 'u')
		{
			count++;
		}
		printf("\n");
	}
	return 0;
}
