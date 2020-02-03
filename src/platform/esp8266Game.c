/*settings*{"name":"esprogue","author":"Corax","image":[240,240,240,240,240,240,240,240,240,240,240,240,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,8,0,0,15,240,0,0,0,0,0,0,0,8,0,0,0,0,0,153,153,153,153,153,153,152,0,0,159,240,9,25,25,17,17,17,17,24,168,168,144,0,241,145,145,17,28,204,193,24,136,136,159,240,15,17,17,255,17,17,17,24,168,168,144,0,0,255,255,255,255,255,255,250,0,0,159,240,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,10,0,0,15,240,0,0,0,0,0,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,15,15,15]}*/

#define ofs_BLANK 0,
#define ofs_TIL_a 1
#define ofs_TIL_b 2
#define ofs_TIL_c 4
#define ofs_TIL_d 5
#define ofs_SPR_A 6
#define ofs_SPR_a 8
#define ofs_SPR_b 10
#define ofs_ITM_0 11

#define DIALOG_ID_SPR_a 1

#define SPRITE_REC_SIZE 4
#define SPRITE_OFS_TILE 0
#define SPRITE_OFS_X 1
#define SPRITE_OFS_Y 2
#define SPRITE_OFS_DLG 3

#define ROOM_REC_SIZE 7
#define ROOM_OFS_MAP 0
#define ROOM_OFS_SPR_COUNT 1
#define ROOM_OFS_SPR_DATA 2
#define ROOM_OFS_EXIT_COUNT 3
#define ROOM_OFS_EXIT_DATA 4
#define ROOM_OFS_END_COUNT 5
#define ROOM_OFS_END_DATA 6

int playerSpriteStart[] = { ofs_SPR_A, 4, 4 };

int room_0_sprites[] = {
  ofs_SPR_a, 8, 12, DIALOG_ID_SPR_a,
  ofs_SPR_b, 10, 6, 0
};

int sprites_test[] = {room_0_sprites};

char room_0[] = {
  0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0,
  0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0,
  0, 1, 2, 2, 2, 0, 0, 0, 0, 0, 0, 2, 2, 2, 1, 0,
  0, 1, 2, 2, 2, 0, 0, 0, 0, 0, 0, 2, 2, 2, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
  0, 1, 2, 2, 2, 0, 0, 0, 0, 0, 0, 2, 2, 2, 1, 0,
  0, 1, 2, 2, 2, 0, 0, 0, 0, 0, 0, 2, 2, 2, 1, 0,
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

char room_1[] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 2, 2, 2, 2, 2, 0, 0, 2, 2, 2, 2, 0, 0, 0,
  0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 2, 0, 2, 0, 0,
  0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
  0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
  4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
  1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0
};

int rooms[] = {
  room_0, 2, room_0_sprites, 0, 0, 0, 0,
  room_1, 0, 0, 0, 0, 0, 0
};

