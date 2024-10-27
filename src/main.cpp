#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

typedef enum token_type {                                                      // enum for tokens
	ret,                                                                       // return
	int_lit,                                                                   // int
	semi                                                                       // ;
} token_type;

typedef struct token {                                                         // token structure
	token_type type;                                                           // attribute for token type
	std::string value;                                                         // attribute for value of token
} token;

void error(std::string msg, int code){                                         // function to print an error
	std::cout << "\033[1;31m[ERROR] " << msg << "\033[0m" << std::endl;        // print red error text
	exit(code);                                                                // exit with error code
}

std::vector<std::string> read_file(std::string filename){                      // read file func
	std::vector<std::string> contents;                                         // contents string vector
	std::ifstream file;                                                        // file variable
	file.open(filename);                                                       // open provided file
	if(!file.is_open()){                                                       // if didn't open
		error("couldn't open file", 2);                                        // couldn't open
	}
	std::string line;
	for(int i = 0; std::getline(file, line); i++){
		contents.push_back(line);
	}
	file.close();                                                              // close file
	return contents;                                                           // ret file contents
}

int main(int argc, char* argv[]){                                              // main function
	if(argc < 2){                                                              // if less than 2 arguments
		error("input file missing", 1);                                        // return error
	}
	std::vector<std::string> contents = read_file(argv[1]);               // read file
	for(int i = 0; i < contents.size(); i++){
		std::cout << contents[i] << std::endl;
	}
	return 0;                                                                  // success!
}
