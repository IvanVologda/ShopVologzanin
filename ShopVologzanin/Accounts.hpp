#ifndef _ACCOUNTS_HPP_
#define _ACCOUNTS_HPP_

#include "ServiceFunction.hpp"

extern size_t userSize;
extern size_t currentId;
extern std::wstring currentStatus;

extern std::wstring* loginArr;
extern std::wstring* passwordArr;
extern std::wstring* statusArr;
extern size_t* userIdArr;

extern size_t maxLogin;
extern size_t minLogin;
extern size_t maxPass;
extern size_t minPass;

extern std::unordered_set<wchar_t> loginSymbols;
extern std::unordered_set<wchar_t> passSymbols;

void ChangeAccounts();
void CreateNewAccount();
#endif // !_ACCOUNTS_HPP_
