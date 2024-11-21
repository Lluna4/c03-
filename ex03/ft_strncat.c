//#include <stdio.h>
//#include <stdlib.h>

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return index;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int len;

	len = ft_strlen(dest);
	while (*src != '\0' && nb > 0)
	{
		dest[len] = *src;
		src++;
		nb--;
		len++;
	}
	dest[len] = '\0';
	return dest;
}

/*
int main()
{
	char dest[40] = "hola, ";

	char src[] = " que tal";

	ft_strncat(dest, src, 5);

	printf("%s\n", dest);
}*/
