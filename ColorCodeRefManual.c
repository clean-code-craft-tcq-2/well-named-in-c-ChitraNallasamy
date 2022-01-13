#include <stdio.h>
#include "ColorCodeRefManual.h"

const char* MajorColor_str[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColor_str[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

int numberOfMajorColors = sizeof(MajorColor_str) / sizeof(MajorColor_str[0]);
int numberOfMinorColors = sizeof(MinorColor_str) / sizeof(MinorColor_str[0]);

void PrintColorCodeManual(void)
{
	int MajorColorIndex = 0, MinorColorIndex = 0, PairNumber = 0;
	printf("\n---------------------------------------------\n");
	printf("\tCOLOR CODING REFERENCE MANAUAL");
	printf("\n---------------------------------------------\n");
	printf("PAIR NO.\t MAJOR COLOR\t MINOR COLOR\n");
	printf("\n---------------------------------------------\n");
	for (MajorColorIndex = 0; MajorColorIndex < numberOfMajorColors; MajorColorIndex++)
	{
		for (MinorColorIndex = 0; MinorColorIndex < numberOfMinorColors; MinorColorIndex++)
		{
			printf("%d\t\t%s\t\t%s\n", ++PairNumber, MajorColor_str[MajorColorIndex], MinorColor_str[MinorColorIndex]);
		}
	}
}
