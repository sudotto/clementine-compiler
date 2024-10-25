#include <iostream>
#include <stdlib.h>

typedef enum token_type {                                                                          // enum for tokens
	ret,
	int_lit,
	semi
} token_type;

typedef struct token {                                                                             // token structure
	token_type type;                                                                               // attribute for token type
	std::string value;                                                                             // attribute for value of token
} token;

void error(std::string msg, int code){                                                             // function to print an error
	std::cout << "\033[1;31m[ERROR]" << msg << "\033[0m\n";                                        // print red error text
	exit(code);                                                                                    // exit with error code
}

int main(int argv, char* argv[]){
	
}
