/*********************************************************************
*                Golden-IC Technology Co.,Ltd                        *
*                       www.golden-ic.com                            *
**********************************************************************
*        (c) 2007 - 2014 Golden-IC Technology Co., Ltd               *
*                                                                    *
**********************************************************************
*/
#include <stdlib.h>

#include "GUI.h"
#include "Custom_Widget.h"
#include "xBUTTON.h"
#include "xDIALOG.h"
#include "DIALOG.h"
#include "xSLIDER.h"
#include "SLIDER.h"
#include "DROPDOWN.h"
#include "xDROPDOWN.h"
#include "xIconSelBtn.h"

#include "board.h"

/*********************************************************************
*
*       Font Type
*
**********************************************************************
*/
extern GUI_CONST_STORAGE GUI_FONT GUI_FontAR_Mingti_Medium_B523;
extern GUI_CONST_STORAGE GUI_FONT GUI_FontArial19;
extern GUI_CONST_STORAGE GUI_FONT GUI_FontHG_GB_Gothic23;
extern GUI_CONST_STORAGE GUI_FONT GUI_FontHGGothicB19;
extern GUI_CONST_STORAGE GUI_FONT GUI_FontHGPGothicB19;

/*********************************************************************
*
*       BMP data
*
**********************************************************************
*/
extern GUI_CONST_STORAGE GUI_BITMAP bmbt_w470_h36_n;
extern GUI_CONST_STORAGE GUI_BITMAP bmbt_w470_h36_f;
extern GUI_CONST_STORAGE GUI_BITMAP bmbt_w470_h36_h;
extern GUI_CONST_STORAGE GUI_BITMAP bmbt_w174_h30_f;
extern GUI_CONST_STORAGE GUI_BITMAP bmbt_w190_h26_f_1;
extern GUI_CONST_STORAGE GUI_BITMAP bmbt_w190_h26_n_a;
extern GUI_CONST_STORAGE GUI_BITMAP bmbt_w190_h26_a;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_44_26;

extern GUI_CONST_STORAGE GUI_BITMAP bmmark_slider_off;
extern GUI_CONST_STORAGE GUI_BITMAP bmmark_slider_on;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_slider_off;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_slider_on;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_slider_on_blue;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_slider_on_blue_pixel_v;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_slider_on_red;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_slider_on_red_pixel_v;
extern GUI_CONST_STORAGE GUI_BITMAP bmbase_slider_on_green;

extern GUI_CONST_STORAGE GUI_BITMAP bmmark_check;

extern GUI_CONST_STORAGE GUI_BITMAP bmicon_position1;
extern GUI_CONST_STORAGE GUI_BITMAP bmicon_position3;
extern GUI_CONST_STORAGE GUI_BITMAP bmicon_position5;
extern GUI_CONST_STORAGE GUI_BITMAP bmicon_position7;
extern GUI_CONST_STORAGE GUI_BITMAP bmicon_position9;
extern GUI_CONST_STORAGE GUI_BITMAP bmmark_check;



/*********************************************************************
*
*       Widget ID
*
**********************************************************************
*/
#define ID_SLIDER_START (xID_SLIDER_START + 0)
#define ID_SLIDER0      (ID_SLIDER_START + 0)
#define ID_SLIDER1      (ID_SLIDER_START + 1)
#define ID_SLIDER2      (ID_SLIDER_START + 2)
#define ID_SLIDER3      (ID_SLIDER_START + 3)
#define ID_SLIDER4      (ID_SLIDER_START + 4)
#define ID_SLIDER5      (ID_SLIDER_START + 5)
#define ID_SLIDER6      (ID_SLIDER_START + 6)
#define ID_SLIDER7      (ID_SLIDER_START + 7)
#define ID_SLIDER8      (ID_SLIDER_START + 8)
#define ID_SLIDER9      (ID_SLIDER_START + 9)

#define ID_DROPDOWN_START (xID_DROPDOWN_START + 0)
#define ID_DROPDOWN0   (ID_DROPDOWN_START + 0)
#define ID_DROPDOWN1   (ID_DROPDOWN_START + 1)
#define ID_DROPDOWN2   (ID_DROPDOWN_START + 2)
#define ID_DROPDOWN3   (ID_DROPDOWN_START + 3)
#define ID_DROPDOWN4   (ID_DROPDOWN_START + 4)
#define ID_DROPDOWN5   (ID_DROPDOWN_START + 5)
#define ID_DROPDOWN6   (ID_DROPDOWN_START + 6)
#define ID_DROPDOWN7   (ID_DROPDOWN_START + 7)
#define ID_DROPDOWN8   (ID_DROPDOWN_START + 8)
#define ID_DROPDOWN9   (ID_DROPDOWN_START + 9)

#define ID_TEXT_START  (xID_TEXT_START + 0)
#define ID_TEXT0       (ID_TEXT_START + 0)
#define ID_TEXT1       (ID_TEXT_START + 1)
#define ID_TEXT2       (ID_TEXT_START + 2)
#define ID_TEXT3       (ID_TEXT_START + 3)
#define ID_TEXT4       (ID_TEXT_START + 4)
#define ID_TEXT5       (ID_TEXT_START + 5)
#define ID_TEXT6       (ID_TEXT_START + 6)
#define ID_TEXT7       (ID_TEXT_START + 7)
#define ID_TEXT8       (ID_TEXT_START + 8)
#define ID_TEXT9       (ID_TEXT_START + 9)


