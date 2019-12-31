/*++
 *
 *  Windows NT v5.0 WOW
 *
 *  Copyright (c) 1997, Microsoft Corporation
 *
 *  WIN95.H
 *
 *  WOW32 Hand-coded (as opposed to interpreted) thunks for new-for-Win95
 *        exports.
 *
 *  History:
 *  16 Feb 97 Created davehart
*/

typedef WORD (WINAPI *PFNTILECASCADEWINDOWS)(HWND, UINT, CONST RECT *, UINT, const HWND FAR *);
ULONG FASTCALL WU32TileWindows(PVDMFRAME pFrame);
ULONG FASTCALL WU32CascadeWindows(PVDMFRAME pFrame);
ULONG FASTCALL W32TileOrCascadeWindows(PVDMFRAME pFrame, PFNTILECASCADEWINDOWS pfnWin32);

typedef BOOL (WINAPI *PFNDRAWEDGEFRAMECONTROL)(HDC, LPRECT, UINT, UINT);
ULONG FASTCALL WU32DrawEdge(PVDMFRAME pFrame);
ULONG FASTCALL WU32DrawFrameControl(PVDMFRAME pFrame);
ULONG FASTCALL W32DrawEdgeOrFrameControl(PVDMFRAME pFrame, PFNDRAWEDGEFRAMECONTROL pfnWin32);


ULONG FASTCALL WU32DrawTextEx(PVDMFRAME pFrame);
ULONG FASTCALL WU32GetIconInfo(PVDMFRAME pFrame);
ULONG FASTCALL WU32DrawAnimatedRects(PVDMFRAME pFrame);
ULONG FASTCALL WU32DrawCaption(PVDMFRAME pFrame);
ULONG FASTCALL WU32GetMenuItemInfo(PVDMFRAME pFrame);
ULONG FASTCALL WU32InsertMenuItem(PVDMFRAME pFrame);
ULONG FASTCALL WU32SetMenuItemInfo(PVDMFRAME pFrame);
ULONG FASTCALL WU32GetMenuItemRect(PVDMFRAME pFrame);
ULONG FASTCALL WU32TrackPopupMenuEx(PVDMFRAME pFrame);
ULONG FASTCALL WG32GetCharacterPlacement(PVDMFRAME pFrame);
ULONG FASTCALL WK32GetProductName(PVDMFRAME pFrame);
ULONG FASTCALL WU32DrawState(PVDMFRAME pFrame);
ULONG FASTCALL WU32GetAppVer(PVDMFRAME pFrame);
ULONG FASTCALL WU32CopyImage(PVDMFRAME pFrame);
VOID FASTCALL WowMsgBoxIndirectCallback(DWORD vpfnCallback, LPHELPINFO lpHelpInfo);
ULONG FASTCALL WU32MessageBoxIndirect(PVDMFRAME pFrame);
ULONG FASTCALL WG32CreateEnhMetaFile(PVDMFRAME pFrame);