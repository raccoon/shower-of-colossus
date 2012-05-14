#include "incs.h"
#include "CWindow.h"
int main()
{

	CWindow window;
	window.CreateGameWindow(800, 600, 32, "Shower of the Colossus");
	window.Update();
	window.Draw();
}