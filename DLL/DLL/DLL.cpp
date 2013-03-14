// DLL.cpp : 定义 DLL 应用程序的导出函数。
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
		printf("空指针！");  
		return false;  
	}
	else if(strlen(cimId) == 0){  
		printf("cimId无值！");  
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

