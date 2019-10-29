#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"
#include <string.h>
#include <ctype.h>

void main()
{
	char datum[12];
	int year = 2014;
	int mon = 5;
	int day = 2;
	//printf("%d-%02d-%02d\n", year,mon,day);
	sprintf(datum,"%d-%02d-%02d\n", year, mon, day);



	

	char namn1234111[30] = "Stefan@HejHopp";
	for (int i = 0; i < strlen(namn1234111); i++)
	{
		if (namn1234111[i] == 'B')
		{
			namn1234111[i] = '2';
		}

		if (namn1234111[i] == 'S')
		{
			namn1234111[i] = 'R';
		}
	}



	char* ch = namn1234111;

	while (*ch != NULL)
	{
		*ch = tolower(*ch);
		ch++;
	}

	//sprintf();
	//replace = loop




	char namn1234[30] = "Stefan@HejHopp";
	char* test = strchr(namn1234, '@');
	int index = test - namn1234;
	printf("%c was found on index %d", '@',index );
	if (test == NULL)
	{
		printf("nopt valid du ghar ibnte m,atat in");
	}

	bool found = false;
	for (int i = 0; i < strlen(namn1234); i++)
	{
		if (namn1234[i] == '@')
		{
			found = true;
			break;
		}
	}
	if (found)
	{

	}




	char str[80];
	strncpy(str, "these ", sizeof(str));
	strncat(str, "strings ",sizeof(str));
	strncat(str, "are ", sizeof(str));
	strncpy(str, "these ", sizeof(str));
	strncat(str, "concatenated.", sizeof(str));

	sprintf(str ,"%s %s %s","these", namn1234,"hello");


	char namn[50];
	GetInput("Mata in fornamn", namn, sizeof(namn)-1);

	char namn2[50];
	GetInput("Mata in efternamn", namn2, sizeof(namn2) - 1);
	//strncpy(namn2, namn,sizeof(namn2));
	
	char fullname[100];
	//fullname = namn + " " + namn2;
	strcpy(fullname, namn);


	printf("%s  %s ",namn2, namn);

	int result = _stricmp(namn, "Stefan");
	if (result == 0)
	{
		printf("yes");
	}
	if (result != 0)
	{
		printf("Du måste skriva Stefan");
	}

	char namn3[30] = "StefanHejHopp";
	for (int i = 0; i < strlen(namn3); i++)
	{
		namn3[i] = tolower(namn3[i]);
	}



	char* n = "Stefan";
	if (n == "Stefan")
	{
		printf("yes");
	}

}
