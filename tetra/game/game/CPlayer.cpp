#pragma once

#include "CPlayer.h"
#include "incs.h"

void CPlayer::SetPlayerImage(std::string filename)
{
	if(PlayerImage.LoadFromFile(filename) == false)
	{
		IsPlayerLoaded = false;
		IsPlayerOnScreen = false;
	}
	else
	{
		PlayerSprite.SetImage(PlayerImage);
		IsPlayerLoaded = true;
		IsPlayerOnScreen = true;
	}
}

void CPlayer::SetPlayerPosition(float x, float y)
{
	if(IsPlayerLoaded)
	{
		PlayerSprite.SetPosition(x,y);
	}
}

void CPlayer::DrawPlayer(CWindow &window)
{
	if(IsPlayerLoaded)
	{
		CWindow.Draw(PlayerSprite);
	}
}

sf::Vector2f CPlayer::GetPosition()
{
	if(IsPlayerLoaded)
	{
		return PlayerSprite.GetPosition();
	}
	return sf::Vector2f();
}

float CPlayer::GetInGameTime(CWindow &window)
{
	if(PlayerIsLoaded && PlayerIsOnScreen)
	{
		return window.GetFrameTime();
	}
}
