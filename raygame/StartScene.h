#pragma once
#include "Scene.h"

class StartScene : Scene
{
public:
	void Start();
	void Update(double Deltatime);
	void End();

	bool GetSimStatus() { return _simOver; }

private:
	bool _simOver = false;
	int _currentMenu = 1;

};