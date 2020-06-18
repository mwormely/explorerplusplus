// Copyright (C) Explorer++ Project
// SPDX-License-Identifier: GPL-3.0-only
// See LICENSE in the top level directory

#pragma once

BOOL CenterWindow(HWND hParent, HWND hChild);
void GetWindowString(HWND hwnd, std::wstring &str);
std::wstring GetWindowString(HWND hwnd);
BOOL lShowWindow(HWND hwnd, BOOL bShowWindow);
BOOL AddWindowStyle(HWND hwnd, UINT fStyle, BOOL bAdd);
int GetRectHeight(const RECT *rc);
int GetRectWidth(const RECT *rc);