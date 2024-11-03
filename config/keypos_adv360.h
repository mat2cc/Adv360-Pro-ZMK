/*                                      74 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────────────────┬────────────────────────────────────────╮ ╭────────────────────────────────────────┬────────────────────────────────────────╮
  │  0   1   2   3   4   5   6             │              7   8   9  10  11  12  13 │ │ LT6 LT5 LT4 LT3 LT2 LT1 LT0            │             RT0 RT1 RT2 RT3 RT4 RT5 RT6│
  │ 14  15  16  17  18  19  20             │             21  22  23  24  25  26  27 │ │ LM6 LM5 LM4 LM3 LM2 LM1 LM0            │             RM0 RM1 RM2 RM3 RM4 RM5 RM6│
  │ 28  29  30  31  32  33  34      35  36 │ 37  38      39  40  41  42  43  44  45 │ │ LB6 LB5 LB4 LB3 LB2 LB1 LB0     LH1 LH0│RH0 RH1      RB0 RB1 RB2 RB3 RB4 RB5 RB6│
  │ 46  47  48  49  50  51              52 │ 53              54  55  56  57  58  59 │ │ LF5 LF4 LF3 LF2 LF1 LF0             LH2│RH2              RF0 RF1 RF2 RF3 RF4 RF5│
  │ 60  61  62  63  64          65  66  67 │ 68  69  70          71  72  73  74  75 │ │ LL4 LL3 LL2 LL1 LL0         LH5 LH4 LH3│RH3 RH4 RH5          LF0 LF1 LF2 LF3 LL4│
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

#define RT0  7  // right-top row
#define RT1  8
#define RT2  9
#define RT3 10
#define RT4 11
#define RT5 12
#define RT6 13

#define LM0 20  // left-middle row
#define LM1 19
#define LM2 18
#define LM3 17
#define LM4 16
#define LM5 15
#define LM6 14

#define RM0 21  // right-middle row
#define RM1 22
#define RM2 23
#define RM3 24
#define RM4 25
#define RM5 26
#define RM6 27

#define LB0 34  // left-bottom row
#define LB1 33
#define LB2 32
#define LB3 31
#define LB4 30
#define LB5 29
#define LB6 28

#define RB0 39  // right-bottom row
#define RB1 40
#define RB2 41
#define RB3 42
#define RB4 43
#define RB5 44
#define RB6 45

#define LF0 51  // left-floor row
#define LF1 50
#define LF2 49
#define LF3 48
#define LF4 47
#define LF5 46

#define RF0 54  // right-floor row
#define RF1 55
#define RF2 56
#define RF3 57
#define RF4 58
#define RF5 59

#define LL0 64  // left-last row
#define LL1 63
#define LL2 62
#define LL3 61
#define LL4 60

#define RL0 71  // right-last row
#define RL1 72
#define RL2 73
#define RL3 74
#define RL4 75

#define LH0 36  // left thumb keys
#define LH1 35
#define LH2 52
#define LH3 67
#define LH4 66
#define LH5 65

#define RH0 37  // right thumb keys
#define RH1 38
#define RH2 53
#define RH3 68
#define RH4 69
#define RH5 70