#define ID_WIN_START   (xID_WINDOW_START + 0)
#define ID_WIN0        (ID_WIN_START + 0)
#define ID_WIN1        (ID_WIN_START + 1)
#define ID_WIN2        (ID_WIN_START + 2)
#define ID_WIN3        (ID_WIN_START + 3)
#define ID_WIN4        (ID_WIN_START + 4)
#define ID_WIN5        (ID_WIN_START + 5)
#define ID_WIN6        (ID_WIN_START + 6)
#define ID_WIN7        (ID_WIN_START + 7)
#define ID_WIN8        (ID_WIN_START + 8)
#define ID_WIN9        (ID_WIN_START + 9)

#define ID_BTN_START   (xID_BTN_START + 0)
#define ID_BTN0        (ID_BTN_START + 0)
#define ID_BTN1        (ID_BTN_START + 1)
#define ID_BTN2        (ID_BTN_START + 2)
#define ID_BTN3        (ID_BTN_START + 3)
#define ID_BTN4        (ID_BTN_START + 4)
#define ID_BTN5        (ID_BTN_START + 5)
#define ID_BTN6        (ID_BTN_START + 6)
#define ID_BTN7        (ID_BTN_START + 7)
#define ID_BTN8        (ID_BTN_START + 8)
#define ID_BTN9        (ID_BTN_START + 9)
#define ID_BTN10       (ID_BTN_START + 10)
#define ID_BTN11       (ID_BTN_START + 11)

#define ID_IMAGE_START (xID_IMAGE_START+0)
#define ID_IMAGE0      (ID_IMAGE_START+0)
#define ID_IMAGE1      (ID_IMAGE_START+1)
#define ID_IMAGE2      (ID_IMAGE_START+2)
#define ID_IMAGE3      (ID_IMAGE_START+3)
#define ID_IMAGE4      (ID_IMAGE_START+4)
#define ID_IMAGE5      (ID_IMAGE_START+5)
#define ID_IMAGE6      (ID_IMAGE_START+6)
#define ID_IMAGE7      (ID_IMAGE_START+7)
#define ID_IMAGE8      (ID_IMAGE_START+8)
#define ID_IMAGE9      (ID_IMAGE_START+9)


/*********************************************************************
*
*       xBUTTON
*/
static const xBUTTON_Obj xBUTTON0 =
{
  xBUTTON_NORMAL,                    //eButtonState
  
  {                                  //GUI_BITMAP* aBmp[4];
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_f,
    &bmbt_w470_h36_h
  },
  "Back Color"  ,                    //*pText
  GUI_TA_LEFT | GUI_TA_VCENTER,      //TextAlign
  {13,0,456,36},                     //GUI_RECT TextRect;
  &GUI_FontHGPGothicB19,             //GUI_FONT* pFont
  {                                  //TextColor;
    GUI_TEXT_COLOR_DISABLE,
    GUI_TEXT_COLOR_NORMAL,
    GUI_TEXT_COLOR_FOCUS,
    GUI_TEXT_COLOR_HISTORY
  },
  0                                  //NumExtraBytes;
};

static const xBUTTON_Obj xBUTTON1 =
{
  xBUTTON_NORMAL,                    //eButtonState
  
  {                                  //GUI_BITMAP* aBmp[4];
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_f,
    &bmbt_w470_h36_h
  },
  "Menu Position",                   //*pText
  GUI_TA_LEFT | GUI_TA_VCENTER,      //TextAlign
  {13,0,456,36},                     //GUI_RECT TextRect;
  &GUI_FontHGPGothicB19,             //GUI_FONT* pFont
  {                                  //TextColor;
    GUI_TEXT_COLOR_DISABLE,
    GUI_TEXT_COLOR_NORMAL,
    GUI_TEXT_COLOR_FOCUS,
    GUI_TEXT_COLOR_HISTORY
  },
  0                                  //NumExtraBytes;
};

static const xBUTTON_Obj xBUTTON2 =
{
  xBUTTON_NORMAL,                    //eButtonState
  
  {                                  //GUI_BITMAP* aBmp[4];
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_f,
    &bmbt_w470_h36_h
  },
  "Menu Display",                    //*pText
  GUI_TA_LEFT | GUI_TA_VCENTER,      //TextAlign
  {13,0,456,36},                     //GUI_RECT TextRect;
  &GUI_FontHGPGothicB19,             //GUI_FONT* pFont
  {                                  //TextColor;
    GUI_TEXT_COLOR_DISABLE,
    GUI_TEXT_COLOR_NORMAL,
    GUI_TEXT_COLOR_FOCUS,
    GUI_TEXT_COLOR_HISTORY
  },
  0                                  //NumExtraBytes;
};

static const xBUTTON_Obj xBUTTON3 =
{
  xBUTTON_NORMAL,                    //eButtonState
  
  {                                  //GUI_BITMAP* aBmp[4];
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_f,
    &bmbt_w470_h36_h
  },
  "Line Display",                    //*pText
  GUI_TA_LEFT | GUI_TA_VCENTER,      //TextAlign
  {13,0,456,36},                     //GUI_RECT TextRect;
  &GUI_FontHGPGothicB19,             //GUI_FONT* pFont
  {                                  //TextColor;
    GUI_TEXT_COLOR_DISABLE,
    GUI_TEXT_COLOR_NORMAL,
    GUI_TEXT_COLOR_FOCUS,
    GUI_TEXT_COLOR_HISTORY
  },
  0                                  //NumExtraBytes;
};

