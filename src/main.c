#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum token_type {
	_return,
	int_lit,
	semi
} token_type;

typedef struct token {
	token_type type;
	char* value;
} token;

token* tokenize(char ){
	for(int y = 0; y < 100; y++){
		
	}
}

void error(char* msg, int code){                                                         // send errors and exit
	printf("\033[1;31m[ERROR] %s\033[0m\n", msg);                                        // print red error text
	exit(code);                                                                          // exit with a code
}

int main(int argc, char *argv[]){
	if(argc < 2){                                                                        // if there aren't enough arguments
		error("missing input file", 1);                                                  // missing file error
	}
	FILE *file;                                                                          // file variable
	if(!fopen(argv[1], "r")){                                                            // if opening file fails
		error("cannot open file", 2);                                                    // can't open file error
	}
	file = fopen(argv[1], "r");                                                          // open the file
	char *contents[100];                                                                 // variable for contents of file
	char *line = malloc(100);
	// TODO:
	// Redo contents to be an array of char* (char* being a line) then work on tokenize()
	//tokenize(contents);
	for(int i = 0; i < 100; i++){
		fgets(line, 100, file);
		contents[i] = malloc(100);
		strcpy(contents[i], line);
	}
	printf("%s", contents[3]);
	fclose(file);                                                                        // close the file
	return 0;                                                                            // SUCCESS!
}
