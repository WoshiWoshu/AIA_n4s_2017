/*
** EPITECH PROJECT, 2018
** free_arr.C
** File description:
** free
*/

#include "n4s.h"
#include <stdlib.h>

void free_arr(char **arr)
{
	if (arr == NULL)
		return;
	for (int i = 0; arr[i]; i++) {
		free(arr[i]);
	}
	free(arr);
}