static const xBUTTON_Obj xBUTTON4 =
{
  xBUTTON_DISABLE,                   //eButtonState
  
  {                                  //GUI_BITMAP* aBmp[4];
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_f,
    &bmbt_w470_h36_h
  },
  "Source Display",                  //*pText
  GUI_TA_LEFT | GUI_TA_VCENTER,      //TextAlign
  {13,0,456,36},                     //GUI_RECT TextRect;
  &GUI_FontHGPGothicB19,             //GUI_FONT* pFont
  {                                  //TextColor;
    GUI_TEXT_COLOR_DISABLE,
    GUI_TEXT_COLOR_NORMAL,
    GUI_TEXT_COLOR_FOCUS,
    GUI_TEXT_COLOR_HISTORY
  },
  0                                  //NumExtraBytes;
};

static const xBUTTON_Obj xBUTTON5 =
{
  xBUTTON_NORMAL,                    //eButtonState
  
  {                                  //GUI_BITMAP* aBmp[4];
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_f,
    &bmbt_w470_h36_h
  },
  "Logo",                            //*pText
  GUI_TA_LEFT | GUI_TA_VCENTER,      //TextAlign
  {13,0,456,36},                     //GUI_RECT TextRect;
  &GUI_FontHGPGothicB19,             //GUI_FONT* pFont
  {                                  //TextColor;
    GUI_TEXT_COLOR_DISABLE,
    GUI_TEXT_COLOR_NORMAL,
    GUI_TEXT_COLOR_FOCUS,
    GUI_TEXT_COLOR_HISTORY
  },
  0                                  //NumExtraBytes;
};

static const xBUTTON_Obj xBUTTON6 =
{
  xBUTTON_NORMAL,                    //eButtonState
  
  {                                  //GUI_BITMAP* aBmp[4];
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_n, 
    &bmbt_w470_h36_f,
    &bmbt_w470_h36_h
  },
  "Language",                        //*pText
  GUI_TA_LEFT | GUI_TA_VCENTER,      //TextAlign
  {13,0,456,36},                     //GUI_RECT TextRect;
  &GUI_FontHGPGothicB19,             //GUI_FONT* pFont
  {                                  //TextColor;
    GUI_TEXT_COLOR_DISABLE,
    GUI_TEXT_COLOR_NORMAL,
    GUI_TEXT_COLOR_FOCUS,
    GUI_TEXT_COLOR_HISTORY
  },
  0                                  //NumExtraBytes;
};


/*********************************************************************
*
*       Dropdown Widgets
*
**********************************************************************
*/
static xDROPDOWN_ITEM aBack_Color_Items[] = 
{
    {"Blue"               ,xDROPDOWN_ITEM_ENABLE},
    {"Black"              ,xDROPDOWN_ITEM_ENABLE},
};

static xDROPDOWN_ITEM aMenu_Position_Items[] = 
{
    {"Top-Left"           ,xDROPDOWN_ITEM_ENABLE},
    {"Top-Right"          ,xDROPDOWN_ITEM_ENABLE},
    {"Center"             ,xDROPDOWN_ITEM_ENABLE},
    {"Bottom-Left"        ,xDROPDOWN_ITEM_ENABLE},
    {"Bottom-Right"       ,xDROPDOWN_ITEM_ENABLE},
};

static xDROPDOWN_ITEM aMenu_Display_Items[] = 
{
    {"15sec"              ,xDROPDOWN_ITEM_ENABLE},
    {"On"                 ,xDROPDOWN_ITEM_ENABLE},
};

static xDROPDOWN_ITEM aLine_Display_Items[] = 
{
    {"5sec"               ,xDROPDOWN_ITEM_ENABLE},
    {"Off"                ,xDROPDOWN_ITEM_ENABLE},
};

static xDROPDOWN_ITEM aSource_Display_Items[] = 
{
    {"On"                 ,xDROPDOWN_ITEM_ENABLE},
    {"Off"                ,xDROPDOWN_ITEM_ENABLE},
};

static xDROPDOWN_ITEM aLogo_Items[] = 
{
    {"On"                 ,xDROPDOWN_ITEM_ENABLE},
    {"Off"                ,xDROPDOWN_ITEM_ENABLE},
};

