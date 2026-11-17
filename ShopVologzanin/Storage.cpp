#include "Storage.hpp"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool isStorageCreated = false;

void CreateStorage(int mode)
{
	if (mode == 0 && !isStorageCreated)
	{
		const size_t staticSize = 10;
		sizeSt = staticSize;

		size_t idArrStatic[staticSize]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		std::wstring nameArrStatic[staticSize]
		{
			L"Parmigiano Reggiano", L"Mozzarella",
			L"Cheddar", L"Feta", L"Brie",
			L"Camembert", L"Roquefort",
			L"Gouda", L"Emmental", L"Mascarpone"
		};

		size_t countArrStatic[staticSize]{ 120, 150, 200, 60, 75, 35, 10, 170, 110, 65 };
		double priceArrStatic[staticSize]{ 2400, 1000, 1200, 1100, 2500, 2300, 6000, 1100, 1900, 1400,  };

		idArr = new size_t[sizeSt];
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArr, idArrStatic, sizeSt);
		FillArray(nameArr, nameArrStatic,sizeSt);
		FillArray(countArr, countArrStatic, sizeSt);
		FillArray(priceArr, priceArrStatic, sizeSt);

		isStorageCreated = true;
	}
	else if (mode == 1)
	{

	}
	else
	{
		std::wcout << L"Склад уже создан\n\n";
		Sleep(1500);
	}
}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");
		std::wcout << "\n\n\t\t\tТовары \"Сырный мастер\"";

		std::wcout << L"ID\t" << std::left << std::setw(40) << L" Название товаров\t\t"
			<< L"Кол-во\t" << L"Цена\n\n";
	}
}
