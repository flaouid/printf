#include <stdio.h>
#include "./includes/printf.h"

int main(void)
{
	ft_printf("%%#X 2147483648 ==  %#X\n", 2147483648);
	printf("%%#X 2147483648 ==  %#X\n", (unsigned int)2147483648);
}