static xDROPDOWN_ITEM aLanguage_Items[] = 
{
    /*
    1. 日本語
    2. Deutsch
    3. Espanol
    4. Italiano
    5. Francais
    6. Portugues
    7. Nederlands
    8. Svenska
    9. Norsk
    10. ???????
    11. 中文
    12. 繁體中文
    */
    {"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e"                     ,xDROPDOWN_ITEM_ENABLE},
    {"Deutsch"                                                  ,xDROPDOWN_ITEM_ENABLE},
    {"Espa\xc3\xb1ol"                                           ,xDROPDOWN_ITEM_ENABLE},
    {"Italiano"                                                 ,xDROPDOWN_ITEM_ENABLE},
    {"Fran\xc3\xa7""ais"                                        ,xDROPDOWN_ITEM_ENABLE},
    {"Portugu\xc3\xaas"                                         ,xDROPDOWN_ITEM_ENABLE},
    {"Nederlands"                                               ,xDROPDOWN_ITEM_ENABLE},
    {"Svenska"                                                  ,xDROPDOWN_ITEM_ENABLE},
    {"Norsk"                                                    ,xDROPDOWN_ITEM_ENABLE},
    {"\xd0\xa0\xd1\x83\xd1\x81\xd1\x81\xd0\xba\xd0\xb8\xd0\xb9" ,xDROPDOWN_ITEM_ENABLE},
    {"\xe4\xb8\xad\xe6\x96\x87"                                 ,xDROPDOWN_ITEM_ENABLE},
    {"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87"         ,xDROPDOWN_ITEM_ENABLE},
};

static xDROPDOWN_Obj wBack_Color= 
{
    xDROPDOWN_ENABLE,                                              //eDROPDOWN_STATE      State;                                                            
    aBack_Color_Items,                                             //xDROPDOWN_ITEM      *paDropDownItems;                                              
    GUI_COUNTOF(aBack_Color_Items),                                //int                  NumItems;                                                     
    &bmbt_w190_h26_a,                                              //GUI_BITMAP*          pBtnBmp
    GUI_UI_COLOR8,
    {GUI_UI_COLOR3,GUI_UI_COLOR4,GUI_UI_COLOR4,GUI_UI_COLOR4},     //GUI_COLOR            BarTextColor[4];                                              
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pBarTextFont;
    {                                                              //GUI_RECT             ListBoxRect;
       479 - 75,// X0 = Physical X - 75
        94 - 27,// Y0 = Physical Y - 27 
       608,     //=X0 + 30 + 174,
         0,     // Y1: ignore, Widget will calculate it in run-time.
    },
    {GUI_UI_COLOR9,GUI_UI_COLOR2},                                 //GUI_COLOR            ListBoxRectBkColor[2]; //Color[0]: Outline, Color[1]:Fill RECT
    {GUI_UI_COLOR3,GUI_UI_COLOR1,GUI_UI_COLOR2},                   //GUI_COLOR            ListBoxTextColor[3];                                          
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pListBoxTextFont;                                             
    30,                                                            //int                  ListBoxItemHeight;                                            
    12,                                                            //int                  ListBoxItemAlignY0;                                           
    35,                                                            //int                  ListBoxTextAlignX0;                                           
    30,                                                            //int                  ListBoxItemFocusBmpAlignX0;                                   
    0,                                                             //int                  ListBoxIdx;                                                   
    &bmbt_w174_h30_f,                                              //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemFocusBmp;                                
    2,                                                             //int                  ListBoxItemCheckedBmpAlignX0;                                 
    2,                                                             //int                  ListBoxItemCheckedBmpAlignY0;                                 
    &bmmark_check,                                                 //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemCheckedBmp;                              
    NULL,                                                          //WM_HWIN              hListBox;                                                     
    NULL,                                                          //WM_HWIN              hDropdown;                                                    
    0                                                              //int                  WidgetInit;                                                   
};

static xDROPDOWN_Obj wMenu_Position= 
{
    xDROPDOWN_ENABLE,                                              //eDROPDOWN_STATE      State;                                                            
    aMenu_Position_Items,                                             //xDROPDOWN_ITEM      *paDropDownItems;                                              
    GUI_COUNTOF(aMenu_Position_Items),                                //int                  NumItems;                                                     
    &bmbt_w190_h26_a,                                              //GUI_BITMAP*          pBtnBmp
    GUI_UI_COLOR8,
    {GUI_UI_COLOR3,GUI_UI_COLOR4,GUI_UI_COLOR4,GUI_UI_COLOR4},     //GUI_COLOR            BarTextColor[4];                                              
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pBarTextFont;
    {                                                              //GUI_RECT             ListBoxRect;
       479 - 75,// X0 = Physical X - 75
       130 - 27,// Y0 = Physical Y - 27 
       608,     //=X0 + 30 + 174,
         0,     // Y1: ignore, Widget will calculate it in run-time.
    },
    {GUI_UI_COLOR9,GUI_UI_COLOR2},                                 //GUI_COLOR            ListBoxRectBkColor[2]; //Color[0]: Outline, Color[1]:Fill RECT
    {GUI_UI_COLOR3,GUI_UI_COLOR1,GUI_UI_COLOR2},                   //GUI_COLOR            ListBoxTextColor[3];                                          
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pListBoxTextFont;                                             
    30,                                                            //int                  ListBoxItemHeight;                                            
    12,                                                            //int                  ListBoxItemAlignY0;                                           
    35,                                                            //int                  ListBoxTextAlignX0;                                           
    30,                                                            //int                  ListBoxItemFocusBmpAlignX0;                                   
    0,                                                             //int                  ListBoxIdx;                                                   
    &bmbt_w174_h30_f,                                              //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemFocusBmp;                                
    2,                                                             //int                  ListBoxItemCheckedBmpAlignX0;                                 
    2,                                                             //int                  ListBoxItemCheckedBmpAlignY0;                                 
    &bmmark_check,                                                 //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemCheckedBmp;                              
    NULL,                                                          //WM_HWIN              hListBox;                                                     
    NULL,                                                          //WM_HWIN              hDropdown;                                                    
    0                                                              //int                  WidgetInit;                                                   
};

