#pragma once
#include<SFML/Graphics.hpp>

enum CaseTypes
{
	GRASS,
	WATER,
	SAND,
	NONE
};

class Case
{
public:
	Case();
	~Case();
	CaseTypes type = NONE;
	
	void Update(float);
	sf::Sprite Draw(sf::Vector2f);
private:
	sf::RenderTexture texture;
};
