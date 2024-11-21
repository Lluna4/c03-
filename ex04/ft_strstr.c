#include <stdio.h>

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return index;
}

int ft_strncmp(char *s1, char *s2, int size)
{
	int op;

	op = 0;
	while (*s1 != '\0' && *s2 != '\0' && size > 0)
	{
		op = (unsigned char)(*s1) - (unsigned char)(*s2);
		if (op != 0)
			return op;
		s1++;
		s2++;
		size--;
	}
	op = (unsigned char)(*s1) - (unsigned char)(*s2);
	return op;
}

char *ft_strstr(char *str, char *to_find)
{
	int cmp_len;

	cmp_len = ft_strlen(to_find);
	if (*to_find == '\0')
		return str;
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, cmp_len - 1) == 0)
			return str;
		str++;
	}
	return NULL;
}

/*
int main()
{
	char a[] = "asasholqaajhsba";
	char b[] = "hol";

	printf("%s\n", ft_strstr(a, b));
}*/