static xDROPDOWN_Obj wMenu_Display= 
{
    xDROPDOWN_ENABLE,                                              //eDROPDOWN_STATE      State;                                                            
    aMenu_Display_Items,                                           //xDROPDOWN_ITEM      *paDropDownItems;                                              
    GUI_COUNTOF(aMenu_Display_Items),                              //int                  NumItems;                                                     
    &bmbt_w190_h26_a,                                              //GUI_BITMAP*          pBtnBmp
    GUI_UI_COLOR8,
    {GUI_UI_COLOR3,GUI_UI_COLOR4,GUI_UI_COLOR4,GUI_UI_COLOR4},     //GUI_COLOR            BarTextColor[4];                                              
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pBarTextFont;
    {                                                              //GUI_RECT             ListBoxRect;
       479 - 75,// X0 = Physical X - 75
       166 - 27,// Y0 = Physical Y - 27 
       608,     //=X0 + 30 + 174,
         0,     // Y1: ignore, Widget will calculate it in run-time.
    },
    {GUI_UI_COLOR9,GUI_UI_COLOR2},                                 //GUI_COLOR            ListBoxRectBkColor[2]; //Color[0]: Outline, Color[1]:Fill RECT
    {GUI_UI_COLOR3,GUI_UI_COLOR1,GUI_UI_COLOR2},                   //GUI_COLOR            ListBoxTextColor[3];                                          
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pListBoxTextFont;                                             
    30,                                                            //int                  ListBoxItemHeight;                                            
    12,                                                            //int                  ListBoxItemAlignY0;                                           
    35,                                                            //int                  ListBoxTextAlignX0;                                           
    30,                                                            //int                  ListBoxItemFocusBmpAlignX0;                                   
    0,                                                             //int                  ListBoxIdx;                                                   
    &bmbt_w174_h30_f,                                              //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemFocusBmp;                                
    2,                                                             //int                  ListBoxItemCheckedBmpAlignX0;                                 
    2,                                                             //int                  ListBoxItemCheckedBmpAlignY0;                                 
    &bmmark_check,                                                 //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemCheckedBmp;                              
    NULL,                                                          //WM_HWIN              hListBox;                                                     
    NULL,                                                          //WM_HWIN              hDropdown;                                                    
    0                                                              //int                  WidgetInit;                                                   
};

static xDROPDOWN_Obj wLine_Display= 
{
    xDROPDOWN_ENABLE,                                              //eDROPDOWN_STATE      State;                                                            
    aLine_Display_Items,                                           //xDROPDOWN_ITEM      *paDropDownItems;                                              
    GUI_COUNTOF(aLine_Display_Items),                              //int                  NumItems;                                                     
    &bmbt_w190_h26_a,                                              //GUI_BITMAP*          pBtnBmp
    GUI_UI_COLOR8,
    {GUI_UI_COLOR3,GUI_UI_COLOR4,GUI_UI_COLOR4,GUI_UI_COLOR4},     //GUI_COLOR            BarTextColor[4];                                              
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pBarTextFont;
    {                                                              //GUI_RECT             ListBoxRect;
       479 - 75,// X0 = Physical X - 75
       202 - 27,// Y0 = Physical Y - 27 
       608,     //=X0 + 30 + 174,
         0,     // Y1: ignore, Widget will calculate it in run-time.
    },
    {GUI_UI_COLOR9,GUI_UI_COLOR2},                                 //GUI_COLOR            ListBoxRectBkColor[2]; //Color[0]: Outline, Color[1]:Fill RECT
    {GUI_UI_COLOR3,GUI_UI_COLOR1,GUI_UI_COLOR2},                   //GUI_COLOR            ListBoxTextColor[3];                                          
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pListBoxTextFont;                                             
    30,                                                            //int                  ListBoxItemHeight;                                            
    12,                                                            //int                  ListBoxItemAlignY0;                                           
    35,                                                            //int                  ListBoxTextAlignX0;                                           
    30,                                                            //int                  ListBoxItemFocusBmpAlignX0;                                   
    0,                                                             //int                  ListBoxIdx;                                                   
    &bmbt_w174_h30_f,                                              //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemFocusBmp;                                
    2,                                                             //int                  ListBoxItemCheckedBmpAlignX0;                                 
    2,                                                             //int                  ListBoxItemCheckedBmpAlignY0;                                 
    &bmmark_check,                                                 //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemCheckedBmp;                              
    NULL,                                                          //WM_HWIN              hListBox;                                                     
    NULL,                                                          //WM_HWIN              hDropdown;                                                    
    0                                                              //int                  WidgetInit;                                                   
};

