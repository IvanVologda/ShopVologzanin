#include "Suplier.hpp"

std::wstring* listProduct = nullptr;
double* priceProduct = nullptr;
size_t* countProduct = nullptr;
size_t sizeList = 0;
double multiplier = 0.8;

bool isListCreated = false;

void CreateListsSuplier()
{
	if (!isListCreated)
	{
		const size_t staticSize = 10;
		sizeList = staticSize;

		std::wstring listProductStatic[staticSize]
		{
			L"Parmigiano Reggiano", L"Mozzarella",
			L"Cheddar", L"Feta", L"Brie",
			L"Camembert", L"Roquefort",
			L"Gouda", L"Emmental", L"Mascarpone"
		};

		size_t productCountStatic[staticSize]{ 360, 450, 600, 160, 225, 105, 30, 510, 330, 195 };
		double priceProductStatic[staticSize]{};

		for (size_t i = 0; i < staticSize; i++)
		{
			priceProductStatic[i] = priceArr[i] * multiplier;
		}

		listProduct = new std::wstring[sizeList];
		countProduct = new size_t[sizeList];
		priceProduct = new double[sizeList];

		FillArray(listProduct, listProductStatic, sizeList);
		FillArray(countProduct, productCountStatic, sizeList);
		FillArray(priceProduct, priceProductStatic, sizeList);

		isListCreated = true;
	}
}

void ShowListSuplier()
{
	system("cls");
	std::wcout << L"\n\n\t\t\t\tТовары поставщика магазина \"Сырный мастер\"\n\n";

	std::wcout << L"ID\t" << std::fixed << std::left << std::setw(40) << L" Название товаров\t\t"
		<< L"Кол-во\t" << L"Цена\n\n";

	for (size_t i = 0; i < sizeSt; i++)
	{
		std::wcout << i + 1 << L"\t" << std::fixed << std::left << std::setw(39) << listProduct[i]
			<< L"\t\t" << countProduct[i] << L"\t" << std::setprecision(2) << priceProduct[i] << L"\n";
	}

	std::wcout << L"\n\n";
	system("pause");
}
