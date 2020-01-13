/*
** EPITECH PROJECT, 2018
** my_str_to_word_array
** File description:
** splits a string into words
*/

//#include "n4s.h"
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i])
		i = i + 1;
	return (i);
}

int get_conditions(int i, char const *str)
{
	if (str[i] == ':' || str[i] == '\n' || str[i] == '\0')
		return (0);
	else
		return (1);
}

int get_number_of_words(char const *str)
{
	int j = 0;
	int i = 0;
	int k = 0;

	while (i < my_strlen(str)) {
		k = 0;
		while (get_conditions(i, str) == 1) {
			i = i + 1;
			k = k + 1;
		}
		if (k > 0) {
			j = j + 1;
		}
		i = i + 1;
	}
	return (j);
}

char **my_put_char_in_array(char **arr, char const *str)
{
	int i = 0;
	int k = 0;
	int q = 0;
	int j = get_number_of_words(str);

	while (str[i] && j > 0) {
		k = 0;
		while (get_conditions(i, str) == 0)
			i = i + 1;
		while (get_conditions(i, str) == 1) {
			arr[q][k] = str[i];
			k = k + 1;
			i = i + 1;
		}
		arr[q][k] = '\0';
		q = q + 1;
		j = j - 1;
	}	arr[q] = 0;
	return (arr);
}

char **my_str_to_word_array(char const *str)
{
	char** arr;
	int p = get_number_of_words(str);
	int q = 0;
	int k = 0;
	int i = 0;

	arr = malloc(sizeof(char*) * (p + 1));
	while (i < my_strlen(str)) {
		k = 0;
		while (get_conditions(i, str) == 1) {
			i = i + 1;
			k = k + 1;
		}
		if (k > 0) {
			arr[q] = malloc(sizeof(char) * (k + 1));
			q = q + 1;
		}
		i = i + 1;
	}
	return (my_put_char_in_array(arr, str));
}
