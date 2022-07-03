#include<stdio.h>
#include<unistd.h>

/**
 * main - print a beautiful sentence
 *
 * This is Advanced task in first Project in
 * C programming
 *
 * Return: Here we go 1 when success
 */
int main(void)
{
	char w[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	if (1)
	{
		write(1, w, 59);
	}
	else
	{
	fwrite("Anything", 8, 1, stderr);
	}

	return (1);
}
