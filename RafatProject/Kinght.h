#include <stdio.h>
#include "Piece.h"
#include "Field.h"
class Knight : public Piece
{
public:
	void move(Field target);
};