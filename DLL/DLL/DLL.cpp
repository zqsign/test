// DLL.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include"DLL.h"   
#include <iostream>  

int Max(int a, int b)   
{   
	if(a>=b)return a;   
	else   
		return b;   
}

int Min(int a, int b)   
{   
	if(a>=b)return b;   
	else   
		return a;   
}    

bool cim2scada(char* cimId, char** scadaId){  
	char *result;  
	if(cimId == NULL){  
		printf("��ָ�룡");  
		return false;  
	}
	else if(strlen(cimId) == 0){  
		printf("cimId��ֵ��");  
		return false;  
	}  

	if(strcmp(cimId, "aaaaaa") == 0){  
		result = "1000";  
	}
	else if(strcmp(cimId, "bbbbbb") == 0){  
		result = "2000";  
	}  
	*scadaId = result;  
	printf("fun scadaId:%s\n", *scadaId);  
	return true;  
}  

