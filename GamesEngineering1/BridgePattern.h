#pragma once
#include <iostream>
class DrawAPI
{
public:
	virtual void Draw() = 0;
};

class DrawImpl : public DrawAPI
{
public:
	void Draw()
	{
		std::cout << "Draw Impl" << std::endl;
	}
};

class BridgePatternCharacter
{
public:
	virtual void Draw() = 0;
};

class BridgePatternPlayer : public BridgePatternCharacter
{
public:
	BridgePatternPlayer(DrawAPI* api)
	{
		this->api = api;
	}
	~BridgePatternPlayer()
	{
		if (api) delete api;
	}
	void Draw()
	{
		api->Draw();
	}
private:
	DrawAPI* api;
};

class BridgePattern
{
public :
	BridgePattern() {}
	void BridgePatternMain();
};