all: ./bin/lesson2 ./bin/multicalc ./bin/binary ./bin/denary ./bin/stacy ./bin/assignment01 ./bin/assignment1 ./bin/positiveNegative ./bin/numGuessing ./bin/db ./bin/aquaPark ./bin/testExmp ./bin/validationLoop ./bin/numToString ./bin/marksProgram 

./bin/lesson2: lesson2.cpp
	g++ lesson2.cpp -o ./bin/lesson2

./bin/multicalc: multicalc.cpp
	g++ multicalc.cpp -o ./bin/multicalc

./bin/binary: binary.cpp
	g++ binary.cpp -o ./bin/binary

./bin/stacy: stacy.cpp
	g++ stacy.cpp -o ./bin/stacy	
	
./bin/denary: denary.cpp
	g++ denary.cpp -o ./bin/denary		

./bin/assignment01: assignment01.cpp
	g++ assignment01.cpp -o ./bin/assignment01		

./bin/assignment1: assignment1.cpp
	g++ assignment1.cpp -o ./bin/assignment1	

./bin/positiveNegative: positiveNegative.cpp
	g++ positiveNegative.cpp -o ./bin/positiveNegative	

./bin/numGuessing: numGuessing.cpp
	g++ numGuessing.cpp -o ./bin/numGuessing	

./bin/db: db.cpp
	g++ db.cpp -o ./bin/db	

./bin/aquaPark: aquaPark.cpp
	g++ aquaPark.cpp -o ./bin/aquaPark

./bin/testExmp: testExmp.cpp
	g++ testExmp.cpp -o ./bin/testExmp	

./bin/validationLoop: validationLoop.cpp
	g++ validationLoop.cpp -o ./bin/validationLoop	

./bin/numToString: numToString.cpp
	g++ numToString.cpp -o ./bin/numToString	

./bin/marksProgram: marksProgram.cpp
	g++ marksProgram.cpp -o ./bin/marksProgram	
