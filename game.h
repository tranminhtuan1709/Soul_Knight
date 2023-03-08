#pragma once
#ifndef game_h_
#define game_h_

#include "characters.h"

void run(vector <SDL_Texture*> v, int& currentFrame, SDL_Renderer* render, SDL_Event& e, SDL_Rect& position, int speed, SDL_Rect& currentPosition, string& direction);
void anemoAttack(anemoChar& char1, string type, SDL_Renderer* render, SDL_Point dot, string& direction);
void electroAttack(electroChar& char2, string type, SDL_Renderer* render);
void hydroAttack(hydroChar& char3, string type, SDL_Renderer* render);
void pyroAttack(pyroChar& char4, string type, SDL_Renderer* render);
bool cooldown(int& previousTime, int step);

#endif game_h_