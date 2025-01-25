#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

#include "file.h"
#include "alert.h"

///////////////////
// FILE READ
///////////////////

std::vector<std::string> read_file(std::string filename){                      // read file func
	std::vector<std::string> contents;                                         // contents string vector
	std::ifstream file;                                                        // file variable
	file.open(filename);                                                       // open provided file
	if(!file.is_open()){                                                       // if didn't open
		error("couldn't open file", 2);                                        // couldn't open
	}
	std::string line;                                                          // line string
	for(int i = 0; std::getline(file, line); i++){                             // iterate until getline fails and inc i
		contents.push_back(line);                                              // append line to contents
	}
	file.close();                                                              // close file
	return contents;                                                           // ret file contents
}

