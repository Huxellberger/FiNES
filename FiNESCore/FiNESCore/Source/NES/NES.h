#pragma once

#include "FiNESCore/Source/CPU/NESCPU.h"

class NES
{
public:

	NES();

	NESCPU CPU;
	bool Active;
};
