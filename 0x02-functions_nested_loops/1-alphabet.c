#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char[] alp = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
	int i = 0;

	while (i < 26)
	{
		_putchar(alp[i]);
		i++;
	}
	_putchar('\n');
}
