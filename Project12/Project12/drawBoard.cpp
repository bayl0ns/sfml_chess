#include "drawBoard.h"


DrawBoard::DrawBoard() {
	

	
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
	sWhiteKing.setScale(0.4, 0.4);
	sWhiteKing.setOrigin(sWhiteKing.getTextureRect().width / 2, sWhiteKing.getTextureRect().height / 2);
	
	 

	sWhiteQueen.setTexture(tWhiteQueen);
	sWhiteQueen.setScale(0.4, 0.4);
	sWhiteQueen.setOrigin(sWhiteQueen.getTextureRect().width / 2, sWhiteQueen.getTextureRect().height / 2);
	

	sWhiteBishop0.setTexture(tWhiteBishop);
	sWhiteBishop0.setScale(0.4, 0.4);
	sWhiteBishop0.setOrigin(sWhiteBishop0.getTextureRect().width / 2, sWhiteBishop0.getTextureRect().height / 2);
	

	sWhiteKnight0.setTexture(tWhiteKnight);
	sWhiteKnight0.setScale(-0.4, 0.4);
	sWhiteKnight0.setOrigin(sWhiteKnight0.getTextureRect().width / 2, sWhiteKnight0.getTextureRect().height / 2);
	

	sWhiteRook0.setTexture(tWhiteRook);
	sWhiteRook0.setScale(0.4, 0.4);
	sWhiteRook0.setOrigin(sWhiteRook0.getTextureRect().width / 2, sWhiteRook0.getTextureRect().height / 2);
	

	sWhiteBishop1.setTexture(tWhiteBishop);
	sWhiteBishop1.setScale(0.4, 0.4);
	sWhiteBishop1.setOrigin(sWhiteBishop1.getTextureRect().width / 2, sWhiteBishop1.getTextureRect().height / 2);
	

	sWhiteKnight1.setTexture(tWhiteKnight);
	sWhiteKnight1.setScale(0.4, 0.4);
	sWhiteKnight1.setOrigin(sWhiteKnight1.getTextureRect().width / 2, sWhiteKnight1.getTextureRect().height / 2);
	

	sWhiteRook1.setTexture(tWhiteRook);
	sWhiteRook1.setScale(0.4, 0.4);
	sWhiteRook1.setOrigin(sWhiteRook1.getTextureRect().width / 2, sWhiteRook1.getTextureRect().height / 2);
	

	sWhitePawn0.setTexture(tWhitePawn);
	sWhitePawn1.setTexture(tWhitePawn);
	sWhitePawn2.setTexture(tWhitePawn);
	sWhitePawn3.setTexture(tWhitePawn);
	sWhitePawn4.setTexture(tWhitePawn);
	sWhitePawn5.setTexture(tWhitePawn);
	sWhitePawn6.setTexture(tWhitePawn);
	sWhitePawn7.setTexture(tWhitePawn);
	
	sWhitePawn0.setScale(0.4, 0.4);
	sWhitePawn1.setScale(0.4, 0.4);
	sWhitePawn2.setScale(0.4, 0.4);
	sWhitePawn3.setScale(0.4, 0.4);
	sWhitePawn4.setScale(0.4, 0.4);
	sWhitePawn5.setScale(0.4, 0.4);
	sWhitePawn6.setScale(0.4, 0.4);
	sWhitePawn7.setScale(0.4, 0.4);

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

	sBlackPawn0.setScale(0.4, 0.4);
	sBlackPawn1.setScale(0.4, 0.4);
	sBlackPawn2.setScale(0.4, 0.4);
	sBlackPawn3.setScale(0.4, 0.4);
	sBlackPawn4.setScale(0.4, 0.4);
	sBlackPawn5.setScale(0.4, 0.4);
	sBlackPawn6.setScale(0.4, 0.4);
	sBlackPawn7.setScale(0.4, 0.4);

	sBlackPawn0.setOrigin(sBlackPawn0.getTextureRect().width / 2, sBlackPawn0.getTextureRect().height / 2);
	sBlackPawn1.setOrigin(sBlackPawn1.getTextureRect().width / 2, sBlackPawn1.getTextureRect().height / 2);
	sBlackPawn2.setOrigin(sBlackPawn2.getTextureRect().width / 2, sBlackPawn2.getTextureRect().height / 2);
	sBlackPawn3.setOrigin(sBlackPawn3.getTextureRect().width / 2, sBlackPawn3.getTextureRect().height / 2);
	sBlackPawn4.setOrigin(sBlackPawn4.getTextureRect().width / 2, sBlackPawn4.getTextureRect().height / 2);
	sBlackPawn5.setOrigin(sBlackPawn5.getTextureRect().width / 2, sBlackPawn5.getTextureRect().height / 2);
	sBlackPawn6.setOrigin(sBlackPawn6.getTextureRect().width / 2, sBlackPawn6.getTextureRect().height / 2);
	sBlackPawn7.setOrigin(sBlackPawn7.getTextureRect().width / 2, sBlackPawn7.getTextureRect().height / 2);

	

	sBlackKing.setTexture(tBlackKing);
	sBlackKing.setScale(0.4, 0.4);
	sBlackKing.setOrigin(sBlackKing.getTextureRect().width / 2, sBlackKing.getTextureRect().height / 2);

	sBlackQueen.setTexture(tBlackQueen);
	sBlackQueen.setScale(0.4, 0.4);
	sBlackQueen.setOrigin(sBlackQueen.getTextureRect().width / 2, sBlackQueen.getTextureRect().height / 2);

	sBlackBishop0.setTexture(tBlackBishop);
	sBlackBishop0.setScale(0.4, 0.4);
	sBlackBishop0.setOrigin(sBlackBishop0.getTextureRect().width / 2, sBlackBishop0.getTextureRect().height / 2);

	sBlackBishop1.setTexture(tBlackBishop);
	sBlackBishop1.setScale(0.4, 0.4);
	sBlackBishop1.setOrigin(sBlackBishop1.getTextureRect().width / 2, sBlackBishop1.getTextureRect().height / 2);

	sBlackKnight0.setTexture(tBlackKnight);
	sBlackKnight0.setScale(0.4, 0.4);
	sBlackKnight0.setOrigin(sBlackKnight0.getTextureRect().width / 2, sBlackKnight0.getTextureRect().height / 2);

	sBlackKnight1.setTexture(tBlackKnight);
	sBlackKnight1.setScale(0.4, 0.4);
	sBlackKnight1.setOrigin(sBlackKnight1.getTextureRect().width / 2, sBlackKnight1.getTextureRect().height / 2);
	
	sBlackRook0.setTexture(tBlackRook);
	sBlackRook0.setScale(0.4, 0.4);
	sBlackRook0.setOrigin(sBlackRook0.getTextureRect().width / 2, sBlackRook0.getTextureRect().height / 2);

	sBlackRook1.setTexture(tBlackRook);
	sBlackRook1.setScale(0.4, 0.4);
	sBlackRook1.setOrigin(sBlackRook1.getTextureRect().width / 2, sBlackRook1.getTextureRect().height / 2);
	
	
	

}


