# AIA_n4s_2017
First year project in C in which the goal is to create an autonomous program/car capable of driving on a track without hitting the walls or driving in the wrong direction.
The n4s binary enables communication with V-REP (via a socket in C) and controls each of the elements that we have put in the scene.
Therefore it gives off its commands by writing on the standard output and receive the responses by reading them on the standard input, so that it controls the physics of the car.

PREREQUISITES : V-REP simulator needs to be installed.

COMMANDS : START_SIMULATION, STOP_SIMULATION, CAR_FORWARD:float, CAR_BACKWARDS:float, WHEELS_DIR:float, GET_INFO_LIDAR, GET_CURRENT_SPEED, GET_CURRENT_WHEELS, CYCLE_WAIT:int, GET_CAR_SPEED_MAX, GET_CAR_SPEED_MIN, GET_INFO_SIMTIME.

RESPONSES : (1):VALUE_ID:STATUS:CODE_STR:ADDITIONNAL_INFO, (2):VALUE_ID:STATUS:CODE_STR[:float]*32:ADDITIONNAL_INFO, (3):VALUE_ID:STATUS:CODE_STR:float:ADDITIONNAL_INFO, (4):VALUE_ID:STATUS:CODE_STR:[long,long]:ADDITIONNAL_INFO.

NOTE : The program can be tested in standalone usage.

EXEMPLE : ./n4s

> 2:OK:Simulation running:No further info

> stop_simulation

> 10:OK:Simulation was correctly ended:No further info

> Last state registered: 10:OK:Simulation was correctly ended


