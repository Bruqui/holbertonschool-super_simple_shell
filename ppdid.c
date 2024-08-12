#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	pid_t parent_pid;

	pid_t parent_pid = getppid();

	printf("%u\n, parent_pid);

	return(0);
}
