#pragma once

#define _IN_  //�����������
#define _OUT_ //�����������
#define _GLOBAL_ //����ȫ�ֱ���

//���庯������
#ifndef MOONPDF_API_
#define MOONPDF_API_ extern "C" _declspec (dllimport)
#else
#define MOONPDF_API_ extern "C" _declspec (dllexport)
#endif