#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

///////////////////
// ERROR MESSAGES
///////////////////

void info(std::string msg, int code);                                         // function to print an error

void warn(std::string msg, int code);                                         // function to print an error

void error(std::string msg, int code);                                         // function to print an error
