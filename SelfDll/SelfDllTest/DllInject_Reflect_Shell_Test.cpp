#include "generic.h"

using namespace std;

//测试成功（测试环境：win11、winxp）
void DllInject_Reflect_Shell_Test()
{
	HMODULE hDLL = LoadLibrary(L"SelfDll.dll");
	typedef int (*pDllInject_Reflect_Shell_x32)(DWORD pid, char* path);
	pDllInject_Reflect_Shell_x32 DllInject_Reflect_Shell_x32 = (pDllInject_Reflect_Shell_x32)GetProcAddress(hDLL, "DllInject_Reflect_Shell_x32");
	DllInject_Reflect_Shell_x32(2396, (char*)"D:\\E\\C_project\\vs2017_project\\test\\testDll.dll");
}















