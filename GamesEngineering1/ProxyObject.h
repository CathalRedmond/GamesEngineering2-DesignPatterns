#pragma once
#include <iostream>

class IGraphic
{
public:
	virtual void Draw() = 0;
};

class Graphic : public IGraphic
{
public:
	Graphic() {}
	~Graphic() {}
	void Draw()
	{
		std::cout << "Drawing Graphic Object" << std::endl;
	}
};

class GraphicProxy : public IGraphic
{
public:
	GraphicProxy()
	{
		this->graphic = new Graphic();
	}
	~GraphicProxy()
	{
		if (graphic) delete graphic;
	}
	void Draw()
	{
		getInstance()->Draw();
	}
private:
	Graphic* graphic;
	Graphic* getInstance(void)
	{
		if (graphic)
		{
			graphic = new Graphic();
		}
		return graphic;
	}
};

class ProxyObject
{
public:
	ProxyObject() {}
	void ProxyObjectMain();
};