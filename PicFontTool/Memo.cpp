#include "stdafx.h"

///*
//
///wxFontEnumerator enumerator;
//
//	//wxArrayString as = wxFontEnumerator::GetFacenames(wxFONTENCODING_GB2312);
//	//int c = as.size();
//	//for (int i = 0; i < c; ++i) {
//	//	PLOGI << as[i].ToStdString().c_str() << endl;
//	//}
//
//	//int size = stoi(input.ToStdString());
//	//wxFont font(size, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL,
//	//	false, "ËÎÌå");
//
//	//wxClientDC dc(grey_zone);
//	//dc.SetBackground(wxBrush("white"));
//	//dc.Clear();
//	//dc.SetFont(font);
//	//dc.DrawText("ËÎ", wxPoint(0, 0));
//
//	/*BITMAP bitmap_obj;
//	GetObject(hdc, sizeof(BITMAP), &bitmap_obj);
//
//	DIBSECTION ds;
//	int a = GetObject(hOldBitmap, sizeof(DIBSECTION), &ds);
//	if (GetObject(hOldBitmap, sizeof(DIBSECTION), &ds) == sizeof(DIBSECTION)) {
//		int a = 0;
//	}*/
//
//	// Operate monochrome bitmap
//	//std::vector<bool> bits;
//	//// Transfer physical memory bits into sequence bits
//	//for (int i = 0; i < bmp_height; ++i) {
//
//	//	for (int j = 0; j < row_byte_count; ++j) {
//	//		char bit = pbuf[i * row_byte_count + j];
//
//	//		if (j * 8 <= bmp_width) {
//	//			if ((j + 1) * 8 > bmp_width) {
//	//				int remainder = bmp_width % 8;
//	//				for (int k = 0; k < remainder; ++k) {
//	//					bool bit_val = (bit & 1 << (7 - k)) ? 1 : 0;
//	//					bits.push_back(bit_val);
//	//				}
//	//			}
//	//			else {
//	//				for (int k = 0; k < 8; ++k) {
//	//					bool bit_val = (bit & 1 << (7 - k)) ? 1 : 0;
//	//					bits.push_back(bit_val);
//	//				}
//	//			}
//	//		}
//	//	}	
//	//}
//
//*/