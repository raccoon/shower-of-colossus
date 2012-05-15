#pragma once

#include "CPlayer.h"
#include "incs.h"

void CPlayer::setPlayerImage(std::string filename)
{
	if(PlayerImage.LoadFromFile(filename) == false)
	{
		isPlayerLoaded = false;
		isPlayerOnScreen = false;
	}
	else
	{
		PlayerSprite.setImage(PlayerImage);
		isPlayerLoaded = true;
		isPlayerOnScreen = true;
	}
}

void CPlayer::setPlayerPosition(float x, float y)
{
	if(isPlayerLoaded)
	{
		PlayerSprite.setPosition(x,y);
	}
}

void CPlayer::drawPlayer(CWindow &window)
{
	if(isPlayerLoaded)
	{
		CWindow.Draw(PlayerSprite);
	}
}

sf::Vector2f CPlayer::getPosition()
{
	if(isPlayerLoaded)
	{
		return PlayerSprite.GetPosition();
	}
	return sf::Vector2f();
}

float CPlayer::getInGameTime(CWindow &window)
{
	if(isPlayerLoaded && isPlayerOnScreen)
	{
		return window.GetFrameTime();
	}
}
