#include "pch.h"

#include "FiNESCore/Source/CPU/NESCPU.h"

NESCPU::NESCPU()
	: Reg_Acc( 0 )
	, Reg_X( 0 )
	, Reg_Y( 0 )
	, Reg_Stack( 0 )
	, Reg_PC( 0 )
	, Reg_Status()
{
	for( int i = 0; i < sizeof(Reg_Status) / sizeof(bool); i++ )
	{
		Reg_Status[i] = false;
	}
}