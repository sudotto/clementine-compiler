#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

typedef enum token_type {                                            // enum for tokens
	ret,                                                             // return
	int_lit,                                                         // int
	semi                                                             // ;
} token_type;

typedef struct token {                                               // token structure
	token_type type;                                                 // attribute for token type
	std::string value;                                               // attribute for value of token
} token;

void error(std::string msg, int code){                               // function to print an error
	std::cout << "\033[1;31m[ERROR] " << msg << "\033[0m\n";         // print red error text
	exit(code);                                                      // exit with error code
}

std::vector<std::string> read_file(std::string filename){
	std::vector<std::string> contents;
	std::ifstream file;                                              // 
	file.open(filename);
	if(!file.is_open()){
		error("couldn't open file", 2);
	}
	file.close();
	return contents;
}

int main(int argc, char* argv[]){                                    // main function
	if(argc < 2){                                                    // if less than 2 arguments
		error("input file missing", 1);                              // return error
	}
	std::vector<std::string> file_contents = read_file(argv[1]); 
	return 0;
}
