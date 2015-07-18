strategoo : check yum-install Human.o Main.o Board.o Bomb.o Captain.o Colonel.o Computer.o EmptySpace.o Flag.o Game.o General.o Lieutenant.o Major.o Marshal.o Miner.o Piece.o PieceButton.o Player.o Scout.o Selector.o Sergeant.o Sound.o Sprite.o Spy.o Statistics.o StringInput.o
	g++ bin/Human.o bin/Main.o bin/Board.o bin/Bomb.o bin/Captain.o bin/Colonel.o bin/Computer.o bin/EmptySpace.o bin/Flag.o bin/Game.o bin/General.o bin/Lieutenant.o bin/Major.o bin/Marshal.o bin/Miner.o bin/Piece.o bin/PieceButton.o bin/Player.o bin/Scout.o bin/Selector.o bin/Sergeant.o bin/Sound.o bin/Sprite.o bin/Spy.o bin/Statistics.o bin/StringInput.o -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -o strategoo

check: gcc-exists yum-exists
gcc-exists:; @which g++ > /dev/null
yum-exists:; @which yum > /dev/null
yum-install:
	sudo yum install SDL-devel SDL_ttf-devel SDL_mixer-devel SDL_image-devel

Main.o :
	g++ -c lib/src/Main.cpp -Wall -o bin/Main.o
Game.o :
	g++ -c lib/src/Game.cpp -Wall -o bin/Game.o
Bomb.o :
	g++ -c lib/src/Bomb.cpp -Wall -o bin/Bomb.o
Board.o :
	g++ -c lib/src/Board.cpp -Wall -o bin/Board.o
Captain.o :
	g++ -c lib/src/Captain.cpp -Wall -o bin/Captain.o
Colonel.o :
	g++ -c lib/src/Colonel.cpp -Wall -o bin/Colonel.o
Computer.o :
	g++ -c lib/src/Computer.cpp -Wall -o bin/Computer.o
EmptySpace.o :
	g++ -c lib/src/EmptySpace.cpp -Wall -o bin/EmptySpace.o
Flag.o :
	g++ -c lib/src/Flag.cpp -Wall -o bin/Flag.o
General.o :
	g++ -c lib/src/General.cpp -Wall -o bin/General.o
Lieutenant.o :
	g++ -c lib/src/Lieutenant.cpp -Wall -o bin/Lieutenant.o
Major.o :
	g++ -c lib/src/Major.cpp -Wall -o bin/Major.o
Marshal.o :
	g++ -c lib/src/Marshal.cpp -Wall -o bin/Marshal.o
Miner.o :
	g++ -c lib/src/Miner.cpp -Wall -o bin/Miner.o
PieceButton.o :
	g++ -c lib/src/PieceButton.cpp -Wall -o bin/PieceButton.o
Player.o :
	g++ -c lib/src/Player.cpp -Wall -o bin/Player.o
Scout.o :
	g++ -c lib/src/Scout.cpp -Wall -o bin/Scout.o
Selector.o :
	g++ -c lib/src/Selector.cpp -Wall -o bin/Selector.o
Sergeant.o :
	g++ -c lib/src/Sergeant.cpp -Wall -o bin/Sergeant.o
Sound.o :
	g++ -c lib/src/Sound.cpp -Wall -o bin/Sound.o
Spy.o :
	g++ -c lib/src/Spy.cpp -Wall -o bin/Spy.o
Statistics.o :
	g++ -c lib/src/Statistics.cpp -Wall -o bin/Statistics.o
StringInput.o :
	g++ -c lib/src/StringInput.cpp -Wall -o bin/StringInput.o
Sprite.o :
	g++ -c lib/src/Sprite.cpp -Wall -o bin/Sprite.o
Piece.o :
	g++ -c lib/src/Piece.cpp -Wall -o bin/Piece.o
Human.o :
	g++ -c lib/src/Human.cpp -Wall -o bin/Human.o
