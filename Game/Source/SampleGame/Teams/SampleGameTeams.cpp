// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#include "SampleGameTeams.h"


static const TCHAR* kTeamNames[]{
	TEXT("No Team"),
	TEXT("Red Team"),
	TEXT("Green Team"),
	TEXT("Blue Team"),
	TEXT("Yellow Team"),
	TEXT("Purple Team"),
	TEXT("Black Team"),
	TEXT("White Team"),
};

FString SampleGameTeamName(ESampleGameTeam Team)
{
	if (Team >= ESampleGameTeam::Team_MAX)
	{
		return "UNKNOWN TEAM";
	}
	return FString::Printf(kTeamNames[static_cast<uint8>(Team)]);
}