char image_BLANK_0[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
char image_TIL_a_0[] = { 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11 };
char image_TIL_b_0[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x11, 0x00 };
char image_TIL_b_1[] = { 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x01, 0x10 };
char image_TIL_c_0[] = { 0x00, 0x11, 0x11, 0x10, 0x01, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x01, 0x00, 0x11, 0x11, 0x10 };
char image_TIL_d_0[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x01, 0x11, 0x01, 0x00, 0x01, 0x10, 0x01, 0x10, 0x11, 0x11, 0x01, 0x10, 0x11, 0x00, 0x00, 0x00, 0x00 };
char image_SPR_A_0[] = { 0x00, 0x02, 0x20, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x22, 0x22, 0x00, 0x02, 0x22, 0x22, 0x20, 0x20, 0x22, 0x22, 0x02, 0x00, 0x20, 0x02, 0x00, 0x00, 0x20, 0x00, 0x00 };
char image_SPR_A_1[] = { 0x00, 0x02, 0x20, 0x00, 0x00, 0x02, 0x20, 0x00, 0x20, 0x02, 0x20, 0x02, 0x02, 0x22, 0x22, 0x20, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00 };
char image_SPR_a2_0[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x22, 0x00, 0x02, 0x02, 0x22, 0x00, 0x20, 0x02, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x00, 0x20, 0x02, 0x00 };
char image_SPR_a2_1[] = { 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x02, 0x22, 0x00, 0x02, 0x02, 0x22, 0x00, 0x02, 0x02, 0x22, 0x00, 0x20, 0x00, 0x22, 0x22, 0x00, 0x00, 0x22, 0x22, 0x00, 0x02, 0x00, 0x00, 0x20 };
char image_SPR_b_0[] = { 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x02 };
char image_ITM_0_0[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x00, 0x01, 0x10, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00 };
    
int images[] = { 
  image_BLANK_0,
  image_TIL_a_0,
  image_TIL_b_0,
  image_TIL_b_1,
  image_TIL_c_0,
  image_TIL_d_0,
  image_SPR_A_0,
  image_SPR_A_1,
  image_SPR_a2_0,
  image_SPR_a2_1,
  image_SPR_b_0,
  image_ITM_0_0
}

//16x16
char wall0[] = {0x99,0x99,0x99,0x99,0xbb,0xb9,0x99,0x99,0xaa,0xa9,0xaa,0x8a,0xaa,0xba,0x88,0xa9,0xaa,0xa9,0xaa,0xa8,0xaa,0x9a,0xaa,0xa9,0x99,0x99,0x99,0xaa,0xa9,0x99,0x99,0x99,0x9a,0xaa,0xab,0xbb,0xbb,0xaa,0xa9,0x99,0x9a,0x8a,0xaa,0x99,0xaa,0xaa,0xa9,0x99,0xb9,0x99,0x99,0x99,0x99,0x99,0x9b,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0x8a,0x89,0x8a,0x8a,0x8a,0xca,0x88,0x89,0x9c,0x9c,0x9c,0x9c,0x9c,0x9c,0x9c,0x9c,0xcb,0xca,0x8a,0x8a,0xc9,0xca,0x8a,0xc9,0x9c,0x9c,0x9c,0x9c,0x9c,0x9c,0x9c,0x9c,0x8a,0xc9,0xc9,0xc9,0xc9,0xca,0x89,0xc9,0x9c,0x9c,0xa8,0xa8,0xac,0x9c,0x9c,0xa8,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0x69,0xcb,0xc6,0x96,0x96,0xcb,0xcb,0xc6,0x96};
char wall1[] = {0x99,0x99,0x99,0x99,0xbb,0xb9,0x99,0x99,0xaa,0xa9,0xaa,0x8a,0xaa,0xba,0x88,0xa9,0xaa,0xa9,0xaa,0xa8,0xaa,0x9a,0xaa,0xa9,0x99,0x99,0x99,0xaa,0xa9,0x99,0x99,0x99,0x9a,0xaa,0xab,0xbb,0xbb,0xaa,0xa9,0x99,0x9a,0x8a,0xaa,0x99,0xaa,0xaa,0xa9,0x99,0xb9,0x99,0x99,0x99,0x99,0x99,0x9b,0xbb,0xaa,0xa9,0xaa,0xa8,0x89,0x9a,0xaa,0xa9,0xaa,0xa9,0xba,0xaa,0xaa,0x9a,0xa8,0xa9,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x9b,0xaa,0xaa,0xaa,0x99,0xba,0xaa,0x99,0x9a,0xaa,0xaa,0xab,0xb9,0xaa,0xaa,0x99,0x98,0x89,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0xa9,0xaa,0xa9,0x99,0x9b,0xa8,0xa8,0xaa,0xa9,0xa8,0xaa,0x8a,0x99,0xaa,0xaa,0xab,0x99,0x99,0xaa,0xaa,0xa9,0x99};
char floor[] = {0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB,0xBB};
char door[] = {0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x97,0x77,0x7f,0x8f,0x8f,0x8f,0x8f,0x8f,0x97,0xaa,0x78,0xf8,0xf8,0xf8,0xf8,0xf8,0x7a,0xaa,0x7c,0x8c,0x8c,0x8c,0x8c,0x8c,0x97,0xaa,0x77,0x77,0x78,0xc8,0xc8,0xc8,0x7a,0xaa,0x7c,0xaa,0x7c,0xac,0xac,0xac,0x97,0xaa,0x7a,0xaa,0x7a,0xca,0xca,0xca,0x7a,0xaa,0x7c,0xaa,0x77,0x77,0x8b,0xab,0x97,0xaa,0x7a,0xaa,0x7c,0xaa,0x7c,0xbc,0x7a,0xaa,0x7c,0xaa,0x7a,0xaa,0x8b,0xcb,0x97,0xaa,0x7a,0xaa,0x7c,0xaa,0x78,0x88,0x7a,0xaa,0x7c,0xaa,0x7a,0xaa,0x8c,0xab,0x97,0xaa,0x7a,0xaa,0x7c,0xaa,0x7a,0xba,0x7a,0xaa,0x7a,0xaa,0x7a,0xaa,0x8c,0xab,0x97,0xaa,0x7c,0xaa,0x7c,0xaa,0x7a,0xba,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99};
//14x16
char hero0[] = {0x0,0x3,0x0,0x33,0x36,0x0,0x30,0x0,0x3,0x3,0x8f,0xcb,0x60,0x30,0x0,0x0,0x38,0xff,0xfc,0xb6,0x0,0x0,0x0,0x8f,0xbf,0xb9,0xcb,0x0,0x0,0x1,0x38,0xff,0xfc,0x9b,0x0,0x0,0x16,0x13,0x8f,0x33,0x33,0x6b,0x0,0x16,0x18,0xf8,0x36,0x66,0x36,0x0,0x16,0x18,0x8f,0x36,0x66,0x6b,0x0,0x16,0x18,0xf8,0x36,0x66,0x36,0x0,0x16,0x1f,0xff,0x36,0x66,0x6b,0x7,0x77,0x77,0xff,0x36,0x66,0x36,0x0,0x33,0x68,0xbf,0xb3,0x63,0x60,0x0,0x33,0x68,0xfb,0xfb,0x36,0xb0,0x0,0x7,0x8,0xb0,0x0,0xb,0xb0,0x0,0x0,0x3,0x60,0x0,0x3,0x60,0x0,0x0,0x33,0x36,0x0,0x0,0x0};
char hero1[] = {0x0,0x3,0x0,0x33,0x36,0x0,0x30,0x0,0x3,0x3,0x8f,0xcb,0x60,0x30,0x0,0x0,0x38,0xff,0xfc,0xb6,0x0,0x0,0x1,0x8f,0xbf,0xb9,0xcb,0x0,0x0,0x16,0x18,0xff,0xfc,0x9b,0x0,0x0,0x16,0x13,0x8f,0xc9,0xcb,0x0,0x0,0x16,0x18,0xf8,0x33,0x33,0xb6,0x0,0x16,0x18,0x8f,0x36,0x66,0x3b,0x0,0x16,0x18,0xf8,0x36,0x66,0xb6,0x7,0x77,0x77,0xff,0x36,0x66,0x3b,0x0,0x33,0x68,0xff,0x36,0x66,0xb6,0x0,0x33,0x68,0xbf,0x36,0x66,0x30,0x0,0x7,0x68,0xfb,0xf3,0x63,0xb0,0x0,0x0,0x8,0xb0,0x0,0x3b,0xb0,0x0,0x0,0x3,0x60,0x0,0x3,0x60,0x0,0x0,0x0,0x0,0x0,0x33,0x36};
int hero[] = {hero0, hero1};
//10x16
char goblin0[] = {0xb5,0xbb,0xbb,0xdb,0x0,0xb,0x55,0x5d,0xb0,0x0,0xb,0x25,0x2d,0xb0,0x0,0x20,0xb5,0x5b,0x0,0x0,0x22,0xb,0x5b,0x0,0x0,0x30,0x0,0xbd,0xb0,0x0,0x95,0x5b,0x55,0xdb,0xb0,0x9b,0xb5,0x55,0x55,0xdb,0x30,0xb9,0x55,0x5d,0xbd,0x30,0xb,0xbb,0x5b,0xbd,0x30,0x0,0xb,0x5b,0x0,0x30,0x0,0xb5,0x5d,0xb0,0x30,0xb,0x5b,0xbb,0xdb,0x30,0xb,0x5b,0xb,0xdb,0x0,0xb,0x5b,0x0,0xb0,0x0,0xb,0x9b,0x0,0x0};
char goblin1[] = {0x5,0xbb,0xbb,0xd0,0x0,0xb5,0x55,0x5d,0xdb,0x0,0xb,0x25,0x2d,0xb0,0x0,0xb,0x55,0x5b,0x0,0x0,0x20,0xbb,0x5b,0x0,0x0,0x22,0x0,0xbd,0xb0,0xb,0x3b,0x5b,0x55,0xdb,0xbd,0x95,0xb5,0x55,0x55,0xdb,0x3b,0xb9,0x55,0x5d,0xb0,0x30,0xb,0xbb,0x5b,0xb0,0x30,0x0,0xb,0x5b,0x0,0x30,0x0,0xb5,0x5d,0xb0,0x30,0xb,0x5b,0xbb,0xdb,0x30,0xb,0x5b,0xb,0xdb,0x30,0x0,0xb0,0xb,0xdb,0x0,0x0,0x0,0xb,0x9b};
int goblin[] = {goblin0, goblin1};
//10x16
char bat0[] = {0x6b,0xb,0x0,0xb0,0xb6,0x6b,0xb6,0xbb,0x6b,0xb6,0x66,0xb6,0x66,0x6b,0x66,0x66,0xb2,0x66,0x2b,0x66,0x66,0x6b,0x69,0xb6,0x66,0xb6,0x66,0x96,0xc6,0x6b,0x6,0x69,0x69,0x66,0x60,0xb,0x66,0x96,0xc6,0xb0,0x0,0xb9,0x69,0x6b,0x0,0x0,0x6,0x96,0xc0,0x0,0x0,0x6,0x0,0x60,0x0,0x0,0x6,0x0,0x60,0x0,0xb,0xb6,0xb0,0x60,0xb0,0xb2,0x62,0x2b,0x6b,0x7b,0xb,0xbb,0x22,0x26,0x77,0x0,0x0,0xbb,0xbb,0x7b};
char bat1[] = {0x0,0xb6,0xbb,0x6b,0x0,0x0,0xb6,0x66,0x6b,0x0,0x0,0xb2,0x66,0x2b,0x0,0xb,0x6b,0x69,0xb6,0xb0,0xb6,0x66,0x96,0xc6,0x6b,0xb6,0x69,0x69,0x66,0x6b,0x66,0x66,0x96,0xc6,0x66,0x66,0x69,0x69,0x66,0x66,0x66,0xb6,0x96,0xcb,0x66,0x6b,0x6,0x0,0x60,0xb6,0xb0,0x6,0x0,0x60,0xb,0x0,0x6,0x0,0x60,0xb0,0xb,0xb6,0xbb,0x6b,0x7b,0xb2,0x62,0x22,0x26,0x77,0xb,0xbb,0xbb,0xbb,0x7b,0x0,0x0,0x0,0x0,0xb0};
int bat[] = {bat0, bat1};
//10x16
char snake0[] = {0x0,0xb,0xbb,0x0,0x0,0x0,0xb5,0x55,0xbb,0x0,0xb,0x5b,0xbb,0x52,0xb0,0xb5,0xb0,0xb,0x25,0xb0,0xb5,0xb0,0x0,0xbb,0x0,0xb5,0xb0,0x0,0x0,0x0,0xb5,0xb0,0x0,0x0,0x0,0xb,0x5b,0xbb,0x0,0x0,0x0,0xb5,0x55,0xb0,0x0,0x0,0xb,0xbb,0x5b,0x0,0x0,0x0,0x0,0xb5,0xb0,0x0,0x0,0x0,0xb5,0xb0,0x0,0xbb,0xbb,0x5b,0x0,0xb,0x55,0x55,0xb0,0xb0,0xbd,0xbb,0xbb,0xbb,0xdb,0xb,0xdd,0xdd,0xdd,0xb0};
char snake1[] = {0x0,0x0,0xb,0xbb,0x0,0x0,0x0,0xb5,0x55,0xb0,0x0,0xb,0x5b,0x55,0x5b,0x0,0xb5,0xbb,0x25,0x2b,0xb,0x5b,0xb,0x55,0x5b,0xb,0x5b,0x0,0xb6,0xb0,0xb,0x5b,0x0,0x6,0x0,0xb,0x5b,0xb0,0x60,0x60,0x0,0xb5,0x5b,0x0,0x0,0x0,0xb,0xb5,0xb0,0x0,0x0,0x0,0xb,0x5b,0x0,0x0,0x0,0xb,0x5b,0x0,0x0,0xbb,0xbb,0x5b,0x0,0xb,0x55,0x55,0xb0,0xb0,0xbd,0xbb,0xbb,0xbb,0xdb,0xb,0xdd,0xdd,0xdd,0xb0};  
int snake[] = {snake0, snake1};
//32x16
char gui[] = {0x6,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x60,0x62,0x26,0x22,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x62,0x22,0x22,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x62,0x22,0x22,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x22,0x26,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x62,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66, 0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x61,0xc6,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x1c,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x61,0x61,0xc6,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x1c,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x61,0x61,0xc6,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x6,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x60};
//4x55
char guichr[] = {0x11,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x11,0x16,0x66,0x16,0x66,0x16,0x66,0x16,0x66,0x16,0x66,0x16,0x11,0x16,0x66,0x16,0x11,0x16,0x16,0x66,0x11,0x16,0x11,0x16,0x66,0x16,0x61,0x16,0x66,0x16,0x11,0x16,0x16,0x16,0x16,0x16,0x11,0x16,0x66,0x16,0x66,0x16,0x11,0x16,0x16,0x66,0x11,0x16,0x66,0x16,0x11,0x16,0x11,0x16,0x16,0x66,0x11,0x16,0x16,0x16,0x11,0x16,0x11,0x16,0x66,0x16,0x66,0x16,0x66,0x16,0x66,0x16,0x11,0x16,0x16,0x16,0x11,0x16,0x16,0x16,0x11,0x16,0x11,0x16,0x16,0x16,0x11,0x16,0x66,0x16,0x11,0x16,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66};
//6x17
char guihpoison[] = {0x66,0x66,0x66,0x66,0x87,0x66,0x62,0x22,0xa6,0x62,0x22,0xa6,0x66,0x66,0x66,0x66,0x87,0x66,0x62,0x22,0xa6,0x62,0x22,0xa6,0x66,0x66,0x66,0x66,0x87,0x66,0x62,0x22,0xa6,0x62,0x22,0xa6,0x66,0x66,0x66,0x66,0x87,0x66,0x62,0x22,0xa6,0x62,0x22,0xa6,0x66,0x66,0x66};
//64x32
char startscreen[] = {0x54,00,00,00,0x40,00,0x20,0x2a,0xa8,00,00,00,0xa3,0xf8,0x50,0x15,0x50,00,00,00,0xa4,0x54,0x50,0xa,0xa0,0x1,0x10,0x40,0xa8,0x2a,0x50,0x5,0x45,0x80,0xe3,0x80,0x90,0x15,0x50,0x2,0xa2,0x7,0xff,0xe0,0x40,0x2,0x90,0x5,0x42,0x6,00,0x60,0x20,0x1,0x60,0x2,0x81,0x3d,00,0xa8,0x23,0xba,0xc0,0x1,0x4b,0xc4,0x9d,0x30,0x23,0x19,0x80,0x2,0x84,0x25,0x62,0xb0,0x20,0x2,0x80,0x1,0x4,0x24,0x54,0xac,0xa0,0x1,0x60,00,0xc,0x5f,0x2c,0xf1,0x50,0x3f,0xfc,00,0x2,0xf4,0xbb,0x21,0x2c,0x20,0x2c,00,0x1,0xd,0x7d,0xb1,0x2b,0xe0,0x14,00,0x1,0xd,0xbe,0xad,0x2c,0x20,0x2c,00,00,0xf5,0x7d,0xb1,0x28,0x20,0x1c,00,0xb,0xdd,0xbe,0xb1,0x2c,0x20,0x24,00,0x4,0x25,0x7f,0x2d,0x28,0x20,0x1c,00,0x4,0x25,0xbd,0xb1,0x2c,0x20,0x2c,00,0x4,0x26,0x7e,0x61,0x28,0x20,0x14,00,0xb,0x5d,0x4a,0xa1,0x2c,0x20,0x2c,00,00,0xf4,0xbd,0x27,0xff,0xe0,0x1c,00,0x81,0xd,00,0xa8,0x4,0x20,0x24,0x1,0x42,0xe,00,0x62,0x14,0x10,0x18,0x2,0x81,0xf7,0xff,0xe2,0x34,0x8,0x18,0x1,0x40,0x3,0x6d,0xa2,0x14,0xbc,0x28,0x2,0xa0,0x25,0x55,0x52,0x35,0x43,0xd8,0x5,0x40,0x8a,0xaa,0xa1,0xe4,0x81,0x28,0x2,0xa2,0x24,0x92,0x49,0x49,0x81,0x18,0x5,0x50,00,00,00,0x88,0x81,0x28,0xa,0xaa,00,00,00,0x31,0x41,0x18,0x55,0x55,00,00,00,0x7f,0xe0,0xf0,0xaa};
//64x24
char endscreen[] = {00,00,00,00,00,0x3,0x80,00,00,00,00,00,00,0x4,0x40,00,00,00,00,00,00,0x2,0x80,00,00,00,00,00,00,0x2,0x80,00,00,00,00,00,00,0x2,0x80,00,00,00,00,00,00,0x2,0x80,00,00,0x7f,0xc7,0xff,0xf3,0xfe,0x80,00,00,0xaa,0xa4,0x4,0x12,0x2,0x80,00,0x1,0x55,0x54,00,0xa,0x2,0x80,0xe0,0x2,0xa8,0x8,00,0x4,0x2,0xff,0x10,0x5,0x40,00,00,00,0x2,0xa4,0x90,0x8,00,0x3,0xfc,0xff,0xfa,0x92,0x48,0x4,00,00,00,00,0x2,0xa4,0x90,0x2,00,00,00,00,0x2,0xff,0x10,0x1,0x2,00,00,00,0x2,0x80,0xe0,00,0x85,0x4,0x3,00,0x42,0x80,00,00,0x7d,0xff,0xfc,0xff,0xfe,0x80,00,00,00,00,00,00,0x2,0x80,00,00,00,00,00,00,0x2,0x80,00,00,00,00,00,00,0x2,0x80,00,00,00,00,00,00,0x2,0x80,00,00,00,00,00,00,0x4,0x40,00,00,00,00,00,00,0x3,0x80,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00};

char s0[] = "s:d=4,o=5,b=125:16d6,16p,16d6,16p,16d6,16p,8d6,16g,8p,16d6,16e6,8f6,16p,8f6,16p,16e6,16p,8e6,d6,8p,16d6,16p,16d6,16p,16d6,16p,8d6,16g,8p,16d6,16e6,8f6,16p,8f6,16p,16e6,16p,8e6,8d6,8p,c6,8a,p,16g,16a,a#,16c6,8a#,8a,8g,8f,8f,16a,2g";
char s1[] = "p:d=4,o=5,b=140:2c6,2d6,d#.6,2f6,8p,2c6,2d6,d#.6,f6,f6,8f6,2c6,2d6,d#.6,2f6,8p,2c6,2d6,d#.6,f6,f6,8g#,1d6,8p,16d.6,32p,16d.6,32p,16d.6,32p,2d6";
char s2[] = "z:d=4,o=5,b=160:8f6,8g6,8f6,8e6";

int maze[441];
char stack[441];
char stackpoint = 0;
int x,y,offsetx,offsety,i,j,isDoor,isMaze,cadr,key,prevkey,level;
int health,maxhealth,attack,block,shield,sword,armor,hpoison,gold;
char shieldname[9];
char swordname[9];
char armorname[9];
char newname[9];
char generate = 1;
int s[4];
//length 123
char names[] = "bagbilbobbomboncamcapcedcogcobdoddogdotelmennfarfulgonhamhaljacjasjoclaclillobludmadmagmanmaymermulnagneloldriprobsamtaytom";



int currentLevel = 0;
int playerSprite[SPRITE_REC_SIZE];

int currentDialog = 0;


void delay(int t){
  settimer(0, t);
  while(gettimer(0) != 0){};
}

void fRect(int rx1, int ry1, int rx2, int ry2){
  int ri;
  for(ri = ry1; ri < ry2; ri++)
  line(rx1, ri, rx2, ri);
}

void chartosprite(int x, int y, int n){
  int i,j;
  for(i = 0; i < 2; i++)
    for(j = 0; j < 5; j++)
      gui[x + i + (y + j) * 16] = guichr[n * 10 + i + j * 2];
}

void printtosprite(int x, int y, int n){
  int i;
  for(i = 4; i >= 0; i--){
    chartosprite(x + i * 2, y, n % 10); 
    n = n / 10;
  }
}

char randomCell(){
  char n = random(3);
  if(x == 1)
    s[2] = 1;
  else
    s[2] = maze[x - 2 + y * 21];
  if(x == 19)
    s[0] = 1;
  else
    s[0] = maze[x + 2 + y * 21];
  if(y == 1)
    s[1] = 1;
  else
    s[1] = maze[x + (y - 2) * 21];
  if(y == 19)
    s[3] = 1;
  else
    s[3] = maze[x + (y + 2) * 21];
  if(s[n] != 0){
    i = 8;
    while(i){
      n++;
      if(n > 3)
        n = 0;
      if(s[n] == 0)
        return n;
      i--;
    }
  }
  else
    return n;
  return 4;
}

void nextCell(){
  char n = randomCell();
  if(n == 0){
    x++;
    maze[x + y * 21] = floor;
    x++;
    maze[x + y * 21] = floor;
  }
  else if(n == 1){
    y--;
    maze[x + y * 21] = floor;
    y--;
    maze[x + y * 21] = floor;
  }
  else if(n == 2){
    x--;
    maze[x + y * 21] = floor;
    x--;
    maze[x + y * 21] = floor;
  }
  else if(n == 3){
    y++;
    maze[x + y * 21] = floor;
    y++;
    maze[x + y * 21] = floor;
  }
  if(n == 4){
    if(isDoor){
      maze[x + y * 21] = door;
      isDoor = 0;
    }
    if(stackpoint < 2){
      generate = 0;
      return;
    }
    stackpoint--;
    y = stack[stackpoint];
    stackpoint--;
    x = stack[stackpoint];
  }
  else{
    stack[stackpoint] = x;
    stackpoint++;
    stack[stackpoint] = y;
    stackpoint++;
  }
}

void generateMaze(){
  int r;
  isDoor = 1;
  for(x = 0; x < 21; x++){
    for(y = 0; y < 21; y++){
      if(((x + 1) % 2 == 0) & ((y + 1) % 2 == 0))
        maze[x + y * 21] = 0;
      else
        maze[x + y * 21] = wall1;
    }
  }
  x = 1;
  y = 1;
  maze[x + y * 21] = floor;
  while(generate)
    nextCell();
  for(x = 1; x < 20; x++){
    for(y = 0; y < 20; y++){
      if((maze[x + y * 21] == wall1) && (maze[x + (y + 1) * 21] == floor || maze[x + (y + 1) * 21] == door)){
        maze[x + y * 21] = wall0;
      }
    }
  }
  generate = 1;
  isMaze = 1;
  x = 1;
  y = 1;
  offsety = 0;
  offsetx = 0;
  j = 2;
  for(i = 0; i < 100; i++){
    r = 23 + random(397);
    if(maze[r] == floor){
      putsprite(j, (r % 21) * 16 + 3, (r / 21) * 16);
      spritesetvalue(j, S_LIVES, level + random(1));
      j++;
      if(j == 11)
        return;
    }
  }
}

void nextCadr(){
  int sx,sy;
  sx = spritegetvalue(1, S_X);
  sy = spritegetvalue(1, S_Y);
  if(gettimer(0) == 0){
    settimer(0, 300);
    cadr = 1 - cadr;
    
    // Hero sprite
//    getsprite(1, hero[cadr]);
    getsprite(1, images[cadr + ofs_SPR_A]);
  }
  if(sx > 64 && offsetx >= (-208)){
    offsetx -= 2;
    scroll(2);
  }
  else if(sx < 48 && offsetx < (-4)){
    offsetx += 2;
    scroll(0);
  }
  else if(sy > 64 && offsety >= (-210)){
    offsety -= 2;
    scroll(1);
    scroll(1);
  }
  else if(sy < 48 && offsety < (-6)){
    offsety += 2;
    scroll(3);
    scroll(3);
  }
}

void init(){
  setbgcolor(0);
  setcolor(9);
  clearscreen();
  setimagesize(1);

  gotoxy(4,11);
//  printf("Press any key to start the game.");

  delay(1000);
//  while(getkey() == 0){}
  
  // Hero sprite
  getsprite(1, hero1);
  spritesetvalue(1, S_WIDTH, 8);
  spritesetvalue(1, S_HEIGHT,8);
  putsprite(1, 17, 16);
  
  loadtile(maze, 8, 8, 16, 16);

  health = 10;
  maxhealth = 10;
  attack = 1;
  block = 0;
  shield = 0;
  sword = 0;
  armor = 0;
  hpoison = 4;
  level = 1;
}

void endGame(){
  loadrtttl(s0,1);
  playrtttl();
  setbgcolor(1);
  setcolor(9);
  clearscreen();
  for(i = 0; i < 32; i++)
    spritesetvalue(i, S_Y, spritegetvalue(i, S_Y) + 1000);
  setimagesize(2);
  putimage1bit(endscreen, 0, 32, 64, 24);  
  setimagesize(1);
  gotoxy(6,2);
  printf("Game over");
  gotoxy(6,11);
  printf("floor %d", level);
  gotoxy(6,13);
  printf("gold %d", gold);
  delay(1000);
  while(getkey() == 0){}
  init();
}

void viewPage(){
  setcolor(1);
  setbgcolor(9);
  for(i = 0; i < 16; i++)
    spritesetvalue(i, S_Y, spritegetvalue(i, S_Y) + 1000);
  fRect(10, 30, 118, 98);
  setcolor(9);
  setbgcolor(1);
}

void hidePage(){
  for(i = 0; i < 16; i++)
    spritesetvalue(i, S_Y, spritegetvalue(i, S_Y) - 1000);
  setcolor(1);
  setbgcolor(0);
}

void Info(){
  viewPage();
  gotoxy(2,4);
  printf("floor %d", level);
  gotoxy(2,6);
  printf("gold %d", gold);
  gotoxy(2,7);
  printf("%c%d/%d", 3, health, maxhealth);
  gotoxy(2,8);
  printf("%c%d %c%d", 190, attack, 31, block);
  gotoxy(2,9);
  printf("%s %s+%d", shieldname, "shield", shield);
  gotoxy(2,10);
  printf("%s %s +%d", swordname, "sword", sword);
  gotoxy(2,11);
  printf("%s %s +%d", armorname, "armor", armor);
  delay(500);
  while(getkey() == 0){}
  hidePage();
}

void addItem(){
  int r,r1,n,ii;
  loadrtttl(s2,0);
  playrtttl();
  r = random(40);
  r1 = random(40);
  n = random(4);
  for(ii = 0; ii < 3; ii++){
    newname[ii] = names[r1 * 3 + ii];
    newname[ii + 3] = names[r * 3 + ii];
  }
  newname[6] = 39;
  newname[7] = 's';
  newname[8] = 0;
  if(n == 0){
    for(ii = 0; ii < 9; ii++){
      shieldname[ii] = newname[ii];
    }
    shield = level / 4 + random(level / 4) + 1;
    printf("You got %s shield" , shieldname);
  }
  else if(n == 1){
    for(ii = 0; ii < 9; ii++){
      swordname[ii] = newname[ii];
    }
    sword = level / 2 + random(level / 2) + 1;
    printf("You got %s sword" , swordname);
  }
  else if(n == 2){
    for(ii = 0; ii < 9; ii++){
      armorname[ii] = newname[ii];  
    }
    armor = level / 4 + random(level / 4) + 1;
    printf("You got %s armor" , armorname);
  }
  else if(n > 2){
    n = random(9);
    if(n < 3 && hpoison < 3){
      hpoison++;
      printf("You got a health potion");
    }
    else if(n == 3){
      attack++;
      printf("You got a power potion");
      spritesetvalue(30, S_HEIGHT,1 + hpoison * 4);
    }
    else if(n == 4){
      maxhealth++;
      printf("Your maximum health has increased");
    }
  }
  gold += random(level);
  block = shield + armor;
  printtosprite(5, 9, attack + sword);
}

void fight(int i){
  int n;
  setcolor(1);
  setbgcolor(1);
  fRect(0, 8, 127, 32);
  setcolor(9);
  gotoxy(1,1);
  tone(2000,300);
  if(random(1)){
    if(level > block)
      n = level - block;
    else
      n = 0;
    if(random(3) == 0)
      n = n+1;
    health -= n;
    printtosprite(5, 1, health);
    printf("The enemy took away %d health ", n);
  }
  else{
    n = attack + sword - level / 2;
    spritesetvalue(i, S_LIVES, spritegetvalue(i, S_LIVES) - n); 
    printf("You took away %d health. ", n);
    if(spritegetvalue(i, S_LIVES) <= 0)
      addItem();
  }
  if(health <= 0)
    endGame();
  delay(400);
  getkey();
  while(getkey() == 0){}
}

int monsterCollisionTest(){
  int nx, ny;
  nx = (offsetx + x * 16 + 2) / 16;
  ny = (offsety + y * 16) / 16;
  for(i = 2; i < 16; i++){
    if(spritegetvalue(i, S_X) / 16 == nx && spritegetvalue(i, S_Y) / 16 == ny){
      if(spritegetvalue(i, S_LIVES) > 0){
        fight(i);
        return 1;
      }
    }
  }
  return 0;
}

void testkey(){
  key = getkey();
  if(key != prevkey){
    if(key == KEY_LEFT){
      tone(200,100);
      x--;
      if(maze[x + y * 21] == door)
        isMaze = 0;
      else if(maze[x + y * 21] != floor || monsterCollisionTest())
        x++;
    }
    else if(key == KEY_RIGHT){
      tone(200,100);
      x++;
      if(maze[x + y * 21] == door)
        isMaze = 0;
      else if(maze[x + y * 21] != floor || monsterCollisionTest())
        x--;
    }
    if(key == KEY_UP){
      tone(200,100);
      y--;
      if(maze[x + y * 21] == door)
        isMaze = 0;
      else if(maze[x + y * 21] != floor || monsterCollisionTest())
        y++;
    }
    else if(key == KEY_DOWN){
      tone(200,100);
      y++;
      if(maze[x + y * 21] == door)
        isMaze = 0;
      else if(maze[x + y * 21] != floor || monsterCollisionTest())
        y--;
    }
    else if(key == KEY_A){
      Info();
    }
    else if(key == KEY_B){
      if(health < maxhealth && hpoison > 0){
        health += maxhealth / 2;
        if(health > maxhealth)
          health = maxhealth;
        hpoison--;
        printtosprite(5, 1, health);
        spritesetvalue(30, S_HEIGHT,1 + hpoison * 4);
      }
    }
    putsprite(1, offsetx + x * 16, offsety + y * 16);
    drawtile(offsetx, offsety + 4);
  }
  prevkey = key;
}

int calcRoomPointer() {
  return currentLevel * ROOM_REC_SIZE;
}

void drawSprite(char targetNum, char srcIndex, int sprite[]) {
  int p = srcIndex * SPRITE_REC_SIZE;
  getsprite(targetNum, images[sprite[p + SPRITE_OFS_TILE]]);
  spritesetvalue(targetNum, S_WIDTH, 8);
  spritesetvalue(targetNum, S_HEIGHT,8);
  putsprite(targetNum, sprite[p + SPRITE_OFS_X] * 8, sprite[p + SPRITE_OFS_Y] * 8);
}

// Passing parameters as global variables because the parameter passing is gltching out.
int spritesCollisionX, spritesCollisionY;
int checkSpritesCollision(int roomSprites[], int spriteCount) { 
  int p = 0;
  int otherX, otherY;

  gotoxy(1, 3);
  printf("%d %d %d %d\n", spritesCollisionX, spritesCollisionY, roomSprites, spriteCount);

/*
  for (char i = 0; i < spriteCount; i++) {
    otherX = roomSprites[p + SPRITE_OFS_X];
    otherY = roomSprites[p + SPRITE_OFS_X];

    if (spritesCollisionX == roomSprites[p + SPRITE_OFS_X] || spritesCollisionY == roomSprites[p + SPRITE_OFS_Y]) {      
      return true;
    }
    p += SPRITE_REC_SIZE;
  }
*/
  /*
  for (uint8_t i = 0; i != rooms[currentLevel].spriteCount; i++) {
    BitsySprite *spr = &rooms[currentLevel].sprites[i];
    if (spr->x == x && spr->y == y) {
      currentDialog = spr->dialog;
      return true;
    }
  }
  */

  return 0;
}
	
char tryMovingPlayer(int dx, int dy) {
  // Calculate where the player will try to move to
  int x = playerSprite[SPRITE_OFS_X];
  int y = playerSprite[SPRITE_OFS_Y];

  int roomP = calcRoomPointer();
  int collision;

  x += dx;
  y += dy;

  // Out of bounds  
  if (x < 0 || x > 15 || y < 0 || y > 15) {
    return false;
  }

  // Check collision against the sprites
  spritesCollisionX = x;
  spritesCollisionY = y;

  gotoxy(1, 2);
  printf("%d %d %d %d\n", spritesCollisionX, spritesCollisionY, 
	rooms[roomP + ROOM_OFS_SPR_DATA], rooms[roomP + ROOM_OFS_SPR_COUNT]);

  if (checkSpritesCollision(rooms[roomP + ROOM_OFS_SPR_DATA], rooms[roomP + ROOM_OFS_SPR_COUNT])) {
    printf("! %d", collision);
    return true;
  }
  
  // No obstacles found: the player can move.
  playerSprite[SPRITE_OFS_X] = x;
  playerSprite[SPRITE_OFS_Y] = y;

  return true;
}

char controlPlayer() {
  key = getkey();
	
  if (key & KEY_UP) {
    return tryMovingPlayer(0, -1);
  }
  if (key & KEY_DOWN) {
    return tryMovingPlayer(0, 1);
  }
  if (key & KEY_LEFT) {
    return tryMovingPlayer(-1, 0);
  }
  if (key & KEY_RIGHT) {
    return tryMovingPlayer(1, 0);
  }
  
  return false;
}

char drawRoom(char map[]) {
  for (int i = 0; i != 256; i++) {
    maze[i] = images[map[i]];
  }
}

void drawSprites(int roomSprites[], int spriteCount) { 
  drawSprite(1, 0, playerSprite);
  
  for (char i = 0; i < spriteCount; i++) {
    drawSprite(i + 2, i, roomSprites);
  }
}

/* For some reason, using "char s[]" as a parameter makes "puts(s)" print gibberish. */
void showDialog(int s) {
  char blink = false;
  char blinkDelay = 0;

  setColor(11):
  fillRect(4,4,124, 68);

  setBgColor(11);
  setColor(7):
  gotoXY(1, 1);
  puts(s);

  // Blink cursor until player presses a button
  while (!(getkey() & (KEY_A|KEY_B))) {
    gotoXY(19, 7);
    setColor(blink ? 7 : 11):
    puts("_");
    delay(1);

    if (blinkDelay) {
      blinkDelay--;
    } else {
      blink = !blink;
      blinkDelay = 15;
    }
  }

  while (getkey()) {}
}

// This section will have to be generated, too

void dialog_SPR_a() {
  showDialog("Testing, 1, 2, 3!");
}

// Getting around the lack of function pointers
void showChosenDialog(int dlgNumber) {
  switch (dlgNumber) {
  case DIALOG_ID_SPR_a:
    dialog_SPR_a();
    break;
  }  
}

void main(){
  init();

  for (int i = 0; i != SPRITE_REC_SIZE; i++) {
    playerSprite[i] = playerSpriteStart[i];
  }

  while(1){
    generateMaze();

    int roomP = calcRoomPointer(); 
    drawRoom(rooms[roomP + ROOM_OFS_MAP]);
    drawSprites(rooms[roomP + ROOM_OFS_SPR_DATA], rooms[roomP + ROOM_OFS_SPR_COUNT]);

    drawtile(0, 0);

    while(isMaze){
      controlPlayer();
      drawSprite(1, 0, playerSprite);
      delayredraw();
    }
    delay(300);
    level++;
  }

}
