# Note that the spaces, tab, needs to be exact!

# The file we are going to create (destination) and how it comes to be (source)
# - here, math object depends on 2 objects, myMain.o, and myMathLib.o
math: myMain.o myMathLib.o
	g++ myMain.o myMathLib.o -o math

myMain.o: myMain.cpp
	g++ -c myMain.cpp

myMathLib.o: myMathLib.cpp
	g++ -c myMathLib.cpp

clean:
	rm *.o math