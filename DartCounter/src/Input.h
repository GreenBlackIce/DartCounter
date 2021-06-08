#pragma once
#include <iostream>
#include <limits>


namespace Dart 
{
	class Input
	{
	public:
		//reading 1 Int at a time
		const int readInt() const;
		//reading 3 Int at a time
		const int read3Int() const;
	};
}