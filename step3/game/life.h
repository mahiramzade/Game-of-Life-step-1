#ifndef __LIFE_H__
#define __LIFE_H__

#define DEAD "\033[40m  "
#define LIVE "\033[46m  "
#define LIVE_PROB 0.6

typedef struct game
{
    int generation;
    int rows, cols;
    int **board;
} Game;

Game *G_new(int rows, int cols);

void G_generate(Game *game);

void G_live(Game *game);

#endif
