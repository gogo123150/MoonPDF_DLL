#pragma once
/***
 * ���ڵ������й���PDF���߲����Ľӿ�
 */

#include "ExternelDefine.h"

/*****
 * ����˵����
 *   ��ȡҳ����
 * ����˵����
 *   srcPath:Դ�ļ�·��
 *   tagPath:��Ҫ������ļ�·��
 *   pageIndex:��ȡ��ҳ����
 * ����ֵ��
 *   �ɹ�����0��ʧ�ܷ���-1
 */
MOONPDF_API_ int MoonToolsExtractPageToSave(const char* srcPath, const char* tagPath, int pageIndex);

/***
 * ����˵����
 *   ��ȡpdfҳ������
 * ������
 *   srcPath:����pdf��ҳ��
 * ����ֵ��
 *   ����pdfҳ����
 */
MOONPDF_API_ int MoonToolsGetPDFPageCount(const char* srcPath);