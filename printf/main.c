#include "includes/printf.h"
#include <stdio.h>

int main (void)
{
	int number    =  5;
	printf("---%*d----\n", 6, number);
	ft_printf("---%*d----\n", 6, number);
}
