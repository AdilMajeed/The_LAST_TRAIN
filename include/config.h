#ifndef CONFIG_H//it checks that CONFIG_H is not defined, and if it is not defined, 
//it defines CONFIG_H and includes the contents of the file.
// This prevents multiple inclusions of the same header file, which can cause compilation errors.
#define CONFIG_H




//we are using the constants bcz these are the fixed values that are used throughout the game and do not change during the execution of the program.






// declare the constants used in the game, such as the number of floors,
// rooms per floor and total rooms
const int total_floors=5;//bcz we have 5 floors in the building, so we set the total_floors constant to 5.
const int rooms_per_floor=4;//bcz we have 4 rooms on each floor, so we set the rooms_per_floor constant to 4.
const int total_rooms=20;//bcz we have 20 rooms in total, so we set the total_rooms constant to 20.



// declare the constants used in the game, such as the minimum and maximum energy, time, score, and initial values for energy, time, and score

const int min_energy=0;//bcz the minimum energy a player can have is 0, so we set the min_energy constant to 0.

const int max_energy=100;//bcz the maximum energy a player can have is 100, so we set the max_energy constant to 100.

const int max_time=50;//bcz the maximum time a player can have is 50, so we set the max_time constant to 50.

const int initial_energy=100;//bcz the initial energy a player has is 100, so we set the initial_energy constant to 100.

const int initial_time=50;//bcz the initial time a player has is 50, so we set the initial_time constant to 50.

const int initial_score=0;//bcz the initial score a player has is 0, so we set the initial_score constant to 0.

const int max_score=520;//bcz the maximum score a player can achieve is 520, so we set the max_score constant to 520.

// This section defines the sizes and limits of arrays and text storage used in your game.
const int max_inventory_capacity=10;//player's inventory can hold a maximum of 10 items.

const int max_entities_per_room=5;//each room can hold a maximum of 5 entities.

const int max_name_len=32;//the maximum length of a player's name is 32 characters.

const int max_line_len=256;//the maximum length of a line in the game is 256 characters.

const int max_log_line_len=128;//the maximum length of a line in the log is 128 characters.

const int initial_log_capacity=8;//the initial capacity of the log is 8 lines.

const int initial_map_line_capacity=8;//Defines an initial capacity of 8 map lines.
                                    //This could be used when dynamically storing map information.

// Special Rooms 
const int lift1_low_floor=1;//Specifies that one endpoint of Lift 1 is on floor 1.

const int lift1_high_floor=2;//Specifies that the other endpoint of Lift 1 is on floor 2.
//Together: Lift 1 connects floor 1 and floor 2.

const int lift2_room=4;//Specifies the room where Lift 2 is located.

const int train_floor=5;//Specifies the floor where the train is located.

const int train_room=2;//Specifies the room where the train is located.

//  Puzzle Settings 
const char cabinet_code[]="427";//The cabinet puzzle's code is 427.
const int emergency_trips_per_card=3;//The number of emergency trips a player can take per card.

//  Relative File Paths
// Instead of writing file paths throughout our program, we store them here once.
const char building_file[]="./data/building.txt";// this file contains the layout of the building, including floors, rooms, and connections.
const char initial_state_file[]="./data/initial-state.txt";// This file contain the initial conditions of the game, such as player position, resources, or initial game information.
const char savegame_file[]="./data/savegame.txt";// This file contains the saved game state.
const char summary_file[]="./data/game_summary.txt";// This file contains a summary of the game.

//costs for different actions in the game, such as moving, inspecting, picking up items, and using items. 
//costs are negative values, indicating that these actions consume resources (energy and time) when performed.


const int cost_move_ordinary_energy=-2;
const int cost_move_ordinary_time=-1;

const int cost_move_window_energy=-3;
const int cost_move_window_time=-2;

const int cost_move_lift_energy=-4;
const int cost_move_lift_time=-3;

const int cost_inspect_energy=-1;
const int cost_inspect_time=-1;

const int cost_item_pickup_energy=-1;
const int cost_item_pickup_time=-1;

const int cost_item_use_energy=-1;
const int cost_item_use_time=-1;

// bonuses for collecting certain items in the game, such as energy packs, emergency toolkits, and observation tokens.
const int bonus_energy_pack=25;
const int bonus_emergency_toolkit=15;
const int bonus_observation_token=15;

// scores for completing certain objectives in the game, such as collecting keys, finding clues, unlocking cabinets, rescuing passengers, securing cats, installing fuses, passing lifts, preparing trains, and achieving mission victory.
const int score_key_collect=10;
const int score_clue_found=10;
const int score_cabinet_unlock=30;
const int score_train_key=10;
const int score_rescue_passenger=100;
const int score_secure_cat=100;
const int score_install_fuse=20;
const int score_lift_pass=20;
const int score_prepare_train=100;
const int score_mission_victory=100;

#endif // CONFIG_H
