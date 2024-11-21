int ft_strlen(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
		index++;
	return index;
}


char *ft_strcat(char *dest, char *src)
{
	int len;

	len = ft_strlen(dest);
	while(*src != '\0')
	{
		dest[len] = *src;
		src++;
		len++;
	}
	return dest;	
}
