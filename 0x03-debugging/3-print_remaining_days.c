#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 3 && day >= 91)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 4 && day >= 121)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 5 && day >= 152)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 6 && day >= 182)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 7 && day >= 213)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 8 && day >= 244)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 9 && day >= 274)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 10 && day >= 305)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 11 && day >= 335)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (month == 12 && day >= 366)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}