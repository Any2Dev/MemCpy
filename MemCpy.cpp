
#include "stdafx.h"
#include <memory.h>

//-------------------------------------------------------------------------------------------------
void MemCpyInt()
{
	int destSize = 4;
	int* dest = new int[destSize];

	for ( int i = 0; i < destSize; i++ )
	{
		dest[i] = i;
	}


	int srcSize = 4;
	int* src = new int[srcSize];

	for ( int i = 0; i < srcSize; i++ )
	{
		src[i] = i + 10;
	}

	memcpy_s( dest, destSize, src, destSize );

	int yblack = 0;
}

//-------------------------------------------------------------------------------------------------
void MemCpyChar()
{
	const int destSize = 9;
	char dest[destSize] = "destdest";

	const int srcSize = 4;
	char src[srcSize] = "src";

	memcpy_s( dest, destSize, src, destSize );

	int yblack = 0;
}

//-------------------------------------------------------------------------------------------------
int _tmain(int argc, _TCHAR* argv[])
{
	MemCpyInt();

	MemCpyChar();

	return 0;
}

//-------------------------------------------------------------------------------------------------