void DrawBoard::player1WhiteMove() {

	std::cout << "player 1, enter coords of piece you want to move" << std::endl;

	

	do {
		std::cin >> xTarget >> yTarget;
		xTarget = xTarget - 1;
		yTarget = yTarget - 1;
		parsedTargetCoords = yTarget * 8 + xTarget;
		if (sBoard[parsedTargetCoords][0] == 'W') {
			std::cout << sBoard[parsedTargetCoords] << " wurde gewaehlt" << std::endl;
		}
		else
		{
			std::cout << "falsch, nochmal" << std::endl;
		}

	} while (sBoard[parsedTargetCoords][0] != 'W');

	targetPiece = sBoard[parsedTargetCoords];

	std::cout << "player1, enter coords of destination" << std::endl;

	do {
		std::cin >> xDes >> yDes;
		xDes = xDes - 1;
		yDes = yDes - 1;
		parsedDesCoords = yDes * 8 + xDes;
		std::cout << sBoard[parsedDesCoords] << std::endl;


	} while (sBoard[parsedDesCoords][0] != 'B' && sBoard[parsedDesCoords][1] != 'X');

	desPiece = sBoard[parsedDesCoords];

	sBoard[parsedDesCoords] = targetPiece;
	sBoard[parsedTargetCoords] = desPiece;

	std::cout << " player 1, end of turn" << std::endl;


}

