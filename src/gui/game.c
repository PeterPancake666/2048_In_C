#include "gui.h"

// play button for pause menu and lose/play screen
void gui_game_play_button(){
    if(285 <= GetMouseX() && GetMouseX() <= 435 && 400 <= GetMouseY() && GetMouseY() <= 500){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            DrawTexturePro(resources.textures.gui.play_clicked, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 450, 150, 100}, (Vector2){75,50}, 0, WHITE);
            game_pressed_play_hold = true;
        }
        else if(game_pressed_play_hold){
			PlaySound(resources.sounds.press);
            game_pressed_play = true;
        }
        else{
            DrawTexturePro(resources.textures.gui.play_hover, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 450, 150, 100}, (Vector2){75,50}, 0, WHITE);
        }
    }
    else{
        DrawTexturePro(resources.textures.gui.play_normal, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 450, 150, 100}, (Vector2){75,50}, 0, WHITE);
    }
}
