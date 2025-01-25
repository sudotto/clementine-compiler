#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

#include "file.h"
#include "token.h"
#include "alert.h"

///////////////////
// MAIN
///////////////////

int main(int argc, char* argv[]){                                              // main function
	if(argc < 2){                                                              // if less than 2 arguments
		error("input file missing", 1);                                        // return error
	}
	std::vector<std::string> contents = read_file(argv[1]);                    // read file
	for(int i = 0; i < contents.size(); i++){                                  // iterate through contents
		std::cout << contents[i] << std::endl;                                 // print each line
	}
	return 0;                                                                  // success!
}
