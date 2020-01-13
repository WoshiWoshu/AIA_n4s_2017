/*
** EPITECH PROJECT, 2018
** ai
** File description:
** ia
*/

#include "n4s.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *get_response(void)
{
	char *str = NULL;
	size_t buffsize = 0;

	while (!getline(&str, &buffsize, stdin));
	return (str);
}

void check_clear_track (char *str)
{
	char **arr = my_str_to_word_array(str);

	for (int i = 0; arr[i] != NULL; i++) { 
		if (strcmp(arr[i], "Track Cleared") == 0) {
			dprintf(1, "%s\n", stop);
			exit(0);
		}
	}
}

void turn(int mid, float dir, int length)
{
	char *str;
	char **arr;

	while (mid < length) {		
		dprintf(1, "%s%f\n", forward, 0.1);
		str = get_response();
		check_clear_track(str);
		dprintf(1, "%s%f\n", wheels, dir);
		str = get_response();
		check_clear_track(str);
		dprintf(1, "%s\n", info);
		str = get_response();
		check_clear_track(str);
		arr = my_str_to_word_array(str);
		mid = atoi(arr[18]);
	}
	dprintf(1, "%s%d\n", wheels, 0);
	str = get_response();
	check_clear_track(str);
	free(str);
}

float check_wall(char *str, float go)
{
	char **arr = my_str_to_word_array(str);
	int left = atoi(arr[3]);
	int right = atoi(arr[34]);
	int middle = atoi(arr[18]);

	check_clear_track(str);
	if (middle < 900) {
		if (left > right)
			turn(middle, 0.6, 650);
		else
			turn(middle, -0.6, 650);
		go = 0.45;
		check_clear_track(str);
	}
	if (left < 300)
		turn(left, -0.2, 600);
	if (right < 300)
		turn(right, 0.2, 600);
	free_arr(arr);
	check_clear_track(str);
	return (go);
}

int main(void)
{
	char *str = NULL;
	float go = 0.5;

	dprintf(1, "%s\n", start);
	str = get_response();
	while (1) {
		dprintf(1, "%s\n", info);
		str = get_response();
		check_clear_track(str);
		go = check_wall(str, go);
		dprintf(1, "%s%f\n", forward, go);
		str = get_response();
		check_clear_track(str);
	}
	return (0);
}
