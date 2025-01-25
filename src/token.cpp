#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>

#include "token.h"
#include "alert.h"

///////////////////
// TOKEN STRUCTURE
///////////////////

token new_token(token_type type, std::string val){         // function to create a token 
	token tok;                                             // token instance
	tok.type = type;                                       // set type attribute
	tok.val = val;                                         // set value attribute
	return tok;                                            // return the token
}

///////////////////
// TRIM STRING
///////////////////

std::vector<std::string> split_str(std::string str){       // func to turn st into tokens
	return list;                                           // return list of words
}

///////////////////
// TOKENIZATION
///////////////////

std::vector<token> tokenize_ln(std::string line){          // func to turn line into tokens
	std::vector<token> tokenized;                          // vector of tokens

	std::vector<std::string> split;                        // list of words
	std::string word;                                      // current word storage
	for(int i = 0; i < line.length(); i++){                // iterate through string
		if(line[i] == ' '){                                // if space...
			split.push_back(word);                         // push the stored word
			word = "";                                     // reset for next word
		} else {                                           // if anything else
			if()
			word += line[i];                               // push it to the word
		}
	}

	for(int i = 0; i < split.length(); i++){
		switch(split[i]){
			case "ret":
				break;
			
		}
	}
	return tokenized;
}
