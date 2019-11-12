#ifndef CONSTANTS_H
#define CONSTANTS_H

#define MAX(a,b) (a) > (b) ? (a):(b)
#define MIN(a,b) (a) < (b) ? (a):(b)

const static int WindowWidth = 300;
const static int WindowMargin = 10;     //边距
const static int WindowLeave = 3;       //隐藏后的剩余空间
const static int TitleHeight = 38;      //Item标题栏高度
const static int StatusBarHeight = 38;  //Item状态栏高度
const static int ItemWidth = WindowWidth - 2 * WindowMargin;
const static int ItemHeight = 200;
const static int ItemMargin = 10;

const static int PixmapWidth = 128;     //图像最大显示宽度
const static int PixmapHeight = 210;    //图像最大显示高度
const static int FileIconWidth = PixmapWidth / 2;
const static int FileIconHeight = PixmapHeight / 2;
const static int PixmapxMargin = 15;
const static int PixmapyMargin = 5;

#endif // CONSTANTS_H
