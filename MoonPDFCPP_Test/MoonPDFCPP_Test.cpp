// MoonPDFCPP_Test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "../MoonPDF_DLL/Externel/MoonPDF.h"

#pragma comment(lib,"../Debug/MoonPDF_DLL.lib")

int main()
{
	int ret = InitMoonPDFEnvironment();
	if (ret == -1)
	{
		return -1;
	}
	ret = MoonToolsExtractPageToSave("E:\\��������\\ORANGE��S��һ������ϵͳ��ʵ�֣��������棩1.pdf", "E:\\��������\\123.pdf", 1);
	DestoryMoonPDFEnvironment();

	ret = InitMoonPDFEnvironment();
	if (ret == -1)
	{
		return -1;
	}
	ret = MoonToolsExtractPageToSave("E:\\��������\\ORANGE��S��һ������ϵͳ��ʵ�֣��������棩1.pdf", "E:\\��������\\444.pdf", 1);
	DestoryMoonPDFEnvironment();
    return 0;
}

