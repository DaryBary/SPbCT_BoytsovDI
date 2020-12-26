﻿#define _WIN32_WINNT 0x0500
#define UNICODE
#ifdef UNICODE
#define _UNICODE
#endif
#include <windows.h>
#include <stdio.h>
#include <sddl.h>
void main(void) {
	DWORD UserName;
	int MaxUserNameLength = 256;
	SID Sid[1024];
	PSID pSid;
	LPTSTR StringSid;
	DWORD SidSize = 1024;
	SID_NAME_USE SidType;
	LPTSTR DomainName = NULL;
	DWORD DomainNameSize = 16; // длина имени домена
	HANDLE hHeap;
	hHeap = GetProcessHeap();
	pSid = &Sid[0];
	GetUserNameW(NULL, &UserName); // получаем имя пользователя
	DomainName = (LPTSTR)HeapAlloc(hHeap, 0, DomainNameSize * sizeof(TCHAR));
	LookupAccountNameW(NULL, (LPCWSTR)UserName, pSid, &SidSize, DomainName, &DomainNameSize, &SidType);
	if (!ConvertSidToStringSid(pSid, &StringSid)) /* память для строки выделяет сама функция */
		printf("Convert SID to string SID failed.");
	wprintf(L"StringSid %s\n", StringSid);
}