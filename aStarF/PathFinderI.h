#pragma once

#include <iostream>
#include <string> // Naming files
#include <fstream> // Read and write txt files
#include <stdlib.h> // For rand function

void findPathI(char letterMap[][COL], int xStart, int yStart, int xGoal, int yGoal, double we, int mNum, int inNum, int heur, double we1);