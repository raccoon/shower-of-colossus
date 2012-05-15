#pragma once
#include "Cwindow.h"

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

	void setPlayerImage(std::string filename);
	void setPlayerPosition(float x, float y);
	void drawPlayer(CWindow &window);

	sf::Vector2f getPosition();
	
	float getInGameTime(CWindow &window);

private:
	sf::Sprite PlayerSprite;
	sf::Image PlayerImage;
	bool IsPlayerLoaded;
	bool isPlayerOnScreen;
};