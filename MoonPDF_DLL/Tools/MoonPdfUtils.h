#pragma once

/*******************************
 * ����pdf��صĹ��߽ӿ�
 */

#include "../mupdf/pdfapp.h"

/***
 * �ϲ�ҳ
 */
void PageMerge(fz_context *ctx, pdf_document * doc_src, pdf_document *doc_des, int page_from, int page_to, pdf_graft_map *graft_map);