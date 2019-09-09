#pragma once

/********************
 * PDF��ͼ�Ķ���
 */

#include "ExternelDefine.h"
#include <Windows.h>


/***
 * ����˵����
 *   ���������ʼ��
 * ������
 *   hWnd����ʾ�Ĵ�����
 */
MOONPDF_API_ int WindowCompentInit(HWND hWnd);

/***
 * ����˵����
 *   ����PDF
 * ����˵����
 *   pdfPath:�ļ�·��
 */
MOONPDF_API_ int MoonPDFLoad(char *pdfPath);

/***
 * ����˵��
 *   ����pdf��ʾ������
 */
MOONPDF_API_ void MoonPaintPDF();

/**
 * ����˵����
 *   ����PDF��С
 * ������
 *   width�����
 *   height���߶�
 */
MOONPDF_API_ void MoonResizePDF(int width,int height);

/***
 * ����˵����
 *   ��pdf�������Ŵ�
 */
MOONPDF_API_ void MoonZoomIn();

/***
 * ����˵����
 *   ��pdf��������С
 */
MOONPDF_API_ void MoonZoomOut();

/***
 * ����˵����
 *   ��pdf˳ʱ����ת90��
 */
MOONPDF_API_ void MoonClockwiseRotation();

/***
 * ����˵����
 *   ��pdf��ʱ����ת90��
 */
MOONPDF_API_ void MoonContrarotate();

/***
 * ����˵����
 *   ��ȡpdf��ҳ��
 * ����ֵ��
 *   ������ҳ��
 */
MOONPDF_API_ int MoonGetPDFPageCount();

/***
 * ����˵����
 *   ��ת�������ҳ
 * ������
 *   pageIndex��ҳ����
 */
MOONPDF_API_ void MoonGotoPage(int pageIndex);