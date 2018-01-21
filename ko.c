#include <string.h>
#include <stdio.h>
void compare(char str1[], char str2[], int len);
void printStr(char str[]);
void longest_largest_substring(char str[])
{
	int length = strlen(str);
	for (int i = 1; i < length; i++)
	{
		if (compare(str, &str[i], length - i) < 0)
		{
			printStr(&str[i]);
			break;
		}
	}
}
void compare(char str1[], char str2[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (str1[i] == str2[i])
		{
			continue;
		}
		else if (str1[i] > str2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}
void printStr(char str[])
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
