#pragma once

#include <cstdint>

class NESCPU
{
public:

	NESCPU();

protected:

	int8_t Reg_Acc;
	int8_t Reg_X;
	int8_t Reg_Y;

	uint8_t Reg_Stack;
	uint8_t Reg_PC;

	bool Reg_Status[7];
};
