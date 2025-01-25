#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

///////////////////
// TOKENS
///////////////////

typedef enum {                                             // enum for tokens
	ret,                                                   // return
	int_lit,                                               // int
	semi                                                   // ;
} token_type;

///////////////////
// TOKEN STRUCTURE
///////////////////

typedef struct {                                           // token structure
	token_type type;                                       // attribute for token type
	std::string val;                                       // attribute for value of token
} token;

token new_token(token_type type, std::string val);         // function to create a token 

///////////////////
// TOKENIZATION
///////////////////

std::vector<token> tokenize_ln(std::string line);          // func to turn line into tokens
