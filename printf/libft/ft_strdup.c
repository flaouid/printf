#include "libft.h"

char		*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (dest != '\0')
	{
		return (dest);
	}
	return (0);
}
