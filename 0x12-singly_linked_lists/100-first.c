#include "lists.h"
void print(void)__attribute__((constructor));
/**
 * print - prints somethiung to the screen before main
 *
 * Return: nothing
 */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n\
			I bore my house upon my back!\n");
}