static xDROPDOWN_Obj wSource_Display= 
{
    xDROPDOWN_ENABLE,                                              //eDROPDOWN_STATE      State;                                                            
    aSource_Display_Items,                                             //xDROPDOWN_ITEM      *paDropDownItems;                                              
    GUI_COUNTOF(aSource_Display_Items),                                //int                  NumItems;                                                     
    &bmbt_w190_h26_a,                                              //GUI_BITMAP*          pBtnBmp
    GUI_UI_COLOR8,
    {GUI_UI_COLOR3,GUI_UI_COLOR4,GUI_UI_COLOR4,GUI_UI_COLOR4},     //GUI_COLOR            BarTextColor[4];                                              
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pBarTextFont;
    {                                                              //GUI_RECT             ListBoxRect;
       479 - 75,// X0 = Physical X - 75
       238 - 27,// Y0 = Physical Y - 27 
       608,     //=X0 + 30 + 174,
         0,     // Y1: ignore, Widget will calculate it in run-time.
    },
    {GUI_UI_COLOR9,GUI_UI_COLOR2},                                 //GUI_COLOR            ListBoxRectBkColor[2]; //Color[0]: Outline, Color[1]:Fill RECT
    {GUI_UI_COLOR3,GUI_UI_COLOR1,GUI_UI_COLOR2},                   //GUI_COLOR            ListBoxTextColor[3];                                          
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pListBoxTextFont;                                             
    30,                                                            //int                  ListBoxItemHeight;                                            
    12,                                                            //int                  ListBoxItemAlignY0;                                           
    35,                                                            //int                  ListBoxTextAlignX0;                                           
    30,                                                            //int                  ListBoxItemFocusBmpAlignX0;                                   
    0,                                                             //int                  ListBoxIdx;                                                   
    &bmbt_w174_h30_f,                                              //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemFocusBmp;                                
    2,                                                             //int                  ListBoxItemCheckedBmpAlignX0;                                 
    2,                                                             //int                  ListBoxItemCheckedBmpAlignY0;                                 
    &bmmark_check,                                                 //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemCheckedBmp;                              
    NULL,                                                          //WM_HWIN              hListBox;                                                     
    NULL,                                                          //WM_HWIN              hDropdown;                                                    
    0                                                              //int                  WidgetInit;                                                   
};

static xDROPDOWN_Obj wLogo= 
{
    xDROPDOWN_ENABLE,                                              //eDROPDOWN_STATE      State;                                                            
    aLogo_Items,                                                   //xDROPDOWN_ITEM      *paDropDownItems;                                              
    GUI_COUNTOF(aLogo_Items),                                      //int                  NumItems;                                                     
    &bmbt_w190_h26_a,                                              //GUI_BITMAP*          pBtnBmp
    GUI_UI_COLOR8,
    {GUI_UI_COLOR3,GUI_UI_COLOR4,GUI_UI_COLOR4,GUI_UI_COLOR4},     //GUI_COLOR            BarTextColor[4];                                              
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pBarTextFont;
    {                                                              //GUI_RECT             ListBoxRect;
       479 - 75,// X0 = Physical X - 75
       274 - 27,// Y0 = Physical Y - 27 
       608,     //=X0 + 30 + 174,
         0,     // Y1: ignore, Widget will calculate it in run-time.
    },
    {GUI_UI_COLOR9,GUI_UI_COLOR2},                                 //GUI_COLOR            ListBoxRectBkColor[2]; //Color[0]: Outline, Color[1]:Fill RECT
    {GUI_UI_COLOR3,GUI_UI_COLOR1,GUI_UI_COLOR2},                   //GUI_COLOR            ListBoxTextColor[3];                                          
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pListBoxTextFont;                                             
    30,                                                            //int                  ListBoxItemHeight;                                            
    12,                                                            //int                  ListBoxItemAlignY0;                                           
    35,                                                            //int                  ListBoxTextAlignX0;                                           
    30,                                                            //int                  ListBoxItemFocusBmpAlignX0;                                   
    0,                                                             //int                  ListBoxIdx;                                                   
    &bmbt_w174_h30_f,                                              //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemFocusBmp;                                
    2,                                                             //int                  ListBoxItemCheckedBmpAlignX0;                                 
    2,                                                             //int                  ListBoxItemCheckedBmpAlignY0;                                 
    &bmmark_check,                                                 //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemCheckedBmp;                              
    NULL,                                                          //WM_HWIN              hListBox;                                                     
    NULL,                                                          //WM_HWIN              hDropdown;                                                    
    0                                                              //int                  WidgetInit;                                                   
};

