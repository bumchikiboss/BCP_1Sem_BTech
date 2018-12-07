/*
Developed By : Hanut Kumar Arora
First Created On : 07-12-2018
Aim : Write a program that takes your full name as input and displays the abbreviations of the first and middle names except the last name which is displayed as it is. For example, if your name is Robert Brett Roser, then the output should be R.B.Roser.
*/

/*	Limitations
->	Name should be of exactly 3 words : First Name, Middle Name and Last Name. Otherwise wrong result would be obtained.
-> 	Maximum length for name that can be entered is 100 characters.
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0, flag=0, j=0;
	/*	i & j for looping
		flag to find the postion of space in the array
	*/
	
	char name_org[100], name_mod[100];
	/*	name_org for storing the original name as entered by the end user
		name_mod for storing the name modified as per aim
	*/
	
	// getting the name from the end user and storing in name_org
	printf("Enter the name to be modified as per question : ");
	gets(name_org);
	
	// first character of the modified name should be the first letter of the first name
	name_mod[0] = name_org[0];
	
	// second and fourth character of the modified name should be periods (.)
	name_mod[1] = '.';
	name_mod[3] = '.';
	
	// loop to find the first space in the original name and save it in flag
	for (i=0; name_org[i]!='\0'; i++)
	{
		if (name_org[i]==' ')
		{
			flag=i;
			break;
		}
	}
	
	// next character to the first space would be the first letter of the middle name
	name_mod[2] = name_org[flag+1];
	
	// loop to find next space so that the remaining last name can be appended to the modified name
	for(i=flag+1; name_org[i]!='\0'; i++)
	{
		if (name_org[i]==' ')
		{
			flag=i;
			break;
		}
	}
	
	// loop to append the last name from original name to the modified name
	for(i=flag+1; name_org[i]!='\0'; i++, j++)
	{
		name_mod[4+j] = name_org [i];
	}
	
	// printing the modified name
	printf("Modified name as per question : ");
	puts(name_mod);
}
