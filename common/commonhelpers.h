// commonhelpers.h - Functions used by windirstat.exe and setup.exe
//
// WinDirStat - Directory Statistics
// Copyright (C) 2003-2005 Bernhard Seifert
// Copyright (C) 2004-2006 Oliver Schneider (assarbad.net)
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// Author: bseifert@users.sourceforge.net, bseifert@daccord.net
//
// $Header$

#pragma once

#include "../common/wds_constants.h"

CString GetShellExecuteError(UINT u);
void MyShellExecute(HWND hwnd, LPCTSTR lpOperation, LPCTSTR lpFile, LPCTSTR lpParameters, LPCTSTR lpDirectory, INT nShowCmd) throw (CException *);
CString MyStrRetToString(const LPITEMIDLIST pidl, const STRRET *strret);
CString GetBaseNameFromPath(LPCTSTR path);
bool FileExists(LPCTSTR path);
CString LoadString(UINT resId);
CString GetAppFileName();
CString GetAppFolder();
CString MyGetFullPathName(LPCTSTR relativePath);

// $Log$
// Revision 1.6  2006/07/04 22:49:18  assarbad
// - Replaced CVS keyword "Date" by "Header" in the file headers
//
// Revision 1.5  2006/07/04 20:45:16  assarbad
// - See changelog for the changes of todays previous check-ins as well as this one!
//
// Revision 1.4  2004/11/05 16:53:05  assarbad
// Added Date and History tag where appropriate.
//
