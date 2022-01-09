#include <SFML/Graphics.hpp>
#include <iostream>
#include <thread>
#include <vector>
#include "drawBoard.h"
 
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

struct lookUp
{
	float xLinePos;
	float yLinePos;

};

lookUp lU[64] = {/*index 0:*/fx0 - (fx0 / 2),fy0 - (fy0 / 2),/*index 1:*/fx1 - (fx0 / 2),fy0 - (fy0 / 2)/*index 2:*/,fx2 - (fx0 / 2),fy0 - (fy0 / 2),
				 /*index 3:*/fx3 - (fx0 / 2),fy0 - (fy0 / 2),/*index 4:*/fx4 - (fx0 / 2),fy0 - (fy0 / 2),/*index 5:*/fx5 - (fx0 / 2),fy0 - (fy0 / 2),
				 /*index 6:*/fx6 - (fx0 / 2),fy0 - (fy0 / 2),/*index 7:*/fx7 - (fx0 / 2),fy0 - (fy0 / 2),/*index 8:*/fx0 - (fx0 / 2),fy1 - (fy0 / 2),
				 /*index 9:*/fx1 - (fx0 / 2),fy1 - (fy0 / 2),/*index10:*/fx2 - (fx0 / 2),fy1 - (fy0 / 2),/*index11:*/fx3 - (fx0 / 2),fy1 - (fy0 / 2),
				 /*index12:*/fx4 - (fx0 / 2),fy1 - (fy0 / 2),/*index13:*/fx5 - (fx0 / 2),fy1 - (fy0 / 2),/*index14:*/fx6 - (fx0 / 2),fy1 - (fy0 / 2),
				 /*index15:*/fx7 - (fx0 / 2),fy1 - (fy0 / 2),/*index16:*/fx0 - (fx0 / 2),fy2 - (fy0 / 2),/*index17:*/fx1 - (fx0 / 2),fy2 - (fy0 / 2),
				 /*index18:*/fx2 - (fx0 / 2),fy2 - (fy0 / 2),/*index19:*/fx3 - (fx0 / 2),fy2 - (fy0 / 2),/*index20:*/fx4 - (fx0 / 2),fy2 - (fy0 / 2),
				 /*index21:*/fx5 - (fx0 / 2),fy2 - (fy0 / 2),/*index22:*/fx6 - (fx0 / 2),fy2 - (fy0 / 2),/*index23:*/fx7 - (fx0 / 2),fy2 - (fy0 / 2),
				 /*index24:*/fx0 - (fx0 / 2),fy3 - (fy0 / 2),/*index25:*/fx1 - (fx0 / 2),fy3 - (fy0 / 2),/*index26:*/fx2 - (fx0 / 2),fy3 - (fy0 / 2),
				 /*index27:*/fx3 - (fx0 / 2),fy3 - (fy0 / 2),/*index28:*/fx4 - (fx0 / 2),fy3 - (fy0 / 2),/*index29:*/fx5 - (fx0 / 2),fy3 - (fy0 / 2),
				 /*index30:*/fx6 - (fx0 / 2),fy3 - (fy0 / 2),/*index31:*/fx7 - (fx0 / 2),fy3 - (fy0 / 2),/*index32:*/fx0 - (fx0 / 2),fy4 - (fy0 / 2),
				 /*index33:*/fx1 - (fx0 / 2),fy4 - (fy0 / 2),/*index34:*/fx2 - (fx0 / 2),fy4 - (fy0 / 2),/*index35:*/fx3 - (fx0 / 2),fy4 - (fy0 / 2),
				 /*index36:*/fx4 - (fx0 / 2),fy4 - (fy0 / 2),/*index37:*/fx5 - (fx0 / 2),fy4 - (fy0 / 2),/*index38:*/fx6 - (fx0 / 2),fy4 - (fy0 / 2),
				 /*index39:*/fx7 - (fx0 / 2),fy4 - (fy0 / 2),/*index40:*/fx0 - (fx0 / 2),fy5 - (fy0 / 2),/*index41:*/fx1 - (fx0 / 2),fy5 - (fy0 / 2),
			     /*index42:*/fx2 - (fx0 / 2),fy5 - (fy0 / 2),/*index43:*/fx3 - (fx0 / 2),fy5 - (fy0 / 2),/*index44:*/fx4 - (fx0 / 2),fy5 - (fy0 / 2),
				 /*index45:*/fx5 - (fx0 / 2),fy5 - (fy0 / 2),/*index46:*/fx6 - (fx0 / 2),fy5 - (fy0 / 2),/*index47:*/fx7 - (fx0 / 2),fy5 - (fy0 / 2),
				 /*index48:*/fx0 - (fx0 / 2),fy6 - (fy0 / 2),/*index49:*/fx1 - (fx0 / 2),fy6 - (fy0 / 2),/*index50:*/fx2 - (fx0 / 2),fy6 - (fy0 / 2),
				 /*index51:*/fx3 - (fx0 / 2),fy6 - (fy0 / 2),/*index52:*/fx4 - (fx0 / 2),fy6 - (fy0 / 2),/*index53:*/fx5 - (fx0 / 2),fy6 - (fy0 / 2),
				 /*index54:*/fx6 - (fx0 / 2),fy6 - (fy0 / 2),/*index55:*/fx7 - (fx0 / 2),fy6 - (fy0 / 2),/*index56:*/fx0 - (fx0 / 2),fy7 - (fy0 / 2),
				 /*index57:*/fx1 - (fx0 / 2),fy7 - (fy0 / 2),/*index58:*/fx2 - (fx0 / 2),fy7 - (fy0 / 2),/*index59:*/fx3 - (fx0 / 2),fy7 - (fy0 / 2),
				 /*index60:*/fx4 - (fx0 / 2),fy7 - (fy0 / 2),/*index61:*/fx5 - (fx0 / 2),fy7 - (fy0 / 2),/*index62:*/fx6 - (fx0 / 2),fy7 - (fy0 / 2),
				 /*index63:*/fx7 - (fx0 / 2),fy7 - (fy0 / 2)};

