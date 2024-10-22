#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void error(char* msg, int code){                                                         // send errors and exit
	printf("\033[1;31m[ERROR] %s\033[0m\n", msg);                                        // print red error text
	exit(code);                                                                          // exit with a code
}

int main(int argc, char* argv[]){
	FILE *file;                                                                          // file variable
	char contents[100][100];                                                             // variable for contents of file
	if(argc < 2){                                                                        // if there aren't enough arguments
		error("missing input file", 1);                                                  // missing file argument
	}
	if(!fopen(argv[1], "r")){                                                            // if opening file fails
		error("cannot open file", 2);                                                    // can't open file error
	}
	file = fopen(argv[1], "r");                                                          // open the file
	char line[100];                                                                      // variable for contents of current line
	for(int i = 0; i < 100; i++){                                                        // iterate through 100 lines of
		fgets(line, 100, file);                                                          // get contents of current line
		if(line == EOF){                                                                 // if current line is end of file
			break;                                                                       // stop looping
		}
		strcpy(contents[i], line);                                                       // add line to file contents array
	}
	printf("%s", contents[1]);
	fclose(file);                                                                        // close the file
	return 0;                                                                            // SUCCESS!
}
