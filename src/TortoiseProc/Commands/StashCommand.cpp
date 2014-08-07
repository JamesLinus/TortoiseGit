// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2008-2012,2014 - TortoiseGit

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#include "stdafx.h"
#include "StashCommand.h"

#include "MessageBox.h"
#include "RenameDlg.h"
#include "InputLogDlg.h"
#include "Git.h"
#include "DirFileEnum.h"
#include "ShellUpdater.h"

#include "AppUtils.h"

bool StashSaveCommand::Execute()
{
	CString msg;
	if (parser.HasKey(_T("msg")))
		msg = parser.GetVal(_T("msg"));
	return CAppUtils::StashSave(msg);
}

bool StashApplyCommand::Execute()
{
	return CAppUtils::StashApply(_T(""), true);
}

bool StashPopCommand::Execute()
{
	return !CAppUtils::StashPop(true);
}
