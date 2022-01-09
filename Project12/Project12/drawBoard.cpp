#include "drawBoard.h"


DrawBoard::DrawBoard() {
	
	
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy0 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy0 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy0 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy0 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy0 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy0 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy0 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy0 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy1 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy1 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy1 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy1 - (fy0 / 2)));

	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy1 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy1 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy1 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy1 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy2 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy2 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy2 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy2 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy2 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy2 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy2 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy2 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy3 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy3 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy3 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy3 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy3 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy3 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy3 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy3 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy4 - (fy0 / 2)));

	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy4 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy4 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy4 - (fy0 / 2))); //35
	
	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy4 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy4 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy4 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy4 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy5 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy5 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy5 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy5 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy5 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy5 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy5 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy5 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy6 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy6 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy6 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy6 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy6 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy6 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy6 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy6 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx0 - (fx0 / 2), fy7 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx1 - (fx0 / 2), fy7 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx2 - (fx0 / 2), fy7 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx3 - (fx0 / 2), fy7 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx4 - (fx0 / 2), fy7 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx5 - (fx0 / 2), fy7 - (fy0 / 2)));
	vSquares.push_back(sf::Vector2f(fx6 - (fx0 / 2), fy7 - (fy0 / 2)));
	
	vSquares.push_back(sf::Vector2f(fx7 - (fx0 / 2), fy7 - (fy0 / 2)));
	


	if (!tChessBoard.loadFromFile("board.PNG")) {
		std::cout << "board nicht gefunden" << std::endl;
	}        
	//white pieces
	if (!tWhitePawn.loadFromFile("pieces.PNG", sf::IntRect(1700, 20, 185, 260))) {
		std::cout << "pawn nicht gefunden" << std::endl;
	}
	if (!tWhiteKing.loadFromFile("pieces.PNG", sf::IntRect(0, 0, 260, 265))) {
		std::cout << "king nicht gefunden" << std::endl;
	}
	if (!tWhiteQueen.loadFromFile("pieces.PNG", sf::IntRect(318, 0, 288, 265))) {
		std::cout << "queen nicht gefunden" << std::endl;
	}
	if (!tWhiteBishop.loadFromFile("pieces.PNG", sf::IntRect(670, 0, 250, 265))) {
		std::cout << "bs nicht gefunden" << std::endl;
	}
	if (!tWhiteKnight.loadFromFile("pieces.PNG", sf::IntRect(1003, 10, 247, 247))) {
		std::cout << "bs nicht gefunden" << std::endl;
	}
	if (!tWhiteRook.loadFromFile("pieces.PNG", sf::IntRect(1358, 24, 247, 247))) {
		std::cout << "bs nicht gefunden" << std::endl;
	}


	//black pieces
	if (!tBlackPawn.loadFromFile("pieces.PNG", sf::IntRect(1700, 358, 185, 260))) {
		std::cout << "black pawn nicht gefunden" << std::endl;
	}
	
	if (!tBlackKing.loadFromFile("pieces.PNG", sf::IntRect(0, 340, 260, 265))) {
		std::cout << "black king nicht gefunden " << std::endl;
	}

	if (!tBlackQueen.loadFromFile("pieces.PNG", sf::IntRect(318, 340, 288, 265))) {
		std::cout << "black queen nicht gefunden" << std::endl;
	}

	if (!tBlackBishop.loadFromFile("pieces.PNG", sf::IntRect(670, 333, 250, 265))) {
		std::cout << "blackBishop nicht gefunden " << std::endl;
	}

	if (!tBlackKnight.loadFromFile("pieces.PNG", sf::IntRect(1003, 346, 247, 247))) {
		std::cout << "black knight nicht gefunden " << std::endl;
	}

	if (!tBlackRook.loadFromFile("pieces.PNG", sf::IntRect(1358, 357, 247, 247))) {
		std::cout << "black rook nicht gefunden" << std::endl;
	}
	
	sChessBoard.setTexture(tChessBoard);
	
	
	sWhiteKing.setTexture(tWhiteKing);
	sWhiteKing.setScale(0.4f, 0.4f);
	sWhiteKing.setOrigin(sWhiteKing.getTextureRect().width / 2, sWhiteKing.getTextureRect().height / 2);
	
	 

	sWhiteQueen.setTexture(tWhiteQueen);
	sWhiteQueen.setScale(0.4f, 0.4f);
	sWhiteQueen.setOrigin(sWhiteQueen.getTextureRect().width / 2, sWhiteQueen.getTextureRect().height / 2);
	

	sWhiteBishop0.setTexture(tWhiteBishop);
	sWhiteBishop0.setScale(0.4f, 0.4f);
	sWhiteBishop0.setOrigin(sWhiteBishop0.getTextureRect().width / 2, sWhiteBishop0.getTextureRect().height / 2);
	

	sWhiteKnight0.setTexture(tWhiteKnight);
	sWhiteKnight0.setScale(-0.4f, 0.4f);
	sWhiteKnight0.setOrigin(sWhiteKnight0.getTextureRect().width / 2, sWhiteKnight0.getTextureRect().height / 2);
	

	sWhiteRook0.setTexture(tWhiteRook);
	sWhiteRook0.setScale(0.4f, 0.4f);
	sWhiteRook0.setOrigin(sWhiteRook0.getTextureRect().width / 2, sWhiteRook0.getTextureRect().height / 2);
	

	sWhiteBishop1.setTexture(tWhiteBishop);
	sWhiteBishop1.setScale(0.4f, 0.4f);
	sWhiteBishop1.setOrigin(sWhiteBishop1.getTextureRect().width / 2, sWhiteBishop1.getTextureRect().height / 2);
	

	sWhiteKnight1.setTexture(tWhiteKnight);
	sWhiteKnight1.setScale(0.4f, 0.4f);
	sWhiteKnight1.setOrigin(sWhiteKnight1.getTextureRect().width / 2, sWhiteKnight1.getTextureRect().height / 2);
	

	sWhiteRook1.setTexture(tWhiteRook);
	sWhiteRook1.setScale(0.4f, 0.4f);
	sWhiteRook1.setOrigin(sWhiteRook1.getTextureRect().width / 2, sWhiteRook1.getTextureRect().height / 2);
	

	sWhitePawn0.setTexture(tWhitePawn);
	sWhitePawn1.setTexture(tWhitePawn);
	sWhitePawn2.setTexture(tWhitePawn);
	sWhitePawn3.setTexture(tWhitePawn);
	sWhitePawn4.setTexture(tWhitePawn);
	sWhitePawn5.setTexture(tWhitePawn);
	sWhitePawn6.setTexture(tWhitePawn);
	sWhitePawn7.setTexture(tWhitePawn);
	
	sWhitePawn0.setScale(0.4f, 0.4f);
	sWhitePawn1.setScale(0.4f, 0.4f);
	sWhitePawn2.setScale(0.4f, 0.4f);
	sWhitePawn3.setScale(0.4f, 0.4f);
	sWhitePawn4.setScale(0.4f, 0.4f);
	sWhitePawn5.setScale(0.4f, 0.4f);
	sWhitePawn6.setScale(0.4f, 0.4f);
	sWhitePawn7.setScale(0.4f, 0.4f);

	sWhitePawn0.setOrigin(sWhitePawn0.getTextureRect().width / 2, sWhitePawn0.getTextureRect().height / 2);
	sWhitePawn1.setOrigin(sWhitePawn1.getTextureRect().width / 2, sWhitePawn1.getTextureRect().height / 2);
	sWhitePawn2.setOrigin(sWhitePawn2.getTextureRect().width / 2, sWhitePawn2.getTextureRect().height / 2);
	sWhitePawn3.setOrigin(sWhitePawn3.getTextureRect().width / 2, sWhitePawn3.getTextureRect().height / 2);
	sWhitePawn4.setOrigin(sWhitePawn4.getTextureRect().width / 2, sWhitePawn4.getTextureRect().height / 2);
	sWhitePawn5.setOrigin(sWhitePawn5.getTextureRect().width / 2, sWhitePawn5.getTextureRect().height / 2);
	sWhitePawn6.setOrigin(sWhitePawn6.getTextureRect().width / 2, sWhitePawn6.getTextureRect().height / 2);
	sWhitePawn7.setOrigin(sWhitePawn7.getTextureRect().width / 2, sWhitePawn7.getTextureRect().height / 2);
	
	//black
	sBlackPawn0.setTexture(tBlackPawn);
	sBlackPawn1.setTexture(tBlackPawn);
	sBlackPawn2.setTexture(tBlackPawn);
	sBlackPawn3.setTexture(tBlackPawn);
	sBlackPawn4.setTexture(tBlackPawn);
	sBlackPawn5.setTexture(tBlackPawn);
	sBlackPawn6.setTexture(tBlackPawn);
	sBlackPawn7.setTexture(tBlackPawn);

	sBlackPawn0.setScale(0.4f, 0.4f);
	sBlackPawn1.setScale(0.4f, 0.4f);
	sBlackPawn2.setScale(0.4f, 0.4f);
	sBlackPawn3.setScale(0.4f, 0.4f);
	sBlackPawn4.setScale(0.4f, 0.4f);
	sBlackPawn5.setScale(0.4f, 0.4f);
	sBlackPawn6.setScale(0.4f, 0.4f);
	sBlackPawn7.setScale(0.4f, 0.4f);

	sBlackPawn0.setOrigin(sBlackPawn0.getTextureRect().width / 2, sBlackPawn0.getTextureRect().height / 2);
	sBlackPawn1.setOrigin(sBlackPawn1.getTextureRect().width / 2, sBlackPawn1.getTextureRect().height / 2);
	sBlackPawn2.setOrigin(sBlackPawn2.getTextureRect().width / 2, sBlackPawn2.getTextureRect().height / 2);
	sBlackPawn3.setOrigin(sBlackPawn3.getTextureRect().width / 2, sBlackPawn3.getTextureRect().height / 2);
	sBlackPawn4.setOrigin(sBlackPawn4.getTextureRect().width / 2, sBlackPawn4.getTextureRect().height / 2);
	sBlackPawn5.setOrigin(sBlackPawn5.getTextureRect().width / 2, sBlackPawn5.getTextureRect().height / 2);
	sBlackPawn6.setOrigin(sBlackPawn6.getTextureRect().width / 2, sBlackPawn6.getTextureRect().height / 2);
	sBlackPawn7.setOrigin(sBlackPawn7.getTextureRect().width / 2, sBlackPawn7.getTextureRect().height / 2);

	

	sBlackKing.setTexture(tBlackKing);
	sBlackKing.setScale(0.4f, 0.4f);
	sBlackKing.setOrigin(sBlackKing.getTextureRect().width / 2, sBlackKing.getTextureRect().height / 2);

	sBlackQueen.setTexture(tBlackQueen);
	sBlackQueen.setScale(0.4f, 0.4f);
	sBlackQueen.setOrigin(sBlackQueen.getTextureRect().width / 2, sBlackQueen.getTextureRect().height / 2);

	sBlackBishop0.setTexture(tBlackBishop);
	sBlackBishop0.setScale(0.4f, 0.4f);
	sBlackBishop0.setOrigin(sBlackBishop0.getTextureRect().width / 2, sBlackBishop0.getTextureRect().height / 2);

	sBlackBishop1.setTexture(tBlackBishop);
	sBlackBishop1.setScale(0.4f, 0.4f);
	sBlackBishop1.setOrigin(sBlackBishop1.getTextureRect().width / 2, sBlackBishop1.getTextureRect().height / 2);

	sBlackKnight0.setTexture(tBlackKnight);
	sBlackKnight0.setScale(0.4f, 0.4f);
	sBlackKnight0.setOrigin(sBlackKnight0.getTextureRect().width / 2, sBlackKnight0.getTextureRect().height / 2);

	sBlackKnight1.setTexture(tBlackKnight);
	sBlackKnight1.setScale(0.4f, 0.4f);
	sBlackKnight1.setOrigin(sBlackKnight1.getTextureRect().width / 2, sBlackKnight1.getTextureRect().height / 2);
	
	sBlackRook0.setTexture(tBlackRook);
	sBlackRook0.setScale(0.4f, 0.4f);
	sBlackRook0.setOrigin(sBlackRook0.getTextureRect().width / 2, sBlackRook0.getTextureRect().height / 2);

	sBlackRook1.setTexture(tBlackRook);
	sBlackRook1.setScale(0.4f, 0.4f);
	sBlackRook1.setOrigin(sBlackRook1.getTextureRect().width / 2, sBlackRook1.getTextureRect().height / 2);
	
	
	

}



