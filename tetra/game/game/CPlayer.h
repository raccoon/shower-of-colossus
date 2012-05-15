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

	sf::Vector2f GetPosition();
	
	float GetInGameTime(CWindow &window);

	bool IsPlayerOnScreen;

private:
	sf::Sprite PlayerSprite;
	sf::Image PlayerImage;
	bool IsPlayerLoaded;
};