#include "printf.h"

/* Calcule le nombre de chiffre dans un nombre et retourne le nombre de chiffre. */

int	ft_nbrlen(int nbr)
{
	int i;

	i = 0;

	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
