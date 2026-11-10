#include "Autorization.hpp"

void Start()
{
	while (true)
	{
		if (Login())
		{

		}
		else
		{

		}
	}
}

bool Login()
{
	std::wstring login, password;
	while (true)
	{
		system("cls");

		std::wcout << L"\n\n\n\t\t\tДобро пожаловать!";
		std::wcout << L"\n\n\n\t\t\t Сырный Мастер";
		std::wcout << L"\n\nВведите логин или \"exit\"";

		GetLine(login);

		if (login == L"exit" || login == L"Exit")
			return false;

		std::wcout << L"Введите пароль";
		GetLine(password);

		for (size_t i = 0; i < userSize; i++)
		{
			if (login == loginArr[i] && password == passwordArr[i]) 
			{
				std::wcout << L"Добро пожаловать " << loginArr[i] << L"\n";
				std::wcout << L"Ваш уровень доступа " << statusArr[i] << L"\n";
				Sleep(1500);
				currentId = userIdArr[i];
				currentStatus = statusArr[i];
				return true;
			}
		}

		std::wcout << "Неверный логи или пароль. Повторите попытку\n\n";
		Sleep(1500);
	}

	return false;
}
