#include "ServiceFunction.hpp"

void GetLine(std::wstring& str)
{
	std::getline(std::wcin, str, L'\n');
}
