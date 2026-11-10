#include <io.h>
#include <fcntl.h>
#include "Autorization.hpp"

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);

	Start();

	return 0;
}

/*
	
	Авторизация: вход логина, пароля для каждого типа юзера свое меню
	Аккаунты: база данных пользователей + функции
	Продажи: продажа товаров, формирование чеков
	Склад: сами товары, редактирование
	Служебные: 
	без stl

*/