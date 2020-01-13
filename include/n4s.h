/*
** EPITECH PROJECT, 2018
** n4s
** File description:
** n4s
*/

#ifndef N4S_H_
#define N4S_H_

#define start "start_simulation"
#define stop "stop_simulation"
#define forward "car_forward:"
#define back "car_backwards:"
#define wheels "wheels_dir:"
#define info "get_info_lidar"
#define g_speed "get_current_speed"
#define g_wheels "get_current_wheels"
#define cycle "cycle_wait:"
#define max_speed "get_car_speed_max"
#define min_speed "get_car_speed_min"
#define time "get_info_simtime"

void free_arr(char **arr);
char **my_str_to_word_array(char const *str);

#endif /* N4S_H_ */
