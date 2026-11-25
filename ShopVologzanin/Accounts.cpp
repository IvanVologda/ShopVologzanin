#include "Accounts.hpp"

size_t userSize = 3;
size_t currentId = 0;
std::wstring currentStatus;

std::wstring* loginArr = new std::wstring[userSize]{ L"saintEggplant", L"saintIoann", L"saintAnastsiya" };
std::wstring* passwordArr = new std::wstring[userSize]{ L"saintEggplant", L"saintIoann", L"saintAnastsiya" };
std::wstring* statusArr = new std::wstring[userSize]{ L"SuperAdmin", L"Admin", L"User" };
size_t* userIdArr = new size_t[userSize]{ 0, 1, 2 };

size_t maxLogin = 12;
size_t minLogin = 5;
size_t maxPass = 14;
size_t minPass = 8;

std::unordered_set<wchar_t> loginSymbols;
std::unordered_set<wchar_t> passSymbols;

void ChangeAccounts()
{
	std::wstring choose;

	while (true)
	{
		system("cls");

		std::wcout << L"\n\n\t\t\t\tРедактировать учетные записи \"Сырный мастер\"\n\n";
		std::wcout << L"1 - Создать новый аккаунт\n";
		std::wcout << L"2 - Показать всех сотрудников\n";
		std::wcout << L"3 - Изменить пароль\n";
		std::wcout << L"4 - Изменить уровень доступа\n";
		std::wcout << L"5 - Редактирвоать премии и продажи сотрудников\n";
		std::wcout << L"6 - Удалить аккаунт\n";
		std::wcout << L"0 - Выход\n\n";
		std::wcout << L"Ввод: ";

		GetLine(choose);

		if (choose == L"1")
		{

		}
		else if (choose == L"2")
		{

		}
		else if (choose == L"3")
		{

		}
		else if (choose == L"4")
		{

		}
		else if (choose == L"5")
		{

		}
		else if (choose == L"6")
		{

		}
		else if (choose == L"0")
		{
			std::wcout << L"Выход из редактора склада\n";
			Sleep(15000);
			break;
		}
		else
		{
			Err();
		}
	}
}

void CreateNewAccount()
{
	std::wstring chooseLogin, choosePass, chooseStatus, choose;

}
