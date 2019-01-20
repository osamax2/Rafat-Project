#include <stdio.h>
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream> 
#include "Field.h"
#include <list>
#include <vector>
#include <regex>

class Chessboard 
{
public:
	std::list <Field> fields;
	Field findKnight();
	Field findKing();
	
	void initialize(std::ifstream& file);

	std::stringstream draw();

private :
	
};