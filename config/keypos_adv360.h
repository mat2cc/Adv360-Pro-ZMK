/*                                      58 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5   6 │  7   8   9  10  11  12  13 │ │ LT5 LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 13  14  15  16  17  18  19 │ 20  21  22  23  24  25  26 │ │ LM5 LM4 LM3 LM2 LM1 LM0     │     RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 27  28  29  30  31  32  33 │ 34  35  36  37  38  39  40 │ │ LB5 LB4 LB3 LB2 LB1 LB0     │     RB0 RB1 RB2 RB3 RB4 RB5 │
  │ 41  42  43  44  45  46     │     47  48  49  50  51  52 │ │ LF5 LF4 LF3 LF2 LF1 LF0 LEC │ REC RF0 RF1 RF2 RF3 RF4 RF5 │
  │ 50  51  52  53             │         54  55  56  57  58  │LH3 LH2 LH1 LH0 │ RH0 RH1 RH2 RH3 ╭───────────╯
  ╰───────────╮ 
              ╰────────────────┴────────────────╯                         ╰─────────────────┴─────────────────╯             */

#pragma once

#define LT0  6  // left-top row
#define LT1  5
#define LT2  4
#define LT3  3
#define LT4  2
#define LT5  1
#define LT6  0

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4 10
#define RT5 11
#define RT6 12

#define LM0 19  // left-middle row
#define LM1 18
#define LM2 17
#define LM3 16
#define LM4 15
#define LM5 14
#define LM6 13

#define RM0 20  // right-middle row
#define RM1 21
#define RM2 22
#define RM3 23
#define RM4 24
#define RM5 25
#define RM5 26

#define LB0 29  // left-bottom row
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24

#define RB0 30  // right-bottom row
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LF0 41  // left-floor row
#define LF1 40
#define LF2 39
#define LF3 38
#define LF4 37
#define LF5 36

#define LEC 42  // left encoder key
#define REC 43  // right encoder key

#define RF0 44  // right-floor row
#define RF1 45
#define RF2 46
#define RF3 47
#define RF4 48
#define RF5 49

#define LH0 53  // left thumb keys
#define LH1 52
#define LH2 51
#define LH3 50

#define RH0 54  // right thumb keys
#define RH1 55
#define RH2 56
#define RH3 57
