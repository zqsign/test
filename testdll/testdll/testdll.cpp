// testdll.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "windows.h"  
#include <iostream>

void main()
{  
	typedef int(*pMax)(int a, int b);   //���������ָ��pMaxָ��ָ��int XX(int  a, int b)����һ�����͵ĺ���
	typedef int(*pMin)(int a, int b);   
	typedef bool(*pcim2scada)(char* cimid, char** scada);  
	HINSTANCE HDLL;   
	HDLL=LoadLibrary(L"Dll.dll");//���ض�̬���ӿ�MyDll.dll�ļ���   
	pMax Max=(pMax)GetProcAddress(HDLL,"Max");   
	pMin Min=(pMin)GetProcAddress(HDLL,"Min");   
	pcim2scada cim2scada=(pcim2scada)GetProcAddress(HDLL,"cim2scada");   
	int a = Max(5, 12);   

	char cimId[] = "bbbbbb";  
	char * scadaId = "";  
	bool b = cim2scada(cimId, &scadaId);  

	printf("Max���Ϊ%d\n",a);   
	printf("cimId:%s, scadaId:%s\n", cimId, scadaId);  
	FreeLibrary(HDLL);//ж��MyDll.dll�ļ���   
}

