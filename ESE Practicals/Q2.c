#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0, flag=0, j=0;
	char name_org[100], name_mod[100];
	printf("Enter the name to be modified as per question : ");
	gets(name_org);
	name_mod[0] = name_org[0];
	name_mod[1] = '.';
	name_mod[3] = '.';
	for (i=0; name_org[i]!='\0'; i++)
	{
		if (name_org[i]==' ')
		{
			flag=i;
			break;
		}
	}
	name_mod[2] = name_org[flag+1];
	for(i=flag+1; name_org[i]!='\0'; i++)
	{
		if (name_org[i]==' ')
		{
			flag=i;
			break;
		}
	}
	for(i=flag+1; name_org[i]!='\0'; i++, j++)
	{
		name_mod[4+j] = name_org [i];
	}
	printf("Modified name as per question : ");
	puts(name_mod);
}
