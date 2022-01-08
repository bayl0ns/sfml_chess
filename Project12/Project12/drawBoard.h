#pragma once
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>




class DrawBoard : public sf::Drawable {

public:

	DrawBoard();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	
	void player1WhiteMove();
	void player2BlackMove();


	bool checkIfTargetSquareIsValid(float x, float y, int index);

	int getIndexFromMousePosition(float x, float y);


	void parseElementIntoBoardCoords(std::string);

	void drawConsoleBoard();
	void setAllSprites();

	//insert elemnt 49 (WP1) legal moves = (49 - 8) - 1 && (49 - 8) + 1
	//40 && 42
	std::string sBoard[64] = { "BR0 ", "BN0 ", "BBW ", "BQ  ", "BK  ", "BBB ", "BN1 ", "BR1 ",
							   "BP0 ", "BP1 ", "BP2 ", "BP3 ", "BP4 ", "BP5 ", "BP6 ", "BP7 ",
							   " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ",
							   " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ",
							   " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ",
							   " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ", " X  ",
							   "WP0 ", "WP1 ", "WP2 ", "WP3 ", "WP4 ", "WP5 ", "WP6 ", "WP7 ",
							   "WR0 ", "WN0 ", "WBB ", "WQ  ", "WK  ", "WBW ", "WN1 ", "WR1 " };


	 

	sf::Sprite sWhitePawn0;
	sf::Sprite sWhitePawn1;
	sf::Sprite sWhitePawn2;
	sf::Sprite sWhitePawn3;
	sf::Sprite sWhitePawn4;
	sf::Sprite sWhitePawn5;
	sf::Sprite sWhitePawn6;
	sf::Sprite sWhitePawn7;

	sf::Sprite sBlackPawn0;
	sf::Sprite sBlackPawn1;
	sf::Sprite sBlackPawn2;
	sf::Sprite sBlackPawn3;
	sf::Sprite sBlackPawn4;
	sf::Sprite sBlackPawn5;
	sf::Sprite sBlackPawn6;
	sf::Sprite sBlackPawn7;

	sf::Sprite sWhiteKing;
	sf::Sprite sWhiteQueen;
	sf::Sprite sWhiteRook0;
	sf::Sprite sWhiteRook1;
	sf::Sprite sWhiteKnight0;
	sf::Sprite sWhiteKnight1;
	sf::Sprite sWhiteBishop0;
	sf::Sprite sWhiteBishop1;

	sf::Sprite sBlackKing;
	sf::Sprite sBlackQueen;
	sf::Sprite sBlackRook0;  
	sf::Sprite sBlackRook1;
	sf::Sprite sBlackKnight0;
	sf::Sprite sBlackKnight1;
	sf::Sprite sBlackBishop0;
	sf::Sprite sBlackBishop1;


	std::vector<sf::Vector2f> vGetVector;
	std::vector<sf::Sprite> v;

private:
	
	sf::Texture tChessBoard;
	sf::Sprite sChessBoard;

	sf::Texture tWhitePawn;
	sf::Texture tWhiteKing;
	sf::Texture tWhiteQueen;
	sf::Texture tWhiteRook;
	sf::Texture tWhiteKnight;
	sf::Texture tWhiteBishop;

	sf::Texture tBlackPawn;
	sf::Texture tBlackKing;
	sf::Texture tBlackQueen;
	sf::Texture tBlackRook;
	sf::Texture tBlackKnight;
	sf::Texture tBlackBishop;


	std::string targetPiece;
	std::string desPiece;
	int xTarget, yTarget;
	int xDes, yDes;

	int parsedTargetCoords;
	int parsedDesCoords;

	const float fx0 = 121.875;
	const float fx1 = fx0 * 2;
	const float fx2 = fx0 * 3;
	const float fx3 = fx0 * 4;
	const float fx4 = fx0 * 5;
	const float fx5 = fx0 * 6;
	const float fx6 = fx0 * 7;
	const float fx7 = fx0 * 8;

	const float fy0 = 121.875;
	const float fy1 = fx0 * 2;
	const float fy2 = fx0 * 3;
	const float fy3 = fx0 * 4;
	const float fy4 = fx0 * 5;
	const float fy5 = fx0 * 6;
	const float fy6 = fx0 * 7;
	const float fy7 = fx0 * 8;
	
	


};