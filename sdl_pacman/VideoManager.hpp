#pragma once
#include "SDL.h"
#include "GameMode.hpp"
#include "TileSheetHelper.hpp"

class VideoManager
{
	SDL_Window* _Window;
	SDL_Renderer* _Renderer;
	SDL_Texture* _Pacman,* _Level;

public:
	const float scaleX = 2.0f, scaleY = 2.0f;;
	const int Width = 224, Height = 288;

	GameMode* _GameMode;
	TileSheetHelper* _TileSheetHelper;

public:
	VideoManager(GameMode* GameModeInst);
	~VideoManager();
	void Load();
	void Render();
};
