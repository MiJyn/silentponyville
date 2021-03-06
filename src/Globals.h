#ifndef _SP_GLOBALS_H
#define _SP_GLOBALS_H

#include <NTypes.h>

void Globals_init();
void Globals_destroy();

#define SP_SPRITESHEET_PLAYER 0
#define SP_SPRITESHEET_GROANER 2

#define SP_IMAGE_FAKELEVEL 0
#define SP_IMAGE_FAKEFOG 1

// Input

extern short* SP_left_keys;
extern short* SP_right_keys;
extern short* SP_run_keys;

// Player

extern bool SP_moved;

#endif
