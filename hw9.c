#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct cityinfo
{
	char name[20];
	char country[20];
	char population[40];
} City;

int main(void)
{
	City cities[3];
	int i;
	printf("Input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(cities[i].name, sizeof(cities[i].name), stdin);
		printf("Country> ");
		fgets(cities[i].country, sizeof(cities[i].country), stdin);
		printf("Population> ");
		fgets(cities[i].population, sizeof(cities[i].population), stdin);
	}
	for (i = 0; i < 3; i++)
	{
		cities[i].name[strlen(cities[i].name) - 1] = 0;
		cities[i].country[strlen(cities[i].country) - 1] = 0;
		cities[i].population[strlen(cities[i].population) - 1] = 0;
	}
	printf("\nPrinting the three cities:\n");
	for (i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %s people\n", (i+1),cities[i].name, cities[i].country, cities[i].population);
	return 0;
}