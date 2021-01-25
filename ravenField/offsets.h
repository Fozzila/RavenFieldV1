// Created with ReClass.NET 1.2 by KN4CK3R

class maincc
{
public:
	class baseClass* basePtr; //0x0000
	char pad_0008[56]; //0x0008
}; //Size: 0x0040

class baseClass
{
public:
	char pad_0000[296]; //0x0000
	class pointerclass1* pointer1; //0x0128
	char pad_0130[24]; //0x0130
}; //Size: 0x0148

class pointerclass1
{
public:
	char pad_0000[128]; //0x0000
	class pointerclass2* pointer2; //0x0080
	char pad_0088[24]; //0x0088
}; //Size: 0x00A0

class pointerclass2
{
public:
	char pad_0000[352]; //0x0000
	class pointerclass3* pointer3; //0x0160
	char pad_0168[160]; //0x0168
}; //Size: 0x0208

class pointerclass3
{
public:
	char pad_0000[16]; //0x0000
	class pointerclass4* pointer4; //0x0010
	char pad_0018[48]; //0x0018
}; //Size: 0x0048

class pointerclass4
{
public:
	char pad_0000[40]; //0x0000
	class pointerclass5* pointer5; //0x0028
	char pad_0030[8375]; //0x0030
}; //Size: 0x20E7

class pointerclass5
{
public:
	char pad_0000[24]; //0x0000
	class playerclass* playerpointer; //0x0018
	char pad_0020[40]; //0x0020
}; //Size: 0x0048

class playerclass
{
public:
	char pad_0000[264]; //0x0000
	float HP; //0x0108
	char pad_010C[1020]; //0x010C
}; //Size: 0x0508