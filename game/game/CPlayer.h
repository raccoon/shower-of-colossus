#pragma once
#include "Cwindow.h"

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	void SetPlayerImage(std::string filename);
	void SetPlayerPosition(float x, float y);
	void DrawPlayer(CWindow &window);

	void sf::Vector2f GetPosition();
	
	float GetInGameTime();

	bool IsPlayerOnScreen();

private:
	sf::Sprite PlayerSprite;
	sf::Image PlayerImage;
	bool IsPlayerLoaded;
};