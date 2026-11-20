#ifndef CONFIG_H
#define CONFIG_H

// Resource Constraints
const int MAX_ENERGY = 100;
const int MAX_TIME = 100;

// File Paths
const char* const FILE_MAP = "./data/building.txt";
const char* const FILE_INIT = "./data/initial-state.txt";
const char* const FILE_SAVE = "./out/savegame.txt";
const char* const FILE_SUMMARY = "./out/game_summary.txt";

// Scoring Metrics
const int SCORE_MASTER_KEY = 10;
const int SCORE_CLUE_DIGIT = 10;
const int SCORE_CABINET = 30;
const int SCORE_TRAIN_KEY = 10;
const int SCORE_RESCUE_PASSENGER = 100;
const int SCORE_SECURE_CAT = 100;
const int SCORE_FUSE_INSTALL = 20;
const int SCORE_LIFT_PASS = 20;
const int SCORE_TRAIN_PREPARED = 100;
const int SCORE_VICTORY = 100;

#endif
