#pragma once
/****************************************
 * MoonPDF��������ʹ�ó�ʼ���������ͷŻ���
 */

#include "ExternelDefine.h"

/***
 * ����˵����
 *	��ʼ��moonpdfʹ�û�����
 * ����ֵ��
 *  �ɹ�����0��ʧ�ܷ���-1
 */
MOONPDF_API_ int InitMoonPDFEnvironment();

/***
 * ����˵����
 *	�ͷ�MoonPdf��Դ
 */
MOONPDF_API_ void DestoryMoonPDFEnvironment();