void DrawBoard::player2BlackMove() {

	std::cout << "player 2, enter coords of piece you want to move" << std::endl;
	do {


		std::cin >> xTarget >> yTarget;
		xTarget = xTarget - 1;
		yTarget = yTarget - 1;
		parsedTargetCoords = yTarget * 8 + xTarget;
		if (sBoard[parsedTargetCoords][0] == 'B') {
			std::cout << sBoard[parsedTargetCoords] << " wurde gewaehlt" << std::endl;
		}
		else
		{
			std::cout << "falsch, nochmal" << std::endl;
		}

	} while (sBoard[parsedTargetCoords][0] != 'B');

	targetPiece = sBoard[parsedTargetCoords];

	std::cout << "player2, enter coords of destination" << std::endl;

	do {
		std::cin >> xDes >> yDes;
		xDes = xDes - 1;
		yDes = yDes - 1;
		parsedDesCoords = yDes * 8 + xDes;
		std::cout << sBoard[parsedDesCoords] << std::endl;


	} while (sBoard[parsedDesCoords][0] != 'W' && sBoard[parsedDesCoords][1] != 'X');

	desPiece = sBoard[parsedDesCoords];

	sBoard[parsedDesCoords] = targetPiece;
	sBoard[parsedTargetCoords] = desPiece;

	std::cout << "nicee player 2, end of turn" << std::endl;

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

	//first wPawn = elemnt 48
	 
	
	for (int i = 0; i < 64; i++)
	{


		if (sBoard[i] == "WP0 ") {
			
			if (i == 0) sWhitePawn0.setPosition(sf::Vector2f(61, 61));  
			if (i == 1) sWhitePawn0.setPosition(sf::Vector2f(182.875, 61)); 
			if (i == 2) sWhitePawn0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn0.setPosition(sf::Vector2f(61, 182.875)); 
			if (i == 9) sWhitePawn0.setPosition(sf::Vector2f(182.875, 182.875)); 
			if (i == 10) sWhitePawn0.setPosition(sf::Vector2f(304.75, 182.875)); 
			if (i == 11) sWhitePawn0.setPosition(sf::Vector2f(426.625, 182.875)); 
			if (i == 12) sWhitePawn0.setPosition(sf::Vector2f(548.5, 182.875)); 
			if (i == 13) sWhitePawn0.setPosition(sf::Vector2f(670.375, 182.875)); 
			if (i == 14) sWhitePawn0.setPosition(sf::Vector2f(792.25, 182.875)); 
			if (i == 15) sWhitePawn0.setPosition(sf::Vector2f(914.125, 182.875)); 

			if (i == 16) sWhitePawn0.setPosition(sf::Vector2f(61, 304.75)); 
			if (i == 17) sWhitePawn0.setPosition(sf::Vector2f(182.875, 304.75)); 
			if (i == 18) sWhitePawn0.setPosition(sf::Vector2f(304.75, 304.75)); 
			if (i == 19) sWhitePawn0.setPosition(sf::Vector2f(426.625, 304.75)); 
			if (i == 20) sWhitePawn0.setPosition(sf::Vector2f(548.5, 304.75)); 
			if (i == 21) sWhitePawn0.setPosition(sf::Vector2f(670.375, 304.75)); 
			if (i == 22) sWhitePawn0.setPosition(sf::Vector2f(792.25, 304.75)); 
			if (i == 23) sWhitePawn0.setPosition(sf::Vector2f(914.125, 304.75)); 

			if (i == 24) sWhitePawn0.setPosition(sf::Vector2f(61, 426.625)); 
			if (i == 25) sWhitePawn0.setPosition(sf::Vector2f(182.875, 426.625)); 
			if (i == 26) sWhitePawn0.setPosition(sf::Vector2f(304.75, 426.625)); 
			if (i == 27) sWhitePawn0.setPosition(sf::Vector2f(426.625, 426.625)); 
			if (i == 28) sWhitePawn0.setPosition(sf::Vector2f(548.5, 426.625)); 
			if (i == 29) sWhitePawn0.setPosition(sf::Vector2f(670.375, 426.625)); 
			if (i == 30) sWhitePawn0.setPosition(sf::Vector2f(792.25, 426.625)); 
			if (i == 31) sWhitePawn0.setPosition(sf::Vector2f(914.125, 426.625)); 

			if (i == 32) sWhitePawn0.setPosition(sf::Vector2f(61, 548.5)); 
			if (i == 33) sWhitePawn0.setPosition(sf::Vector2f(182.875, 548.5)); 
			if (i == 34) sWhitePawn0.setPosition(sf::Vector2f(304.75, 548.5)); 
			if (i == 35) sWhitePawn0.setPosition(sf::Vector2f(426.625, 548.5)); 
			if (i == 36) sWhitePawn0.setPosition(sf::Vector2f(548.5, 548.5)); 
			if (i == 37) sWhitePawn0.setPosition(sf::Vector2f(670.375, 548.5)); 
			if (i == 38) sWhitePawn0.setPosition(sf::Vector2f(792.25, 548.5)); 
			if (i == 39) sWhitePawn0.setPosition(sf::Vector2f(914.125, 548.5)); 

			if (i == 40) sWhitePawn0.setPosition(sf::Vector2f(61, 670.375)); 
			if (i == 41) sWhitePawn0.setPosition(sf::Vector2f(182.875, 670.375)); 
			if (i == 42) sWhitePawn0.setPosition(sf::Vector2f(304.75, 670.375)); 
			if (i == 43) sWhitePawn0.setPosition(sf::Vector2f(426.625, 670.375)); 
			if (i == 44) sWhitePawn0.setPosition(sf::Vector2f(548.5, 670.375)); 
			if (i == 45) sWhitePawn0.setPosition(sf::Vector2f(670.375, 670.375)); 
			if (i == 46) sWhitePawn0.setPosition(sf::Vector2f(792.25, 670.375)); 
			if (i == 47) sWhitePawn0.setPosition(sf::Vector2f(914.125, 670.375)); 

			if (i == 48) sWhitePawn0.setPosition(sf::Vector2f(61, 792.25)); 
			if (i == 49) sWhitePawn0.setPosition(sf::Vector2f(182.875, 792.25)); 
			if (i == 50) sWhitePawn0.setPosition(sf::Vector2f(304.75, 792.25)); 
			if (i == 51) sWhitePawn0.setPosition(sf::Vector2f(426.625, 792.25)); 
			if (i == 52) sWhitePawn0.setPosition(sf::Vector2f(548.5, 792.25)); 
			if (i == 53) sWhitePawn0.setPosition(sf::Vector2f(670.375, 792.25)); 
			if (i == 54) sWhitePawn0.setPosition(sf::Vector2f(792.25, 792.25)); 
			if (i == 55) sWhitePawn0.setPosition(sf::Vector2f(914.125, 792.25)); 

			if (i == 56) sWhitePawn0.setPosition(sf::Vector2f(61, 914.125)); 
			if (i == 57) sWhitePawn0.setPosition(sf::Vector2f(182.875, 914.125)); 
			if (i == 58) sWhitePawn0.setPosition(sf::Vector2f(304.75, 914.125)); 
			if (i == 59) sWhitePawn0.setPosition(sf::Vector2f(426.625, 914.125)); 
			if (i == 60) sWhitePawn0.setPosition(sf::Vector2f(548.5, 914.125)); 
			if (i == 61) sWhitePawn0.setPosition(sf::Vector2f(670.375, 914.125)); 
			if (i == 62) sWhitePawn0.setPosition(sf::Vector2f(792.25, 914.125)); 
			if (i == 63) sWhitePawn0.setPosition(sf::Vector2f(914.125, 914.125));  
		}

		if (sBoard[i] == "WP1 ") {

			if (i == 0) sWhitePawn1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhitePawn1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhitePawn1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhitePawn1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhitePawn1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhitePawn1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhitePawn1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhitePawn1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhitePawn1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhitePawn1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhitePawn1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhitePawn1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhitePawn1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhitePawn1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhitePawn1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhitePawn1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhitePawn1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhitePawn1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhitePawn1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhitePawn1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhitePawn1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhitePawn1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhitePawn1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhitePawn1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhitePawn1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhitePawn1.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhitePawn1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhitePawn1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhitePawn1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhitePawn1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhitePawn1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhitePawn1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhitePawn1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhitePawn1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhitePawn1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhitePawn1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhitePawn1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhitePawn1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhitePawn1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhitePawn1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhitePawn1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhitePawn1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhitePawn1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhitePawn1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhitePawn1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhitePawn1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhitePawn1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhitePawn1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhitePawn1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhitePawn1.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhitePawn1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhitePawn1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhitePawn1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhitePawn1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhitePawn1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhitePawn1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhitePawn1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhitePawn1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WP2 ") {

			if (i == 0) sWhitePawn2.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhitePawn2.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhitePawn2.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn2.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn2.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn2.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn2.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn2.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn2.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhitePawn2.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhitePawn2.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhitePawn2.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhitePawn2.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhitePawn2.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhitePawn2.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhitePawn2.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhitePawn2.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhitePawn2.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhitePawn2.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhitePawn2.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhitePawn2.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhitePawn2.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhitePawn2.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhitePawn2.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhitePawn2.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhitePawn2.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhitePawn2.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhitePawn2.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhitePawn2.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhitePawn2.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhitePawn2.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhitePawn2.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhitePawn2.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhitePawn2.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhitePawn2.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhitePawn2.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhitePawn2.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhitePawn2.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhitePawn2.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhitePawn2.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhitePawn2.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhitePawn2.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhitePawn2.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhitePawn2.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhitePawn2.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhitePawn2.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhitePawn2.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhitePawn2.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhitePawn2.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhitePawn2.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhitePawn2.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhitePawn2.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhitePawn2.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhitePawn2.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhitePawn2.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhitePawn2.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhitePawn2.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhitePawn2.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhitePawn2.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhitePawn2.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhitePawn2.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhitePawn2.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhitePawn2.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhitePawn2.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WP3 ") {

			if (i == 0) sWhitePawn3.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhitePawn3.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhitePawn3.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn3.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn3.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn3.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn3.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn3.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn3.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhitePawn3.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhitePawn3.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhitePawn3.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhitePawn3.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhitePawn3.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhitePawn3.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhitePawn3.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhitePawn3.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhitePawn3.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhitePawn3.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhitePawn3.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhitePawn3.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhitePawn3.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhitePawn3.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhitePawn3.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhitePawn3.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhitePawn3.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhitePawn3.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhitePawn3.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhitePawn3.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhitePawn3.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhitePawn3.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhitePawn3.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhitePawn3.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhitePawn3.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhitePawn3.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhitePawn3.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhitePawn3.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhitePawn3.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhitePawn3.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhitePawn3.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhitePawn3.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhitePawn3.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhitePawn3.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhitePawn3.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhitePawn3.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhitePawn3.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhitePawn3.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhitePawn3.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhitePawn3.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhitePawn3.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhitePawn3.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhitePawn3.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhitePawn3.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhitePawn3.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhitePawn3.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhitePawn3.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhitePawn3.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhitePawn3.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhitePawn3.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhitePawn3.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhitePawn3.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhitePawn3.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhitePawn3.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhitePawn3.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WP4 ") {

			if (i == 0) sWhitePawn4.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhitePawn4.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhitePawn4.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn4.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn4.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn4.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn4.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn4.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn4.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhitePawn4.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhitePawn4.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhitePawn4.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhitePawn4.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhitePawn4.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhitePawn4.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhitePawn4.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhitePawn4.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhitePawn4.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhitePawn4.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhitePawn4.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhitePawn4.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhitePawn4.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhitePawn4.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhitePawn4.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhitePawn4.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhitePawn4.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhitePawn4.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhitePawn4.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhitePawn4.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhitePawn4.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhitePawn4.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhitePawn4.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhitePawn4.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhitePawn4.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhitePawn4.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhitePawn4.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhitePawn4.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhitePawn4.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhitePawn4.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhitePawn4.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhitePawn4.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhitePawn4.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhitePawn4.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhitePawn4.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhitePawn4.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhitePawn4.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhitePawn4.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhitePawn4.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhitePawn4.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhitePawn4.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhitePawn4.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhitePawn4.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhitePawn4.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhitePawn4.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhitePawn4.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhitePawn4.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhitePawn4.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhitePawn4.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhitePawn4.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhitePawn4.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhitePawn4.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhitePawn4.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhitePawn4.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhitePawn4.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WP5 ") {

			if (i == 0) sWhitePawn5.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhitePawn5.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhitePawn5.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn5.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn5.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn5.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn5.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn5.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn5.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhitePawn5.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhitePawn5.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhitePawn5.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhitePawn5.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhitePawn5.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhitePawn5.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhitePawn5.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhitePawn5.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhitePawn5.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhitePawn5.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhitePawn5.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhitePawn5.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhitePawn5.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhitePawn5.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhitePawn5.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhitePawn5.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhitePawn5.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhitePawn5.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhitePawn5.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhitePawn5.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhitePawn5.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhitePawn5.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhitePawn5.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhitePawn5.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhitePawn5.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhitePawn5.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhitePawn5.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhitePawn5.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhitePawn5.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhitePawn5.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhitePawn5.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhitePawn5.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhitePawn5.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhitePawn5.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhitePawn5.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhitePawn5.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhitePawn5.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhitePawn5.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhitePawn5.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhitePawn5.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhitePawn5.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhitePawn5.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhitePawn5.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhitePawn5.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhitePawn5.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhitePawn5.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhitePawn5.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhitePawn5.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhitePawn5.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhitePawn5.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhitePawn5.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhitePawn5.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhitePawn5.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhitePawn5.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhitePawn5.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WP6 ") {

			if (i == 0) sWhitePawn6.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhitePawn6.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhitePawn6.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn6.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn6.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn6.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn6.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn6.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn6.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhitePawn6.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhitePawn6.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhitePawn6.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhitePawn6.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhitePawn6.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhitePawn6.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhitePawn6.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhitePawn6.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhitePawn6.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhitePawn6.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhitePawn6.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhitePawn6.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhitePawn6.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhitePawn6.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhitePawn6.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhitePawn6.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhitePawn6.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhitePawn6.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhitePawn6.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhitePawn6.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhitePawn6.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhitePawn6.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhitePawn6.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhitePawn6.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhitePawn6.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhitePawn6.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhitePawn6.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhitePawn6.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhitePawn6.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhitePawn6.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhitePawn6.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhitePawn6.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhitePawn6.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhitePawn6.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhitePawn6.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhitePawn6.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhitePawn6.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhitePawn6.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhitePawn6.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhitePawn6.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhitePawn6.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhitePawn6.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhitePawn6.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhitePawn6.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhitePawn6.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhitePawn6.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhitePawn6.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhitePawn6.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhitePawn6.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhitePawn6.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhitePawn6.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhitePawn6.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhitePawn6.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhitePawn6.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhitePawn6.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WP7 ") {

			if (i == 0) sWhitePawn7.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhitePawn7.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhitePawn7.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhitePawn7.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhitePawn7.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhitePawn7.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhitePawn7.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhitePawn7.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhitePawn7.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhitePawn7.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhitePawn7.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhitePawn7.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhitePawn7.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhitePawn7.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhitePawn7.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhitePawn7.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhitePawn7.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhitePawn7.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhitePawn7.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhitePawn7.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhitePawn7.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhitePawn7.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhitePawn7.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhitePawn7.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhitePawn7.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhitePawn7.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhitePawn7.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhitePawn7.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhitePawn7.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhitePawn7.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhitePawn7.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhitePawn7.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhitePawn7.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhitePawn7.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhitePawn7.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhitePawn7.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhitePawn7.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhitePawn7.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhitePawn7.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhitePawn7.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhitePawn7.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhitePawn7.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhitePawn7.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhitePawn7.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhitePawn7.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhitePawn7.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhitePawn7.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhitePawn7.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhitePawn7.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhitePawn7.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhitePawn7.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhitePawn7.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhitePawn7.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhitePawn7.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhitePawn7.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhitePawn7.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhitePawn7.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhitePawn7.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhitePawn7.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhitePawn7.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhitePawn7.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhitePawn7.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhitePawn7.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhitePawn7.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WR0 ") {

			if (i == 0) sWhiteRook0.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteRook0.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteRook0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteRook0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteRook0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteRook0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteRook0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteRook0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteRook0.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteRook0.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteRook0.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteRook0.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteRook0.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteRook0.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteRook0.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteRook0.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteRook0.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteRook0.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteRook0.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteRook0.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteRook0.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteRook0.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteRook0.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteRook0.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteRook0.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteRook0.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteRook0.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteRook0.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteRook0.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteRook0.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteRook0.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteRook0.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteRook0.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteRook0.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteRook0.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteRook0.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteRook0.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteRook0.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteRook0.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteRook0.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteRook0.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteRook0.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteRook0.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteRook0.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteRook0.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteRook0.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteRook0.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteRook0.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteRook0.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteRook0.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteRook0.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteRook0.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteRook0.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteRook0.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteRook0.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteRook0.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhiteRook0.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteRook0.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteRook0.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteRook0.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteRook0.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteRook0.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteRook0.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteRook0.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WR1 ") {

			if (i == 0) sWhiteRook1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteRook1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteRook1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteRook1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteRook1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteRook1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteRook1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteRook1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteRook1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteRook1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteRook1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteRook1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteRook1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteRook1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteRook1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteRook1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteRook1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteRook1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteRook1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteRook1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteRook1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteRook1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteRook1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteRook1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteRook1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteRook1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteRook1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteRook1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteRook1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteRook1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteRook1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteRook1.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteRook1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteRook1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteRook1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteRook1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteRook1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteRook1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteRook1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteRook1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteRook1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteRook1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteRook1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteRook1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteRook1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteRook1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteRook1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteRook1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteRook1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteRook1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteRook1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteRook1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteRook1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteRook1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteRook1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteRook1.setPosition(sf::Vector2f(914.125, 792.25));
		
			if (i == 56) sWhiteRook1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteRook1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteRook1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteRook1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteRook1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteRook1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteRook1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteRook1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WN0 ") {

			if (i == 0) sWhiteKnight0.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteKnight0.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteKnight0.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteKnight0.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteKnight0.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteKnight0.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteKnight0.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhiteKnight0.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteKnight0.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteKnight0.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteKnight0.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteKnight0.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteKnight0.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteKnight0.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteKnight0.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WN1 ") {

			if (i == 0) sWhiteKnight1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteKnight1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteKnight1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteKnight1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteKnight1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteKnight1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteKnight1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhiteKnight1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteKnight1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteKnight1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteKnight1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteKnight1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteKnight1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteKnight1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteKnight1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WBB ") {

			if (i == 0) sWhiteBishop0.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteBishop0.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteBishop0.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteBishop0.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteBishop0.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteBishop0.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteBishop0.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhiteBishop0.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteBishop0.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteBishop0.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteBishop0.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteBishop0.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteBishop0.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteBishop0.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteBishop0.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WBW ") {

			if (i == 0) sWhiteBishop1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteBishop1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteBishop1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteBishop1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteBishop1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteBishop1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteBishop1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhiteBishop1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteBishop1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteBishop1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteBishop1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteBishop1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteBishop1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteBishop1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteBishop1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "WQ  ") {

			if (i == 0) sWhiteQueen.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteQueen.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteQueen.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteQueen.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteQueen.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteQueen.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteQueen.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteQueen.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteQueen.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteQueen.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteQueen.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteQueen.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteQueen.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteQueen.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteQueen.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteQueen.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteQueen.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteQueen.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteQueen.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteQueen.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteQueen.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteQueen.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteQueen.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteQueen.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteQueen.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteQueen.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteQueen.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteQueen.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteQueen.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteQueen.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteQueen.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteQueen.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteQueen.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteQueen.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteQueen.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteQueen.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteQueen.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteQueen.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteQueen.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteQueen.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteQueen.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteQueen.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteQueen.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteQueen.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteQueen.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteQueen.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteQueen.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteQueen.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteQueen.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteQueen.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteQueen.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteQueen.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteQueen.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteQueen.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteQueen.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteQueen.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhiteQueen.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteQueen.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteQueen.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteQueen.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteQueen.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteQueen.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteQueen.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteQueen.setPosition(sf::Vector2f(914.125, 914.125));
		}


		if (sBoard[i] == "WK  ") {

			if (i == 0) sWhiteKing.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sWhiteKing.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sWhiteKing.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sWhiteKing.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sWhiteKing.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sWhiteKing.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sWhiteKing.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sWhiteKing.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sWhiteKing.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sWhiteKing.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sWhiteKing.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sWhiteKing.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sWhiteKing.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sWhiteKing.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sWhiteKing.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sWhiteKing.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sWhiteKing.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sWhiteKing.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sWhiteKing.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sWhiteKing.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sWhiteKing.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sWhiteKing.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sWhiteKing.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sWhiteKing.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sWhiteKing.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sWhiteKing.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sWhiteKing.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sWhiteKing.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sWhiteKing.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sWhiteKing.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sWhiteKing.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sWhiteKing.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sWhiteKing.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sWhiteKing.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sWhiteKing.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sWhiteKing.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sWhiteKing.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sWhiteKing.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sWhiteKing.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sWhiteKing.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sWhiteKing.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sWhiteKing.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sWhiteKing.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sWhiteKing.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sWhiteKing.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sWhiteKing.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sWhiteKing.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sWhiteKing.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sWhiteKing.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sWhiteKing.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sWhiteKing.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sWhiteKing.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sWhiteKing.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sWhiteKing.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sWhiteKing.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sWhiteKing.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sWhiteKing.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sWhiteKing.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sWhiteKing.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sWhiteKing.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sWhiteKing.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sWhiteKing.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sWhiteKing.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sWhiteKing.setPosition(sf::Vector2f(914.125, 914.125));
		}
		
		//////////////////////////////BLACK////////////////////////////////////////////////

		if (sBoard[i] == "BP0 ") {

			if (i == 0) sBlackPawn0.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn0.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn0.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn0.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn0.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn0.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn0.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn0.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn0.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn0.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn0.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn0.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn0.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn0.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn0.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn0.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn0.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn0.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn0.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn0.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn0.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn0.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn0.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn0.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn0.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn0.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn0.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn0.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn0.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn0.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn0.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn0.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn0.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn0.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn0.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn0.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn0.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn0.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn0.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn0.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn0.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn0.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn0.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn0.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn0.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn0.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn0.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn0.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn0.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn0.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn0.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn0.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn0.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn0.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn0.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn0.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn0.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn0.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BP1 ") {

			if (i == 0) sBlackPawn1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn1.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn1.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BP2 ") {

			if (i == 0) sBlackPawn2.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn2.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn2.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn2.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn2.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn2.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn2.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn2.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn2.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn2.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn2.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn2.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn2.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn2.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn2.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn2.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn2.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn2.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn2.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn2.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn2.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn2.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn2.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn2.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn2.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn2.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn2.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn2.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn2.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn2.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn2.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn2.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn2.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn2.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn2.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn2.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn2.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn2.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn2.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn2.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn2.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn2.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn2.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn2.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn2.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn2.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn2.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn2.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn2.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn2.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn2.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn2.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn2.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn2.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn2.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn2.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn2.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn2.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn2.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn2.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn2.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn2.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn2.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn2.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BP3 ") {

			if (i == 0) sBlackPawn3.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn3.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn3.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn3.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn3.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn3.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn3.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn3.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn3.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn3.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn3.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn3.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn3.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn3.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn3.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn3.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn3.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn3.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn3.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn3.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn3.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn3.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn3.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn3.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn3.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn3.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn3.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn3.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn3.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn3.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn3.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn3.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn3.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn3.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn3.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn3.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn3.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn3.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn3.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn3.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn3.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn3.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn3.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn3.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn3.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn3.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn3.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn3.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn3.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn3.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn3.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn3.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn3.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn3.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn3.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn3.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn3.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn3.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn3.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn3.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn3.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn3.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn3.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn3.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BP4 ") {

			if (i == 0) sBlackPawn4.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn4.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn4.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn4.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn4.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn4.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn4.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn4.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn4.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn4.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn4.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn4.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn4.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn4.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn4.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn4.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn4.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn4.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn4.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn4.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn4.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn4.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn4.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn4.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn4.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn4.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn4.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn4.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn4.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn4.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn4.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn4.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn4.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn4.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn4.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn4.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn4.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn4.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn4.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn4.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn4.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn4.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn4.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn4.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn4.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn4.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn4.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn4.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn4.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn4.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn4.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn4.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn4.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn4.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn4.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn4.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn4.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn4.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn4.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn4.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn4.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn4.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn4.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn4.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BP5 ") {

			if (i == 0) sBlackPawn5.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn5.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn5.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn5.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn5.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn5.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn5.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn5.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn5.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn5.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn5.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn5.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn5.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn5.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn5.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn5.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn5.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn5.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn5.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn5.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn5.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn5.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn5.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn5.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn5.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn5.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn5.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn5.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn5.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn5.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn5.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn5.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn5.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn5.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn5.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn5.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn5.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn5.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn5.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn5.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn5.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn5.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn5.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn5.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn5.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn5.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn5.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn5.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn5.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn5.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn5.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn5.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn5.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn5.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn5.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn5.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn5.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn5.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn5.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn5.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn5.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn5.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn5.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn5.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BP6 ") {

			if (i == 0) sBlackPawn6.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn6.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn6.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn6.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn6.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn6.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn6.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn6.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn6.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn6.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn6.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn6.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn6.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn6.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn6.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn6.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn6.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn6.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn6.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn6.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn6.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn6.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn6.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn6.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn6.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn6.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn6.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn6.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn6.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn6.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn6.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn6.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn6.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn6.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn6.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn6.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn6.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn6.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn6.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn6.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn6.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn6.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn6.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn6.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn6.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn6.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn6.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn6.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn6.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn6.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn6.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn6.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn6.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn6.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn6.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn6.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn6.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn6.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn6.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn6.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn6.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn6.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn6.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn6.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BP7 ") {

			if (i == 0) sBlackPawn7.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackPawn7.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackPawn7.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackPawn7.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackPawn7.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackPawn7.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackPawn7.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackPawn7.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackPawn7.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackPawn7.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackPawn7.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackPawn7.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackPawn7.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackPawn7.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackPawn7.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackPawn7.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackPawn7.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackPawn7.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackPawn7.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackPawn7.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackPawn7.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackPawn7.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackPawn7.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackPawn7.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackPawn7.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackPawn7.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackPawn7.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackPawn7.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackPawn7.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackPawn7.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackPawn7.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackPawn7.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackPawn7.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackPawn7.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackPawn7.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackPawn7.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackPawn7.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackPawn7.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackPawn7.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackPawn7.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackPawn7.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackPawn7.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackPawn7.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackPawn7.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackPawn7.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackPawn7.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackPawn7.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackPawn7.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackPawn7.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackPawn7.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackPawn7.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackPawn7.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackPawn7.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackPawn7.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackPawn7.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackPawn7.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackPawn7.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackPawn7.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackPawn7.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackPawn7.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackPawn7.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackPawn7.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackPawn7.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackPawn7.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BR0 ") {

			if (i == 0) sBlackRook0.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackRook0.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackRook0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackRook0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackRook0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackRook0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackRook0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackRook0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackRook0.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackRook0.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackRook0.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackRook0.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackRook0.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackRook0.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackRook0.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackRook0.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackRook0.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackRook0.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackRook0.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackRook0.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackRook0.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackRook0.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackRook0.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackRook0.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackRook0.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackRook0.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackRook0.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackRook0.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackRook0.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackRook0.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackRook0.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackRook0.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackRook0.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackRook0.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackRook0.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackRook0.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackRook0.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackRook0.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackRook0.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackRook0.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackRook0.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackRook0.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackRook0.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackRook0.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackRook0.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackRook0.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackRook0.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackRook0.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackRook0.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackRook0.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackRook0.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackRook0.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackRook0.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackRook0.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackRook0.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackRook0.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackRook0.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackRook0.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackRook0.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackRook0.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackRook0.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackRook0.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackRook0.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackRook0.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BR1 ") {

			if (i == 0) sBlackRook1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackRook1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackRook1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackRook1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackRook1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackRook1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackRook1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackRook1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackRook1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackRook1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackRook1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackRook1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackRook1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackRook1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackRook1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackRook1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackRook1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackRook1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackRook1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackRook1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackRook1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackRook1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackRook1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackRook1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackRook1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackRook1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackRook1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackRook1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackRook1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackRook1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackRook1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackRook1.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackRook1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackRook1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackRook1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackRook1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackRook1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackRook1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackRook1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackRook1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackRook1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackRook1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackRook1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackRook1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackRook1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackRook1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackRook1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackRook1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackRook1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackRook1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackRook1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackRook1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackRook1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackRook1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackRook1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackRook1.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackRook1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackRook1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackRook1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackRook1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackRook1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackRook1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackRook1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackRook1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BN0 ") {

			if (i == 0) sBlackKnight0.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackKnight0.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackKnight0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackKnight0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackKnight0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackKnight0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackKnight0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackKnight0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackKnight0.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackKnight0.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackKnight0.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackKnight0.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackKnight0.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackKnight0.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackKnight0.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackKnight0.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackKnight0.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackKnight0.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackKnight0.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackKnight0.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackKnight0.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackKnight0.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackKnight0.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackKnight0.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackKnight0.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackKnight0.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackKnight0.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackKnight0.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackKnight0.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackKnight0.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackKnight0.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackKnight0.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackKnight0.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackKnight0.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackKnight0.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackKnight0.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackKnight0.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackKnight0.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackKnight0.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackKnight0.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackKnight0.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackKnight0.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackKnight0.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackKnight0.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackKnight0.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackKnight0.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackKnight0.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackKnight0.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackKnight0.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackKnight0.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackKnight0.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackKnight0.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackKnight0.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackKnight0.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackKnight0.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackKnight0.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackKnight0.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackKnight0.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackKnight0.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackKnight0.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackKnight0.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackKnight0.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackKnight0.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackKnight0.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BN1 ") {

			if (i == 0) sBlackKnight1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackKnight1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackKnight1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackKnight1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackKnight1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackKnight1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackKnight1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackKnight1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackKnight1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackKnight1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackKnight1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackKnight1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackKnight1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackKnight1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackKnight1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackKnight1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackKnight1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackKnight1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackKnight1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackKnight1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackKnight1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackKnight1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackKnight1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackKnight1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackKnight1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackKnight1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackKnight1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackKnight1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackKnight1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackKnight1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackKnight1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackKnight1.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackKnight1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackKnight1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackKnight1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackKnight1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackKnight1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackKnight1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackKnight1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackKnight1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackKnight1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackKnight1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackKnight1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackKnight1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackKnight1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackKnight1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackKnight1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackKnight1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackKnight1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackKnight1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackKnight1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackKnight1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackKnight1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackKnight1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackKnight1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackKnight1.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackKnight1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackKnight1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackKnight1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackKnight1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackKnight1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackKnight1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackKnight1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackKnight1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BBW ") {

			if (i == 0) sBlackBishop0.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackBishop0.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackBishop0.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackBishop0.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackBishop0.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackBishop0.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackBishop0.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackBishop0.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackBishop0.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackBishop0.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackBishop0.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackBishop0.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackBishop0.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackBishop0.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackBishop0.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackBishop0.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackBishop0.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackBishop0.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackBishop0.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackBishop0.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackBishop0.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackBishop0.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackBishop0.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackBishop0.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackBishop0.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackBishop0.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackBishop0.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackBishop0.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackBishop0.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackBishop0.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackBishop0.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackBishop0.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackBishop0.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackBishop0.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackBishop0.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackBishop0.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackBishop0.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackBishop0.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackBishop0.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackBishop0.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackBishop0.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackBishop0.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackBishop0.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackBishop0.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackBishop0.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackBishop0.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackBishop0.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackBishop0.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackBishop0.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackBishop0.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackBishop0.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackBishop0.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackBishop0.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackBishop0.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackBishop0.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackBishop0.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackBishop0.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackBishop0.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackBishop0.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackBishop0.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackBishop0.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackBishop0.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackBishop0.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackBishop0.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BBB ") {

			if (i == 0) sBlackBishop1.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackBishop1.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackBishop1.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackBishop1.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackBishop1.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackBishop1.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackBishop1.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackBishop1.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackBishop1.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackBishop1.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackBishop1.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackBishop1.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackBishop1.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackBishop1.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackBishop1.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackBishop1.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackBishop1.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackBishop1.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackBishop1.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackBishop1.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackBishop1.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackBishop1.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackBishop1.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackBishop1.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackBishop1.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackBishop1.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackBishop1.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackBishop1.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackBishop1.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackBishop1.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackBishop1.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackBishop1.setPosition(sf::Vector2f(914.125, 426.625));
	
			if (i == 32) sBlackBishop1.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackBishop1.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackBishop1.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackBishop1.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackBishop1.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackBishop1.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackBishop1.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackBishop1.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackBishop1.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackBishop1.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackBishop1.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackBishop1.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackBishop1.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackBishop1.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackBishop1.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackBishop1.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackBishop1.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackBishop1.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackBishop1.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackBishop1.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackBishop1.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackBishop1.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackBishop1.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackBishop1.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackBishop1.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackBishop1.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackBishop1.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackBishop1.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackBishop1.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackBishop1.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackBishop1.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackBishop1.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BQ  ") {

			if (i == 0) sBlackQueen.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackQueen.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackQueen.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackQueen.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackQueen.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackQueen.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackQueen.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackQueen.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackQueen.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackQueen.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackQueen.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackQueen.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackQueen.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackQueen.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackQueen.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackQueen.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackQueen.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackQueen.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackQueen.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackQueen.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackQueen.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackQueen.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackQueen.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackQueen.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackQueen.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackQueen.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackQueen.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackQueen.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackQueen.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackQueen.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackQueen.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackQueen.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackQueen.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackQueen.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackQueen.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackQueen.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackQueen.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackQueen.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackQueen.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackQueen.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackQueen.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackQueen.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackQueen.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackQueen.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackQueen.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackQueen.setPosition(sf::Vector2f(670.375, 670.375));
			if (i == 46) sBlackQueen.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackQueen.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackQueen.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackQueen.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackQueen.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackQueen.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackQueen.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackQueen.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackQueen.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackQueen.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackQueen.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackQueen.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackQueen.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackQueen.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackQueen.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackQueen.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackQueen.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackQueen.setPosition(sf::Vector2f(914.125, 914.125));
		}

		if (sBoard[i] == "BK  ") {

			if (i == 0) sBlackKing.setPosition(sf::Vector2f(61, 61));
			if (i == 1) sBlackKing.setPosition(sf::Vector2f(182.875, 61));
			if (i == 2) sBlackKing.setPosition(sf::Vector2f(304.75, 61));
			if (i == 3) sBlackKing.setPosition(sf::Vector2f(426.625, 61));
			if (i == 4) sBlackKing.setPosition(sf::Vector2f(548.5, 61));
			if (i == 5) sBlackKing.setPosition(sf::Vector2f(670.375, 61));
			if (i == 6) sBlackKing.setPosition(sf::Vector2f(792.25, 61));
			if (i == 7) sBlackKing.setPosition(sf::Vector2f(914.125, 61));

			if (i == 8) sBlackKing.setPosition(sf::Vector2f(61, 182.875));
			if (i == 9) sBlackKing.setPosition(sf::Vector2f(182.875, 182.875));
			if (i == 10) sBlackKing.setPosition(sf::Vector2f(304.75, 182.875));
			if (i == 11) sBlackKing.setPosition(sf::Vector2f(426.625, 182.875));
			if (i == 12) sBlackKing.setPosition(sf::Vector2f(548.5, 182.875));
			if (i == 13) sBlackKing.setPosition(sf::Vector2f(670.375, 182.875));
			if (i == 14) sBlackKing.setPosition(sf::Vector2f(792.25, 182.875));
			if (i == 15) sBlackKing.setPosition(sf::Vector2f(914.125, 182.875));

			if (i == 16) sBlackKing.setPosition(sf::Vector2f(61, 304.75));
			if (i == 17) sBlackKing.setPosition(sf::Vector2f(182.875, 304.75));
			if (i == 18) sBlackKing.setPosition(sf::Vector2f(304.75, 304.75));
			if (i == 19) sBlackKing.setPosition(sf::Vector2f(426.625, 304.75));
			if (i == 20) sBlackKing.setPosition(sf::Vector2f(548.5, 304.75));
			if (i == 21) sBlackKing.setPosition(sf::Vector2f(670.375, 304.75));
			if (i == 22) sBlackKing.setPosition(sf::Vector2f(792.25, 304.75));
			if (i == 23) sBlackKing.setPosition(sf::Vector2f(914.125, 304.75));

			if (i == 24) sBlackKing.setPosition(sf::Vector2f(61, 426.625));
			if (i == 25) sBlackKing.setPosition(sf::Vector2f(182.875, 426.625));
			if (i == 26) sBlackKing.setPosition(sf::Vector2f(304.75, 426.625));
			if (i == 27) sBlackKing.setPosition(sf::Vector2f(426.625, 426.625));
			if (i == 28) sBlackKing.setPosition(sf::Vector2f(548.5, 426.625));
			if (i == 29) sBlackKing.setPosition(sf::Vector2f(670.375, 426.625));
			if (i == 30) sBlackKing.setPosition(sf::Vector2f(792.25, 426.625));
			if (i == 31) sBlackKing.setPosition(sf::Vector2f(914.125, 426.625));

			if (i == 32) sBlackKing.setPosition(sf::Vector2f(61, 548.5));
			if (i == 33) sBlackKing.setPosition(sf::Vector2f(182.875, 548.5));
			if (i == 34) sBlackKing.setPosition(sf::Vector2f(304.75, 548.5));
			if (i == 35) sBlackKing.setPosition(sf::Vector2f(426.625, 548.5));
			if (i == 36) sBlackKing.setPosition(sf::Vector2f(548.5, 548.5));
			if (i == 37) sBlackKing.setPosition(sf::Vector2f(670.375, 548.5));
			if (i == 38) sBlackKing.setPosition(sf::Vector2f(792.25, 548.5));
			if (i == 39) sBlackKing.setPosition(sf::Vector2f(914.125, 548.5));

			if (i == 40) sBlackKing.setPosition(sf::Vector2f(61, 670.375));
			if (i == 41) sBlackKing.setPosition(sf::Vector2f(182.875, 670.375));
			if (i == 42) sBlackKing.setPosition(sf::Vector2f(304.75, 670.375));
			if (i == 43) sBlackKing.setPosition(sf::Vector2f(426.625, 670.375));
			if (i == 44) sBlackKing.setPosition(sf::Vector2f(548.5, 670.375));
			if (i == 45) sBlackKing.setPosition(sf::Vector2f(670.375, 670.375));

			if (i == 46) sBlackKing.setPosition(sf::Vector2f(792.25, 670.375));
			if (i == 47) sBlackKing.setPosition(sf::Vector2f(914.125, 670.375));

			if (i == 48) sBlackKing.setPosition(sf::Vector2f(61, 792.25));
			if (i == 49) sBlackKing.setPosition(sf::Vector2f(182.875, 792.25));
			if (i == 50) sBlackKing.setPosition(sf::Vector2f(304.75, 792.25));
			if (i == 51) sBlackKing.setPosition(sf::Vector2f(426.625, 792.25));
			if (i == 52) sBlackKing.setPosition(sf::Vector2f(548.5, 792.25));
			if (i == 53) sBlackKing.setPosition(sf::Vector2f(670.375, 792.25));
			if (i == 54) sBlackKing.setPosition(sf::Vector2f(792.25, 792.25));
			if (i == 55) sBlackKing.setPosition(sf::Vector2f(914.125, 792.25));

			if (i == 56) sBlackKing.setPosition(sf::Vector2f(61, 914.125));
			if (i == 57) sBlackKing.setPosition(sf::Vector2f(182.875, 914.125));
			if (i == 58) sBlackKing.setPosition(sf::Vector2f(304.75, 914.125));
			if (i == 59) sBlackKing.setPosition(sf::Vector2f(426.625, 914.125));
			if (i == 60) sBlackKing.setPosition(sf::Vector2f(548.5, 914.125));
			if (i == 61) sBlackKing.setPosition(sf::Vector2f(670.375, 914.125));
			if (i == 62) sBlackKing.setPosition(sf::Vector2f(792.25, 914.125));
			if (i == 63) sBlackKing.setPosition(sf::Vector2f(914.125, 914.125));
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