static xDROPDOWN_Obj wLanguage= 
{
    xDROPDOWN_ENABLE,                                              //eDROPDOWN_STATE      State;                                                            
    aLanguage_Items,                                               //xDROPDOWN_ITEM      *paDropDownItems;                                              
    GUI_COUNTOF(aLanguage_Items),                                  //int                  NumItems;                                                     
    &bmbt_w190_h26_a,                                              //GUI_BITMAP*          pBtnBmp
    GUI_UI_COLOR8,
    {GUI_UI_COLOR3,GUI_UI_COLOR4,GUI_UI_COLOR4,GUI_UI_COLOR4},     //GUI_COLOR            BarTextColor[4];                                              
    &GUI_FontAR_Mingti_Medium_B523,                                //const GUI_FONT      *pBarTextFont;
    {                                                              //GUI_RECT             ListBoxRect;
       479 - 75,// X0 = Physical X - 75
       216,     // Y0 = Physical Y - 27 
       608,     //=X0 + 30 + 174,
         0,     // Y1: ignore, Widget will calculate it in run-time.
    },
    {GUI_UI_COLOR9,GUI_UI_COLOR2},                                 //GUI_COLOR            ListBoxRectBkColor[2]; //Color[0]: Outline, Color[1]:Fill RECT
    {GUI_UI_COLOR3,GUI_UI_COLOR1,GUI_UI_COLOR2},                   //GUI_COLOR            ListBoxTextColor[3];                                          
    &GUI_FontHGPGothicB19,                                         //const GUI_FONT      *pListBoxTextFont;                                             
    30,                                                            //int                  ListBoxItemHeight;                                            
    12,                                                            //int                  ListBoxItemAlignY0;                                           
    35,                                                            //int                  ListBoxTextAlignX0;                                           
    30,                                                            //int                  ListBoxItemFocusBmpAlignX0;                                   
    0,                                                             //int                  ListBoxIdx;                                                   
    &bmbt_w174_h30_f,                                              //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemFocusBmp;                                
    2,                                                             //int                  ListBoxItemCheckedBmpAlignX0;                                 
    2,                                                             //int                  ListBoxItemCheckedBmpAlignY0;                                 
    &bmmark_check,                                                 //GUI_CONST_STORAGE GUI_BITMAP* pListBoxItemCheckedBmp;                              
    NULL,                                                          //WM_HWIN              hListBox;                                                     
    NULL,                                                          //WM_HWIN              hDropdown;                                                    
    0                                                              //int                  WidgetInit;                                                   
};

static const xDROPDOWN_Obj* pDropdownSettingTable[]=
{
    (xDROPDOWN_Obj*)&wBack_Color,
    (xDROPDOWN_Obj*)&wMenu_Position,
    (xDROPDOWN_Obj*)&wMenu_Display,
    (xDROPDOWN_Obj*)&wLine_Display,
    (xDROPDOWN_Obj*)&wSource_Display,
    (xDROPDOWN_Obj*)&wLogo,
    (xDROPDOWN_Obj*)&wLanguage,
};


const xIconSelBtn_OBJ xIconSelBtn1 = 
{
  {                                                 //xIconArray
    {&bmicon_position1, 40, 17},
    {&bmicon_position3,188, 17},
    {&bmicon_position5,114, 47},
    {&bmicon_position7, 40, 77},
    {&bmicon_position9,188, 77},
  },
  
  {                                                 //xIconCheckXyArray[10];
    {  6, 14},
    {154, 14},
    { 80, 44},
    {  6, 74},
    {154, 74},
  },
    
  {GUI_UI_COLOR14,GUI_BLACK, GUI_UI_COLOR11, GUI_UI_COLOR12}, //aBkColor[4];
  NULL,                                             // pBkBMP
  &bmmark_check,                                    // pCheckedBMP
  0,                                                // MovingIndex
  0,                                                // SelectedIndex
  5,                                                // NumItems
  6,                                                // IconFocusFrameHWidth
  4,                                                // IconFocusFrameVWidth
  {                                                 // PopupWinRECT
       479 - 75,// X0 = Physical X - 75
       166 - 27,// Y0 = Physical Y - 27 
       636,     // X1= X0 + 232
       253,     // Y1= Y1 + 114
    },
  {GUI_UI_COLOR9,GUI_UI_COLOR2},                    // PopupWinBkColor[2]; //Color[0]: Outline, Color[1]: BkColor
  GUI_UI_COLOR11,                                   // PopupWinIconFocusColor;
  
  
};


/*********************************************************************
*
*       Dialog Widget
*/
static const GUI_WIDGET_CREATE_INFO _DialogWindow[] ={
  { WINDOW_CreateIndirect,  NULL, ID_WIN0,  0,   0,  480, 460, FRAMEWIN_CF_MOVEABLE },
};
  
static const GUI_WIDGET_CREATE_INFO _DialogButton0[] ={
  { xBUTTON_CreateIndirect, NULL, ID_BTN0,          12,   9, 470,  36, 0,(I32)&xBUTTON0},
  { DROPDOWN_CreateIndirect,  NULL, ID_DROPDOWN0,  248,   5, 190,  26,  0, 0x0, sizeof(xDROPDOWN_Obj)},
};

/*
static const GUI_WIDGET_CREATE_INFO _DialogButton1[] ={
  { xBUTTON_CreateIndirect, NULL, ID_BTN1,          12,  45, 470,  36, 0,(I32)&xBUTTON1},
  { DROPDOWN_CreateIndirect,  NULL, ID_DROPDOWN1,  248,   5, 190,  26,  0, 0x0, sizeof(xDROPDOWN_Obj)},
};
*/

static const GUI_WIDGET_CREATE_INFO _DialogButton1[] ={
  { xBUTTON_CreateIndirect,   NULL,       ID_BTN1,           12,  45, 470,    36,  0, (I32)&xBUTTON1},
  { BUTTON_CreateIndirect,    NULL,       ID_BTN7,          248,   5, 190,    26,  0,  0x0, sizeof(xIconSelBtn_OBJ) },
};

static const GUI_WIDGET_CREATE_INFO _DialogButton2[] ={
  { xBUTTON_CreateIndirect, NULL, ID_BTN2,          12,  81, 470,  36, 0,(I32)&xBUTTON2},
  { DROPDOWN_CreateIndirect,  NULL, ID_DROPDOWN2,  248,   5, 190,  26,  0, 0x0, sizeof(xDROPDOWN_Obj)},
};

