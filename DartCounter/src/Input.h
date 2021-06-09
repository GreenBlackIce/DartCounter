#pragma once
#include <iostream>
#include <limits>
#include <string>


namespace Dart 
{
	class Input
	{
	public:
		//reading 1 Int at a time
		const int readInt() const;
		//reading 3 Int at a time
	private:
		const int read3Int() const;
		const std::string readString() const;
	};
}