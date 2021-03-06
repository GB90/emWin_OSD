/*********************************************************************
*                Golden-IC Technology Co.,Ltd                        *
*                       www.golden-ic.com                            *
**********************************************************************
*        (c) 2007 - 2014 Golden-IC Technology Co., Ltd               *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: xEDIT.c                                               *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"
#include "EDIT.h"
#include "xEDIT.h"
#include "board.h"

#if 1
#undef  DEBUGOUT
#undef  DEBUGSTR
#define DEBUGOUT(...)
#define DEBUGSTR(str)
#endif

/*********************************************************************
*
*       _Paint
*/
static void _Paint(xEDIT_Obj* pWidget, EDIT_Handle hWin)
{
    GUI_RECT          WinRect;
    char EditText[32];
    int CursorX;
    
    DEBUGOUT("xEDIT hWin = 0x%08x\r\n", hWin);
    WM_GetWindowRectEx(hWin, &WinRect);
    GUI_MoveRect(&WinRect, -WinRect.x0, -WinRect.y0);
    DEBUGOUT("xEDIT_Paint(%d,%d,%d,%d)\r\n",WinRect.x0, WinRect.y0, WinRect.x1, WinRect.y1);
  
    if(pWidget->Bmp)
    {
        GUI_DrawBitmap(pWidget->Bmp, WinRect.x0, WinRect.y0);
    }
    else
    {
        GUI_SetColor(pWidget->aBkColor[0]);
        //Draw Window Frame Outline, and Background.
        GUI_FillRoundedRect(WinRect.x0, WinRect.y0, WinRect.x1, WinRect.y1, 1);
    }
    
    if(pWidget->pFont)
    {
        GUI_SetFont(pWidget->pFont);
    }
    GUI_SetColor(pWidget->TextColor);
    GUI_SetTextMode(GUI_TM_TRANS);
    
    EDIT_GetText(hWin, EditText, 31);
    DEBUGOUT("xEDIT Draw Text: %s\r\n",EditText);
    GUI_DispStringInRect(EditText, &WinRect, (GUI_TA_VCENTER | GUI_TA_LEFT));
    CursorX = GUI_GetDispPosX();
    
    GUI_SetColor(pWidget->aBkColor[1]);
    //Draw Window Frame Outline, and Background.
    GUI_FillRoundedRect(CursorX+2, WinRect.y0+2, CursorX+10, WinRect.y1-2, 1);
}



void xEDIT_Callback(WM_MESSAGE * pMsg)
{
    EDIT_Handle hWin;
    xEDIT_Obj Widget;
    const WM_KEY_INFO* pKeyInfo;
    
    hWin = pMsg->hWin;
    EDIT_GetUserData(hWin, &Widget, sizeof(xEDIT_Obj));
    
    switch (pMsg->MsgId)
    {
      case WM_PAINT:
        _Paint(&Widget, hWin);
        return;
      
      default:
        EDIT_Callback(pMsg);
        break;
    }
}
    
/*************************** End of file ****************************/
