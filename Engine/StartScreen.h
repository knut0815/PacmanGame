#pragma once

#include "Graphics.h"
#include "Pacman.h"
#include "Ghosts.h"
#include <chrono>

class StartScreen
{
public:
	void Draw(Graphics& gfx, Pacman& pacman, Ghosts& ghosts);

	void DrawTitle(Graphics& gfx);
	void DrawPacman(Graphics& gfx, Pacman& pacman);
	void DrawGhosts(Graphics& gfx, Ghosts& ghosts);


private:

	std::chrono::system_clock::time_point currentTime;

	std::chrono::system_clock::time_point eatenTimeStart;
	const float eatenTimeMax = 4.0f;

	const int offsetUp = 100;
	const int width = 28;
	const int height = 31;
	const int cellSize = 25;

	const int wallPadding = 2;

	static constexpr int titleMapWidth = 5;
	static constexpr int titleMapHeight = 7;
	static constexpr int titleMapCellSize = 6;

	static constexpr int titleXBuffer = 10;
	static constexpr int titleXOffset = 245;
	static constexpr int titleYOffset = 30;

	Color c = Colors::Yellow;


	char titleMap0[6][titleMapWidth * titleMapHeight] =
	{
		{
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0
		},
		{
			0, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		},
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			0, 1, 1, 1, 1
		},
		{
			0, 1, 0, 1, 0,
			1, 0, 1, 0, 1,
			1, 0, 1, 0, 1,
			1, 0, 1, 0, 1,
			1, 0, 1, 0, 1,
			1, 0, 1, 0, 1,
			1, 0, 1, 0, 1
		},
		{
			0, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		},
		{
			0, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		}
	};

	char titleMap1[2][titleMapWidth * titleMapHeight] =
	{
		{
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 0
		},
		{
			1, 0, 0, 0, 1,
			0, 1, 0, 1, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0
		}
	};

	char titleMap2[5][titleMapWidth * titleMapHeight] =
	{
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 1, 1, 1, 1,
			0, 0, 0, 0, 1,
			0, 0, 0, 0, 1,
			1, 1, 1, 1, 0
		},
		{
			0, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 1, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			0, 1, 1, 1, 0
		},
		{
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 1, 1, 1, 1
		},
		{
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 1, 1, 1, 1
		},
		{
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 1,
			0, 0, 0, 0, 1,
			0, 0, 0, 0, 1,
			1, 1, 1, 1, 1
		}
	};

	char titleMap3[20][titleMapWidth * titleMapHeight] =
	{
		{
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0
		},
		{
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		},
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			0, 1, 1, 1, 1
		},
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			0, 1, 1, 1, 0,
			0, 0, 0, 0, 1,
			0, 0, 0, 0, 1,
			1, 1, 1, 1, 0
		},
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			0, 1, 1, 1, 0,
			0, 0, 0, 0, 1,
			0, 0, 0, 0, 1,
			1, 1, 1, 1, 0
		},
		{
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0
		},
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			0, 1, 1, 1, 1
		},
		{
			0, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		},
		{
			1, 1, 1, 1, 1,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0
		},
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			1, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			0, 1, 1, 1, 1
		},
		{
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		},
		{
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0
		},
		{
			1, 1, 1, 1, 1,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0
		},
		{
			0, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			0, 1, 1, 1, 0
		},
		{
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0
		},
		{
			0, 1, 1, 1, 1,
			1, 0, 0, 0, 0,
			1, 0, 0, 0, 0,
			0, 1, 1, 1, 0,
			0, 0, 0, 0, 1,
			0, 0, 0, 0, 1,
			1, 1, 1, 1, 0
		},
		{
			1, 1, 1, 1, 1,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0
		},
		{
			0, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		},
		{
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 1, 1, 1, 0,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1,
			1, 0, 0, 0, 1
		},
		{
			1, 1, 1, 1, 1,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0,
			0, 0, 1, 0, 0
		}
	};



};