static const GUI_WIDGET_CREATE_INFO _DialogButton3[] ={
  { xBUTTON_CreateIndirect,   NULL, ID_BTN3,        12, 117, 470,  36,  0, (I32)&xBUTTON3},
  { DROPDOWN_CreateIndirect,  NULL, ID_DROPDOWN3,  248,   5, 190,  26,  0, 0x0, sizeof(xDROPDOWN_Obj)},
};

static const GUI_WIDGET_CREATE_INFO _DialogButton4[] ={
  { xBUTTON_CreateIndirect,   NULL, ID_BTN4,        12, 153, 470,  36,  0, (I32)&xBUTTON4},
  { DROPDOWN_CreateIndirect,  NULL, ID_DROPDOWN4,  248,   5, 190,  26,  0, 0x0, sizeof(xDROPDOWN_Obj)},
};

static const GUI_WIDGET_CREATE_INFO _DialogButton5[] ={
  { xBUTTON_CreateIndirect,   NULL, ID_BTN5,        12, 189, 470,  36,  0, (I32)&xBUTTON5},
  { DROPDOWN_CreateIndirect,  NULL, ID_DROPDOWN5,  248,   5, 190,  26,  0, 0x0, sizeof(xDROPDOWN_Obj)},
};

static const GUI_WIDGET_CREATE_INFO _DialogButton6[] ={
  { xBUTTON_CreateIndirect, NULL, ID_BTN6,          12, 225, 470,  36, 0,(I32)&xBUTTON6},
  { DROPDOWN_CreateIndirect,  NULL, ID_DROPDOWN6,  248,   5, 190,  26,  0, 0x0, sizeof(xDROPDOWN_Obj)},
};
  
static const xDIALOGBOX_Obj _DialogArray[] = 
{
  {_DialogWindow,  GUI_COUNTOF(_DialogWindow),  NULL},
  {_DialogButton0, GUI_COUNTOF(_DialogButton0), NULL},
  {_DialogButton1, GUI_COUNTOF(_DialogButton1), NULL},
  {_DialogButton2, GUI_COUNTOF(_DialogButton2), NULL},
  {_DialogButton3, GUI_COUNTOF(_DialogButton3), NULL},
  {_DialogButton4, GUI_COUNTOF(_DialogButton4), NULL},
  {_DialogButton5, GUI_COUNTOF(_DialogButton5), NULL},
  {_DialogButton6, GUI_COUNTOF(_DialogButton6), NULL},
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
/*********************************************************************
*
*       _Win_Callback
*/
static void _Win_Callback(WM_MESSAGE * pMsg)
{
    WM_HWIN hItem;
    WM_HWIN hDlg;
    
    hDlg = pMsg->hWin;
    
    switch (pMsg->MsgId)
    {
      case WM_INIT_DIALOG:
          //hItem = WM_GetDialogItem(hDlg, GUI_ID_MULTIEDIT0);
          //MULTIEDIT_SetText(hItem, "MULTIEDIT widget");
          //MULTIEDIT_SetInsertMode(hItem, 1);
        break;
        
      default:
        WM_DefaultProc(pMsg);
        break;
    }
}


/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
WM_HWIN DisplaySetupWin_Init(WM_HWIN hMultiPage)
{
    WM_HWIN hDialog;
    WM_HWIN hItem;
    int i, Id;
     
    hDialog = xCreateDialogBoxArray(_DialogArray, GUI_COUNTOF(_DialogArray), NULL, WM_UNATTACHED, 0, 0);
    MULTIPAGE_AddPage(hMultiPage, hDialog, "Display Setup");
    DEBUGOUT("DisplaySetupWin_Init(): MULTIPAGE_AddPage(): hDialog:0x%08x\r\n", hDialog);
    
    for( i=0, Id=ID_DROPDOWN0; Id<=ID_DROPDOWN9; Id++)
    {
        hItem = WM_GetDialogItem(hDialog, Id);
        if(hItem)
        {
            const xDROPDOWN_Obj* pDropdownSetting;
            int j;
            
            pDropdownSetting = pDropdownSettingTable[i++];
            DROPDOWN_SetUserData(hItem, pDropdownSetting, sizeof(xDROPDOWN_Obj));
            WM_SetCallback(hItem, xDROPDOWN_Callback);
            DROPDOWN_SetTextAlign(hItem, TEXT_CF_HCENTER | TEXT_CF_VCENTER);
            for(j=0; j< pDropdownSetting->NumItems; j++)
            {
                DROPDOWN_AddString(hItem, pDropdownSetting->paDropDownItems[j].pText);
                DROPDOWN_SetItemDisabled(hItem, j, pDropdownSetting->paDropDownItems[j].State);
                DEBUGOUT("MainTask():DROPDOWN_AddString(%s): hItem: 0x%08x\r\n",  pDropdownSetting->paDropDownItems[j].pText, hItem);
            }
        }
    }
    
    hItem = WM_GetDialogItem(hDialog, ID_BTN7);
    if(hItem)
    {
        WM_SetCallback(hItem, xIconSelBtn_Callback);
        BUTTON_SetUserData(hItem, &xIconSelBtn1 , sizeof(xIconSelBtn_OBJ));
    }
    
    return hDialog;
}