void DrawBoard::drawConsoleBoard() {

	system("CLS");

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 64; i++) {
		if (i % 8 == 0) {
			std::cout << std::endl;
			std::cout << "                                            ";
		}
		std::cout << sBoard[i] << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
}

void DrawBoard::parseElementIntoBoardCoords(std::string s) {

	

}

void DrawBoard::setAllSprites() {
	
	for (int i = 0; i < 64; i++)
	{
		if (sBoard[i] == "WP0 ") {
			sWhitePawn0.setPosition(vSquares[i]);
		} 
		else if (sBoard[i] == "WP1 ") {
			sWhitePawn1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WP2 ") {
			sWhitePawn2.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WP3 ") {
			sWhitePawn3.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WP4 ") {
			sWhitePawn4.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WP5 ") {
			sWhitePawn5.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WP6 ") {
			sWhitePawn6.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WP7 ") {
			sWhitePawn7.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WR0 ") {
			sWhiteRook0.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WR1 ") {
			sWhiteRook1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WN0 ") {
			sWhiteKnight0.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WN1 ") {
			sWhiteKnight1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WBB ") {
			sWhiteBishop0.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WBW ") {
			sWhiteBishop1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "WQ  ") {
			sWhiteQueen.setPosition(vSquares[i]);
		}
		else if (sBoard[i] == "WK  ") {
			sWhiteKing.setPosition(vSquares[i]);
		}
		
		//////////////////////////////BLACK////////////////////////////////////////////////

		else if (sBoard[i] == "BP0 ") {
			sBlackPawn0.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BP1 ") {
			sBlackPawn1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BP2 ") {
			sBlackPawn2.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BP3 ") {
			sBlackPawn3.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BP4 ") {
			sBlackPawn4.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BP5 ") {
			sBlackPawn5.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BP6 ") {
			sBlackPawn6.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BP7 ") {
			sBlackPawn7.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BR0 ") {
			sBlackRook0.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BR1 ") {
			sBlackRook1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BN0 ") {
			sBlackKnight0.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BN1 ") {
			sBlackKnight1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BBW ") {
			sBlackBishop0.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BBB ") {
			sBlackBishop1.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BQ  ") {
			sBlackQueen.setPosition(vSquares[i]);
		}

		else if (sBoard[i] == "BK  ") {
			sBlackKing.setPosition(vSquares[i]);
		}
	}
}


