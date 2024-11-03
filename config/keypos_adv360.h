/*                                      74 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────────────────┬────────────────────────────────────────╮ ╭────────────────────────────────────────┬────────────────────────────────────────╮
  │  0   1   2   3   4   5   6             │              7   8   9  10  11  12  13 │ │ LT6 LT5 LT4 LT3 LT2 LT1 LT0            │             RT0 RT1 RT2 RT3 RT4 RT5 RT6│
  │ 13  14  15  16  17  18  19             │             20  21  22  23  24  25  26 │ │ LM6 LM5 LM4 LM3 LM2 LM1 LM0            │             RM0 RM1 RM2 RM3 RM4 RM5 RM6│
  │ 27  28  29  30  31  32  33      34  35 │ 36  37      38  39  40  41  42  43  44 │ │ LB6 LB5 LB4 LB3 LB2 LB1 LB0     LH1 LH0│RH0 RH1      RB0 RB1 RB2 RB3 RB4 RB5 RB6│
  │ 45  46  47  48  49  50              51 │ 52              53  54  55  56  57  58 │ │ LF5 LF4 LF3 LF2 LF1 LF0             LH2│RH2              RF0 RF1 RF2 RF3 RF4 RF5│
  │ 59  60  61  62  63          64  65  66 │ 67  68  69          70  71  72  73  74 │ │ LL4 LL3 LL2 LL1 LL0         LH5 LH4 LH3│RH3 RH4 RH5          LF0 LF1 LF2 LF3 LL4│
  ╰─────────────────────────────────────────────────────────────────────────────────╯ ╰─────────────────────────────────────────────────────────────────────────────────╯
*/


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
#define RM6 26

#define LB0 33  // left-bottom row
#define LB1 32
#define LB2 31
#define LB3 30
#define LB4 29
#define LB5 28
#define LB6 27

#define RB0 38  // right-bottom row
#define RB1 39
#define RB2 40
#define RB3 41
#define RB4 42
#define RB5 43
#define RB6 44

#define LF0 50  // left-floor row
#define LF1 49
#define LF2 48
#define LF3 47
#define LF4 46
#define LF5 45

// #define LEC 42  // left encoder key
// #define REC 43  // right encoder key

#define RF0 53  // right-floor row
#define RF1 54
#define RF2 55
#define RF3 56
#define RF4 57
#define RF5 58

#define LL0 63  // left-last row
#define LL1 62
#define LL2 61
#define LL3 60
#define LL4 59

#define RL0 70  // right-last row
#define RL1 71
#define RL2 72
#define RL3 73
#define RL4 74

#define LH0 35  // left thumb keys
#define LH1 34
#define LH2 51
#define LH3 66
#define LH4 65
#define LH5 64

#define RH0 36  // right thumb keys
#define RH1 37
#define RH2 52
#define RH3 67
#define RH4 68
#define RH5 69
