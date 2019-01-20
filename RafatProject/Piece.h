#include <stdio.h>
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>
#include "Color.h"


class Piece
{
public:
   virtual std::stringstream draw();
protected:
	Color color;
};