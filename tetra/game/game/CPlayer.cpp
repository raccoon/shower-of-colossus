#pragma once

#include "CPlayer.h"
#include "incs.h"

void CPlayer::SetPlayerImage(std::string filename)
{
	if(PlayerImage.LoadFromFile