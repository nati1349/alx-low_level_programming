#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * checksum - executes checksum
 * @s: input char
 * Return: checksum
 */
unsigned long checksum(char *s)
{
unsigned long sum = 0;
while (*s != 0)
{
	sum += *s;
	s++;
}
return (sum);
}
/**
 * main - prints password for crakme
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	unsigned long sum;
	int i, flag = 0;

	srand(time(NULL));

