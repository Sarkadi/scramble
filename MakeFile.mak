CPP=g++
EXECUTABLE_NAME=switching
TEST_NAME=testProgram
LIBRARIES=-lgtest -lgtest_main -lpthread

switching.exe: main.o
	g++ -o switching.exe /home/peti/petitest/main.cpp /home/peti/petitest/switching.cpp
	./switching.exe

main.o: switching.o
	g++ -c  /home/peti/petitest/main.cpp

switching.o:
	g++ -c  /home/peti/petitest/switching.cpp
