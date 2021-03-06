//--------------------------------------------------------------------------------
// レイアウト用モールス信号点灯スケッチ
// [morse.h]
// Copyright (c) 2020 Ayanosuke(Maison de DCC)
// https://desktopstation.net/bb/index.php
//
// This software is released under the MIT License.
// http://opensource.org/licenses/mit-license.php
//--------------------------------------------------------------------------------

#ifndef hotal_h
#define hotal_h

char morse[37][6] = {
//   A    B      C      D     E   F      G     H      I    J      K     L //
  "*","*-","-***","-*-*","-**","*","**-*","--*","****","**","*---","-*-","*-**",
//   M    N    O     P      Q      R     S     T   U     V      W     X //
  "--","-*","---","*--*","--*-","*-*","***","-","**-","***-","*--","-**-",
//   Y      Z //
  "-*--","--**",
//   1       2       3       4       5       6       7       8       9       0 //
  "*----","**---","***--","****-","*****","-****","--***","---**","----*","-----"};

//https://morse.ariafloat.com/
//https://www.youtube.com/watch?v=1UprvTNEUxI
//みなさま　かいぜうじえいたい　へ　ようこそ
char minasama[100]="**-*- *-* -*-*- -**- *-** *- *---* ** **- --*-* ** -*--- *- -* *- * -- **- ---- ---*";

#endif