int DrawBoard::getIndexFromMousePosition(float x, float y)
{
	if (x > 0 && x < fx0)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 0 << std::endl;
			return 0;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 8 << std::endl;
			return 8;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 16 << std::endl;
			return 15;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 24 << std::endl;
			return 24;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 32 << std::endl;
			return 32;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 40 << std::endl;
			return 40;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 48 << std::endl;
			return 48;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 56 << std::endl;
			return 56;
		}
	}

	else if (x > fx0 && x < fx1)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 1 << std::endl;
			return 1;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 9 << std::endl;
			return 9;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 17 << std::endl;
			return 17;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 25 << std::endl;
			return 25;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 33 << std::endl;
			return 33;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 41 << std::endl;
			return 41;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 49 << std::endl;
			return 49;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 57 << std::endl;
			return 57;
		}
	}

	else if (x > fx1 && x < fx2)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 2 << std::endl;
			return 2;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 10 << std::endl;
			return 10;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 18 << std::endl;
			return 18;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 26 << std::endl;
			return 26;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 34 << std::endl;
			return 34;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 42 << std::endl;
			return 42;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 50 << std::endl;
			return 50;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 58 << std::endl;
			return 58;
		}
	}


	else if (x > fx2 && x < fx3)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 3 << std::endl;
			return 3;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 11 << std::endl;
			return 11;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 19 << std::endl;
			return 19;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 27 << std::endl;
			return 27;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 35 << std::endl;
			return 35;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 43 << std::endl;
			return 43;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 51 << std::endl;
			return 51;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 59 << std::endl;
			return 59;
		}
	}


	else if (x > fx3 && x < fx4)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 4 << std::endl;
			return 4;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 12 << std::endl;
			return 12;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 20 << std::endl;
			return 20;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 28 << std::endl;
			return 28;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 36 << std::endl;
			return 36;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 44 << std::endl;
			return 44;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 52 << std::endl;
			return 52;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 60 << std::endl;
			return 60;
		}
	}


	else if (x > fx4 && x < fx5)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 5 << std::endl;
			return 5;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 13 << std::endl;
			return 13;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 21 << std::endl;
			return 21;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 29 << std::endl;
			return 29;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 37 << std::endl;
			return 37;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 45 << std::endl;
			return 45;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 53 << std::endl;
			return 53;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 61 << std::endl;
			return 61;
		}
	}

	else if (x > fx5 && x < fx6)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 6 << std::endl;
			return 6;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 14 << std::endl;
			return 14;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 22 << std::endl;
			return 22;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 30 << std::endl;
			return 30;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 38 << std::endl;
			return 38;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 46 << std::endl;
			return 46;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 54 << std::endl;
			return 54;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 62 << std::endl;
			return 62;
		}
	}

	else if (x > fx6 && x < fx7)
	{
		if (y > 0 && y < fy0)
		{
			std::cout << 7 << std::endl;
			return 7;
		}
		else if (y > fy0 && y < fy1)
		{
			std::cout << 15 << std::endl;
			return 15;
		}
		else if (y > fy1 && y < fy2)
		{
			std::cout << 23 << std::endl;
			return 23;
		}
		else if (y > fy2 && y < fy3)
		{
			std::cout << 31 << std::endl;
			return 31;
		}
		else if (y > fy3 && y < fy4)
		{
			std::cout << 39 << std::endl;
			return 39;
		}
		else if (y > fy4 && y < fy5)
		{
			std::cout << 47 << std::endl;
			return 47;
		}
		else if (y > fy5 && y < fy6)
		{
			std::cout << 55 << std::endl;
			return 55;
		}
		else if (y > fy6 && y < fy7)
		{
			std::cout << 63 << std::endl;
			return 63;
		}
	}

}