int main()
{
	sf::RenderWindow window(sf::VideoMode(975, 975), "SFML works!");
	sf::RenderStates states;
	
	bool mousePressed = false;
	
	bool WhiteStartPieceSelected = false;
	bool whitesTurn = true;
	bool areLegalMovesPushed = false;
	bool areIndicationsShowing = false;
	bool rdyForTargetSelection = false;
	bool needToDisplay = false;

	bool blacksTurn = false;
	bool blacksStartPieceSelected = false;

	int startPiece = 65;
	int targetPiece = 65;

	std::vector<unsigned int> vLegalMoves;

	sf::CircleShape shape0;
	shape0.setRadius(15);
	shape0.setFillColor(sf::Color::Red);
	shape0.setPosition(-100, -200);
	shape0.setOrigin(shape0.getGlobalBounds().height / 2, shape0.getGlobalBounds().width / 2);

	sf::CircleShape shape1;
	shape1.setRadius(15);
	shape1.setFillColor(sf::Color::Red);
	shape1.setPosition(-100, -200);
	shape1.setOrigin(shape1.getGlobalBounds().height / 2, shape1.getGlobalBounds().width / 2);


	/*TEST*/

	sf::CircleShape testShape;
	
	testShape.setRadius(15);
	testShape.setFillColor(sf::Color::Red);
	testShape.setPosition(-100, -200);
	testShape.setOrigin(testShape.getGlobalBounds().height / 2, testShape.getGlobalBounds().width / 2);


	/*TEST END*/

	std::vector<sf::CircleShape> vMoveIndicationCircles;

	vMoveIndicationCircles.push_back(shape0);
	vMoveIndicationCircles.push_back(shape1);

	DrawBoard *board = new DrawBoard;
	sf::Clock clock;

	board->setAllSprites();
	


	while (window.isOpen())
	{
		float x = sf::Mouse::getPosition(window).x;
		float y = sf::Mouse::getPosition(window).y;
		sf::Time getElapsed = clock.getElapsedTime();


		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			 
			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					mousePressed = true;
				}
			}

			if (event.type == sf::Event::MouseButtonReleased) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					mousePressed = false;
				}
			}


		}
		
		
		
		
		if (mousePressed && whitesTurn && !WhiteStartPieceSelected) {
			if (board->sWhitePawn0.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP0 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}
			else if (board->sWhitePawn1.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP1 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}
			else if (board->sWhitePawn2.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP2 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}
			else if (board->sWhitePawn3.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP3 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}
			else if (board->sWhitePawn4.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP4 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}
			else if (board->sWhitePawn5.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP5 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}
			else if (board->sWhitePawn6.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP6 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}
			else if (board->sWhitePawn7.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
				for (int i = 0; i < 64; i++) {
					if (board->sBoard[i] == "WP7 ") {
						startPiece = i;
						WhiteStartPieceSelected = true;
					}
				}
			}

			////////////////////BLACK//////////////////////////////////////////

			if (mousePressed && blacksTurn && !blacksStartPieceSelected) {
				if (board->sBlackPawn0.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP0 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
				else if (board->sBlackPawn1.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP1 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
				else if (board->sBlackPawn2.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP2 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
				else if (board->sBlackPawn3.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP3 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
				else if (board->sBlackPawn4.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP4 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
				else if (board->sBlackPawn5.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP5 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
				else if (board->sBlackPawn6.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP6 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
				else if (board->sBlackPawn7.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
					for (int i = 0; i < 64; i++) {
						if (board->sBoard[i] == "BP7 ") {
							startPiece = i;
							blacksStartPieceSelected = true;
						}
					}
				}
			}


				//push all legal moves from selected piece into vector
				if (board->sBoard[startPiece] == "WP0 " || board->sBoard[startPiece] == "WP1 " || board->sBoard[startPiece] == "WP2 " || board->sBoard[startPiece] == "WP3 " ||
					board->sBoard[startPiece] == "WP4 " || board->sBoard[startPiece] == "WP5 " || board->sBoard[startPiece] == "WP6 " || board->sBoard[startPiece] == "WP7 ")
				{
					std::cout << board->sBoard[startPiece - 8] << std::endl;
					if (board->sBoard[startPiece - 8] == " X  ")
					{
						vLegalMoves.push_back(startPiece - 8);
					}
					if (board->sBoard[startPiece - 8] == " X  " && board->sBoard[startPiece - 16] == " X  ")
					{
						vLegalMoves.push_back(startPiece - 16);
					}
					areLegalMovesPushed = true;
					needToDisplay = true;
				}

				//same for blacks pawns
				if (board->sBoard[startPiece] == "BP0 " || board->sBoard[startPiece] == "BP1 " || board->sBoard[startPiece] == "BP2 " || board->sBoard[startPiece] == "BP3 " ||
					board->sBoard[startPiece] == "BP4 " || board->sBoard[startPiece] == "BP5 " || board->sBoard[startPiece] == "BP6 " || board->sBoard[startPiece] == "BP7 ")
				{
					std::cout << board->sBoard[startPiece + 8] << std::endl;
					if (board->sBoard[startPiece + 8] == " X  ")
					{
						vLegalMoves.push_back(startPiece - 8);
					}
					if (board->sBoard[startPiece + 8] == " X  " && board->sBoard[startPiece + 16] == " X  ")
					{
						vLegalMoves.push_back(startPiece + 16);
					}
					areLegalMovesPushed = true;
					needToDisplay = true;
				}

			}

			for (int i = 0; i < vLegalMoves.size(); i++)
			{
				std::cout << vLegalMoves[i] << std::endl;
			}

			//display legal moves from selected piece
			if (needToDisplay)
			{
				for (int i = 0; i < vLegalMoves.size(); i++)
				{
					vMoveIndicationCircles[i].setPosition(lU[vLegalMoves[i]].xLinePos, lU[vLegalMoves[i]].yLinePos);
				}
				areIndicationsShowing = true;
				rdyForTargetSelection = true;

			}

			if (rdyForTargetSelection && mousePressed && whitesTurn)
			{
				for (int i = 0; i < vLegalMoves.size(); i++)
				{
					if (board->getIndexFromMousePosition(x, y) == vLegalMoves[i])
					{
						targetPiece = vLegalMoves[i];
						//std::cout << "target: " << targetPiece << std::endl;
						std::string helper;

						helper = board->sBoard[targetPiece];
						board->sBoard[targetPiece] = board->sBoard[startPiece];
						board->sBoard[startPiece] = helper;

						vLegalMoves.clear();
						needToDisplay = false;
						rdyForTargetSelection = false;
						areIndicationsShowing = false;
						whitesTurn = false;
						blacksTurn = true;
						areLegalMovesPushed = false;

						std::cout << rdyForTargetSelection << "      DSFLKSDJF" << std::endl;
					}
				}
			}

			std::cout << "are indics: " << areIndicationsShowing << std::endl;

			board->setAllSprites();


			window.clear();

			board->draw(window, states);
			window.draw(testShape);
			if (areIndicationsShowing)
			{
				window.draw(vMoveIndicationCircles[0]);
				window.draw(vMoveIndicationCircles[1]);
				std::cout << "Test" << std::endl;
			}
			window.display();



		
	}
	return 0;
}



 
