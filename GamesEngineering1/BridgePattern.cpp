#include "BridgePattern.h"

void BridgePattern::BridgePatternMain()
{
	DrawAPI* api = new DrawImpl();
	BridgePatternCharacter* character = new BridgePatternPlayer(api);
	character->Draw();

	delete api;
	delete character;
}
