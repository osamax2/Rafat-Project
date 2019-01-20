#include <stdio.h>
#include <iostream>
#include "Node.h"

class Field : public Node
{
private:
	unsigned short row;
	char column;

public:
	std::stringstream draw();
};