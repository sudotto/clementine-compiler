#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

#include "alert.h"

///////////////////
// INFO MESSAGE
///////////////////

void info(std::string msg, int code){                                         // function to print an info
	std::cout << "\033[1;34m[INFO] " << msg << "\033[0m" << std::endl;        // print blue info text
	exit(code);                                                                // exit with info code
}

///////////////////
// WARN MESSAGE
///////////////////

void warn(std::string msg, int code){                                         // function to print an warn
	std::cout << "\033[1;33m[WARN] " << msg << "\033[0m" << std::endl;        // print yellow warn text
	exit(code);                                                                // exit with warn code
}

///////////////////
// ERROR MESSAGE
///////////////////

void error(std::string msg, int code){                                         // function to print an error
	std::cout << "\033[1;31m[ERROR] " << msg << "\033[0m" << std::endl;        // print red error text
	exit(code);                                                                // exit with error code
}

