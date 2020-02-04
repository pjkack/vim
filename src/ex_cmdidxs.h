/* Automatically generated code by create_cmdidxs.vim
 *
 * Table giving the index of the first command in cmdnames[] to lookup
 * based on the first letter of a command.
 */
static const unsigned short cmdidxs1[26] =
{
  /* a */ 0,
  /* b */ 19,
  /* c */ 53,
  /* d */ 120,
  /* e */ 144,
  /* f */ 167,
  /* g */ 183,
  /* h */ 189,
  /* i */ 198,
  /* j */ 217,
  /* k */ 219,
  /* l */ 224,
  /* m */ 287,
  /* n */ 305,
  /* o */ 325,
  /* p */ 337,
  /* q */ 376,
  /* r */ 379,
  /* s */ 399,
  /* t */ 468,
  /* u */ 513,
  /* v */ 524,
  /* w */ 543,
  /* x */ 557,
  /* y */ 567,
  /* z */ 568
};

/*
 * Table giving the index of the first command in cmdnames[] to lookup
 * based on the first 2 letters of a command.
 * Values in cmdidxs2[c1][c2] are relative to cmdidxs1[c1] so that they
 * fit in a byte.
 */
static const unsigned char cmdidxs2[26][26] =
{ /*         a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z */
  /* a */ {  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  5,  6,  0,  0,  0,  7, 15,  0, 16,  0,  0,  0,  0,  0 },
  /* b */ {  2,  0,  0,  4,  5,  7,  0,  0,  0,  0,  0,  8,  9, 10, 11, 23,  0, 24,  0,  0,  0,  0, 33,  0,  0,  0 },
  /* c */ {  3, 12, 16, 18, 20, 22, 25,  0,  0,  0,  0, 33, 37, 40, 46, 56, 58, 59, 60, 66, 62,  0, 65,  0,  0,  0 },
  /* d */ {  0,  0,  0,  0,  0,  0,  0,  0,  7, 17,  0, 18,  0,  0, 19,  0,  0, 21, 22,  0,  0,  0,  0,  0,  0,  0 },
  /* e */ {  1,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  7,  9, 10,  0,  0,  0,  0,  0,  0,  0, 17,  0, 18,  0,  0 },
  /* f */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,  0,  0,  0,  0,  0, 15,  0,  0,  0,  0,  0 },
  /* g */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  2,  0,  0,  4,  5,  0,  0,  0,  0 },
  /* h */ {  5,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* i */ {  1,  0,  0,  0,  0,  3,  0,  0,  0,  4,  0,  5,  6,  0,  0,  0,  0,  0, 14,  0, 16,  0,  0,  0,  0,  0 },
  /* j */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0 },
  /* k */ {  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* l */ {  3, 11, 15, 19, 20, 24, 27, 32,  0,  0,  0, 34, 37, 40, 44, 50,  0, 52, 62, 53, 54, 58, 60,  0,  0,  0 },
  /* m */ {  1,  0,  0,  0,  7,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16 },
  /* n */ {  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  8, 10,  0,  0,  0,  0,  0, 17,  0,  0,  0,  0,  0 },
  /* o */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  5,  0,  0,  0,  0,  0,  0,  9,  0, 11,  0,  0,  0 },
  /* p */ {  1,  0,  3,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  9,  0,  0, 16, 17, 26,  0, 27,  0, 28,  0 },
  /* q */ {  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* r */ {  0,  0,  0,  0,  0,  0,  0,  0, 12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14, 19,  0,  0,  0,  0 },
  /* s */ {  2,  6, 15,  0, 19, 23,  0, 25, 26,  0,  0, 29, 31, 35, 39, 41,  0, 50,  0, 51,  0, 63, 64,  0, 65,  0 },
  /* t */ {  2,  0, 19,  0, 24, 26,  0, 27,  0, 28,  0, 29, 33, 36, 38, 39,  0, 40, 42,  0, 43,  0,  0,  0,  0,  0 },
  /* u */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* v */ {  0,  0,  0,  0,  1,  0,  0,  0,  4,  0,  0,  0, 10, 13,  0,  0,  0,  0, 16,  0, 17,  0,  0,  0,  0,  0 },
  /* w */ {  2,  0,  0,  0,  0,  0,  0,  3,  4,  0,  0,  0,  0,  8,  0,  9, 10,  0,  0,  0, 12, 13,  0,  0,  0,  0 },
  /* x */ {  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  5,  0,  0,  0,  7,  0,  0,  8,  0,  0,  0,  0,  0 },
  /* y */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* z */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 }
};

static const int command_count = 582;
