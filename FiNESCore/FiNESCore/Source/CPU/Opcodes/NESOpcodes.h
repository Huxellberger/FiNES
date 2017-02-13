#pragma once

enum class NESOpcodes : uint8
{
	// BRK
	BRK = 0x00,

	// NOP
	NOP = 0xEA,

	// PHP
	PHP = 0x08,

	// PLP
	PLP = 0x28,

	/*****************************************
	* LOAD/STORE OPERATIONS					 *
	*****************************************/

	// LDA
	LDA_Immediate = 0xA9,
	LDA_Direct = 0xA5,
	LDA_Direct_X = 0xB5,
	LDA_Absolute = 0xAD,
	LDA_Absolute_X = 0xBD,
	LDA_Absolue_Y = 0xB9,
	LDA_Indirect_X = 0xA1,
	LDA_Indirect_Y = 0xB1,

	// LDX
	LDX_Immediate = 0xA2,
	LDX_Direct = 0xA6,
	LDX_Direct_Y = 0xB6,
	LDX_Absolute = 0xAE,
	LDX_Absolute_Y = 0xBE,

	// LDY
	LDY_Immediate = 0xA0,
	LDY_Direct = 0xA4,
	LDY_Direct_X = 0xB4,
	LDY_Absolute = 0xAC,
	LDY_Absolute_X = 0xBC,

	// STA
	STA_Direct = 0x85,
	STA_Direct_X = 0x95,
	STA_Absolute = 0x8D,
	STA_Absolute_X = 0x9D,
	STA_Absolute_Y = 0x99,
	STA_Indirect_X = 0x81,
	STA_Indirect_Y = 0x91,

	// STX
	STX_Direct = 0x86,
	STX_Direct_Y = 0x96,
	STX_Absolute = 0x8E,

	// STY
	STY_Direct = 0x84,
	STY_Direct_X = 0x94,
	STY_Absolute = 0x8C,

	/*****************************************
	* TRANSFER OPERATIONS					 *
	*****************************************/

	// TAX
	TAX = 0xAA,

	// TAY
	TAY = 0xA8,

	// TSX
	TSX = 0xBA,

	// TXA 
	TXA = 0x8A,
	
	// TXS
	TXS = 0x9A,

	// TYA
	TYA = 0x98,

	/*****************************************
	* FLAG OPERATIONS						 *
	*****************************************/

	// CLC
	CLC = 0x18,

	// CLD
	CLD = 0xD8,

	// CLI
	CLI = 0x58,

	// CLV
	CLV = 0xB8,

	/*****************************************
	* ALU OPERATIONS						 *
	*****************************************/

	// ADC
	ADC_Immediate = 0x69,
	ADC_Direct = 0x65,
	ADC_Direct_X = 0x75,
	ADC_Absolute = 0x6D,
	ADC_Absolute_X = 0x7D,
	ADC_Absolute_Y = 0x79,
	ADC_Indirect_X = 0x61,
	ADC_Indirect_Y = 0x71,

	// SBC
	SBC_Immediate = 0xE9,
	SBC_Direct = 0xE5,
	SBC_Direct_X = 0xF5,
	SBC_Absolute = 0xED,
	SBC_Absolute_X = 0xFD,
	SBC_Absolute_Y = 0xF9,
	SBC_Indirect_X = 0xE1,
	SBC_Indirect_Y = 0xF1,

	// INC
	INC_Direct = 0xE6,
	INC_Direct_X = 0xF6,
	INC_Absolute = 0xEE,
	INC_Absolute_X = 0xFE,

	// INX
	INX = 0xE8,

	// INY
	INY = 0xC8,

	// DEC
	DEC_Direct = 0xC6,
	DEC_Direct_X = 0xD6,
	DEC_Absolute = 0xCE,
	DEC_Absolute_X = 0xDE,

	// DEX
	DEX = 0xCA,

	// DEY
	DEY = 0x88,

	// AND
	AND_Immediate = 0x29,
	AND_Direct = 0x25,
	AND_Direct_X = 0x35,
	AND_Absolute = 0x2D,
	AND_Absolute_X = 0x3D,
	AND_Absolute_Y = 0x39,
	AND_Indirect_X = 0x21,
	AND_Indirect_Y = 0x31,

	// ORA
	ORA_Immediate = 0x09,
	ORA_Direct = 0x05,
	ORA_Direct_X = 0x15,
	ORA_Absolute = 0x0D,
	ORA_Absolute_X = 0x1D,
	ORA_Absolute_Y = 0x19,
	ORA_Indirect_X = 0x01,
	ORA_Indirect_Y = 0x11,

	// ASL 
	ASL_Acc = 0x16,
	ASL_Direct = 0x06,
	ASL_Direct_X = 0x16,
	ASL_Absolute = 0x0E,
	ASL_Absolute_X = 0x1E,

	/*****************************************
	* CONDITIONAL OPERATIONS				 *
	*****************************************/

	// CMP
	CMP_Immediate = 0xC9,
	CMP_Direct = 0xC5,
	CMP_Direct_X = 0xD5,
	CMP_Absolute = 0xCD,
	CMP_Absolute_X = 0xDD,
	CMP_Absolute_Y = 0xD9,
	CMP_Indirect_X = 0xC1,
	CMP_Indirect_Y = 0xD1,

	// CPX
	CPX_Immediate = 0xE0,
	CPX_Direct = 0xE4,
	CPX_Absolute = 0xEC,

	// CPY
	CPY_Immediate = 0xC0,
	CPY_Direct = 0xC4,
	CPY_Absolute = 0xCC,

	// JMP
	JMP_Absolute = 0xAD,
	JMP_Indirect = 0x4C,

	// BEQ
	BEQ = 0xF0,

	// BNE
	BNE = 0xD0

	// BPL

	// BMI
};
