#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char[] alp = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};

	while (alp <= 26)
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
