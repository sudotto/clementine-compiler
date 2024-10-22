#include <iostream>
#include <stdlib.h>

void error(std::string msg, int code){
	std::cout << "\033[1;31m[ERROR] %s\033[0m" << std::endln;
	exit(code);
}

int main(int argc, char* argv[]){
	
}
