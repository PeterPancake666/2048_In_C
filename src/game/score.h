#include "winlose.h"

void game_draw_score(){
	DrawTextEx(resources.fonts.roboto, TextFormat("Score: %d", score), (Vector2){10, 10}, 45, 5, BLACK);
}