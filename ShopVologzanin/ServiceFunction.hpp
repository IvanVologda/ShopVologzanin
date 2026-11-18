#ifndef _SERVICE_FUNCTION_HPP_
#define _SERVICE_FUNCTION_HPP_

#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

void GetLine(std::wstring& str);

bool IsNumber(const std::wstring& str);

__forceinline void Err()
{
	std::wcout << L"Некорректный ввод";
	Sleep(1500);
}

template <class ArrType>
void FillArray(ArrType* dynamicArray, ArrType* staticArr, size_t commonSize)
{
	for (size_t i = 0; i < commonSize; i++)
	{
		dynamicArray[i] = staticArr[i];
	}
}

#endif // !_SERVICE_FUNCTION_HPP_