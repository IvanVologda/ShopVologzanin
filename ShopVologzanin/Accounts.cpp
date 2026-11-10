#include "Accounts.hpp"

size_t userSize = 3;
size_t currentId = 0;
std::wstring currentStatus;

std::wstring* loginArr = new std::wstring[userSize]{ L"saintEggplant", L"saintIoann", L"saintAnastsiya" };
std::wstring* passwordArr = new std::wstring[userSize]{ L"saintEggplant", L"saintIoann", L"saintAnastsiya" };
std::wstring* statusArr = new std::wstring[userSize]{ L"SuperAdmin", L"Admin", L"User" };
size_t* userIdArr = new size_t[userSize]{ 0, 1, 2 };