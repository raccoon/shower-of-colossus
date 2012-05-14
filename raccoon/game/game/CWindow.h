#include "incs.h"

class CWindow
{
public:
	void CreateGameWindow(int width, int height, int bits, std::string title);
	void Update();
	void Draw();
private:
	sf::RenderWindow wnd;
};

void CWindow::CreateGameWindow(int width, int height, int bits, std::string title)
{
	wnd.create(sf::VideoMode(width, height, bits), title);
}
void CWindow::Update()
{
	while(wnd.isOpen())
	{
		sf::Event events;
		while(wnd.pollEvent(events))
		{
			if(events.type = sf::Event::Closed)
			{
				wnd.close();
			}
		}
		wnd.clear();
		this->Draw();
		wnd.display();
	}
	
}
void CWindow::Draw()
{

}