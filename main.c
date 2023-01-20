/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:29:40 by samusanc          #+#    #+#             */
/*   Updated: 2023/01/15 12:29:45 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include"libft.h"
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void ft_verify(char *str, int verify)
{
	if (verify == 0)
		printf ("error en %s\n", str);
	else 
		printf ("función %s 	OK\n", str);
}

int main(void)
{
	char c;

	c = 'z';
	printf("%c", ft_toupper(c));
}

// int	main(void)
// {
// 	int verify;
// 	char str[50];
// 	char str2[50];
// 	char str1cpy[50];
// 	char str2cpy[50];

// //verificar la función strlcat

// 	verify = 1;
	
// 	strcpy(str, "hola como estás");
// 	strcpy(str2, "adeu a ti");
// 	strcpy(str1cpy, "hola como estás");
// 	strcpy(str2cpy, "adeu a ti");
// 	strlcat(str2, str, 0);

// 	if (ft_strlcat(str2cpy, str, 0) && strcmp(str2cpy, str2) == 0)
// 		verify = 1;
// 	else
// 	{
// 		printf("string strlcpy:%s\n", str2);
// 		printf("string ft_strlcpy:%s\n", str2cpy);
// 		verify = 0;
// 	}
// 	ft_verify("ft_strlcat", verify);

// //verificar la función strlcpy

// 	verify = 1;
	
// 	strcpy(str, "hola como estás");
// 	strcpy(str2, "adeu a ti");
// 	strcpy(str1cpy, "hola como estás");
// 	strcpy(str2cpy, "adeu a ti");
// 	strlcpy(str2, str, 0);
// 	ft_strlcpy(str2cpy, str, 0);
// 	if (strcmp(str2cpy, str2) == 0)
// 		verify = 1;
// 	else
// 	{
// 		printf("string strlcpy:%s\n", str2);
// 		printf("string ft_strlcpy:%s\n", str2cpy);
// 		verify = 0;
// 	}
// 	ft_verify("ft_strlcpy", verify);

// //verificar la función memmove

// 	verify = 1;
	
// 	strcpy(str, "hola como estás");
// 	strcpy(str2, "adeu a ti");
// 	strcpy(str1cpy, "hola como estás");
// 	strcpy(str2cpy, "adeu a ti");
// 	memmove(str2, str, 20);
// 	ft_memmove(str2cpy, str1cpy, 20);
// 	if (strcmp(str2cpy, str2) == 0)
// 		verify = 1;
// 	else
// 	{
// 		printf("string memcpy:%s\n", str2);
// 		printf("string ft_memcpy:%s\n", str2cpy);
// 		verify = 0;
// 	}
// 	ft_verify("ft_memmove", verify);

// //verificar la función memcpy

// 	verify = 1;
	
// 	strcpy(str, "hola como estás");
// 	strcpy(str2, "adeu a ti");
// 	strcpy(str1cpy, "hola como estás");
// 	strcpy(str2cpy, "adeu a ti");
// 	memcpy(str2, str, 20);
// 	ft_memcpy(str2cpy, str1cpy, 20);
// 	if (strcmp(str2cpy, str2) == 0)
// 		verify = 1;
// 	else
// 	{
// 		printf("string memcpy:%s\n", str2);
// 		printf("string ft_memcpy:%s\n", str2cpy);
// 		verify = 0;
// 	}
// 	ft_verify("ft_memcpy", verify);


// //verificar la función bzero

// 	verify = 1;
	
// 	strcpy(str, "hola como estás");
// 	if (bzero(str, 4) == ft_bzero(str, 4))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_bzero", verify);

// //verificar la función memset

// 	verify = 1;
	
// 	strcpy(str, "hola como estás");
// 	if (memset(str, 'a', 4) == ft_memset(str, 'a', 4))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_memset", verify);

// //verificar la función strnlen

// 	verify = 1;
// 	if (strlen("hola") == ft_strlen("hola"))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_strlen", verify);
	
// //verificar la función isprint

// 	verify = 1;
// 	if (isprint(0) == ft_isprint(0))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_isprint", verify);

// //verificar la función isascii

// 	verify = 1;
// 	if (isascii(128) == ft_isascii(128))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_isascii", verify);

// //verificar la función atoi

// 	verify = 1;
// 	if (atoi("       -01213+123123") == ft_atoi("       -01213+123123"))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_atoi", verify);

// //verificar la función isalnum

// 	verify = 1;
// 	if (isalnum('1') == ft_isalnum('1'))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_isalnum", verify);

// //verificar la función isalpha

// 	verify = 1;
// 	if (isalpha('a') == ft_isalpha('a'))
// 		verify = 1;
// 	else
// 		verify = 0;
// 	ft_verify("ft_isalpha", verify);
// 	return (0);
// }