bool DrawBoard::checkIfTargetSquareIsValid(float x, float y, int index)
{
	return true;

}

void DrawBoard::draw(sf::RenderTarget& target, sf::RenderStates states) const {

	
	target.draw(sChessBoard, states);
	
	
	target.draw(sWhitePawn0, states);
	target.draw(sWhitePawn1, states);
	target.draw(sWhitePawn2, states);
	target.draw(sWhitePawn3, states);
	target.draw(sWhitePawn4, states);
	target.draw(sWhitePawn5, states);
	target.draw(sWhitePawn6, states);
	target.draw(sWhitePawn7, states);
	target.draw(sWhiteKing, states);
	target.draw(sWhiteQueen, states);
	target.draw(sWhiteBishop0, states);
	target.draw(sWhiteKnight0, states);
	target.draw(sWhiteRook0, states);
	target.draw(sWhiteBishop1, states);
	target.draw(sWhiteKnight1, states);
	target.draw(sWhiteRook1, states);  
	
	target.draw(sBlackPawn0, states);
	target.draw(sBlackPawn1, states);
	target.draw(sBlackPawn2, states);
	target.draw(sBlackPawn3, states);
	target.draw(sBlackPawn4, states);
	target.draw(sBlackPawn5, states);
	target.draw(sBlackPawn6, states);
	target.draw(sBlackPawn7, states);
	target.draw(sBlackKing, states);
	target.draw(sBlackQueen, states);
	target.draw(sBlackBishop0, states);
	target.draw(sBlackBishop1, states);
	target.draw(sBlackKnight0, states);
	target.draw(sBlackKnight1, states);
	target.draw(sBlackRook0, states);
	target.draw(sBlackRook1, states);
	
	}

