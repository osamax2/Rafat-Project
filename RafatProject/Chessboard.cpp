#include "Chessboard.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <regex>

using namespace std;



std::vector<std::string> split(const string& input, const string& regex) {
	// passing -1 as the submatch index parameter performs splitting
	std::regex re(regex);
	std::sregex_token_iterator
		first{ input.begin(), input.end(), re, -1 },
		last;
	return { first, last };
};

void Chessboard::initialize(std::ifstream& file)
{
	std::string line;
	vector<string> game = vector<string>();
	while (getline(file, line))
	{
		game = split(line, ",");
	}
	for (std::vector<string>::const_iterator i = game.begin(); i != game.end(); ++i)
	{
		string str = *i;
		if(str[0]=='s')
		{
		}
		if(str[0] == 'b')
		{
		}
		if (str[0] == 'k')
		{
		}
		if (str[0] == 'S')
		{
		}
		if (str[0] == 'B')
		{
		}
		if (str[0] == 'K')
		{
		}
	}
}



