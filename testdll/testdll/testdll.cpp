// testdll.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "windows.h"  
#include <iostream>

void main()
{  
	typedef int(*pMax)(int a, int b);   //定义个函数指针pMax指针指向int XX(int  a, int b)这样一个类型的函数
	typedef int(*pMin)(int a, int b);   
	typedef bool(*pcim2scada)(char* cimid, char** scada);  
	HINSTANCE HDLL;   
	HDLL=LoadLibrary(L"Dll.dll");//加载动态链接库MyDll.dll文件；   
	pMax Max=(pMax)GetProcAddress(HDLL,"Max");   
	pMin Min=(pMin)GetProcAddress(HDLL,"Min");   
	pcim2scada cim2scada=(pcim2scada)GetProcAddress(HDLL,"cim2scada");   
	int a = Max(5, 12);   

	char cimId[] = "bbbbbb";  
	char * scadaId = "";  
	bool b = cim2scada(cimId, &scadaId);  

	printf("Max结果为%d\n",a);   
	printf("cimId:%s, scadaId:%s\n", cimId, scadaId);  
	FreeLibrary(HDLL);//卸载MyDll.dll文件；   
}

