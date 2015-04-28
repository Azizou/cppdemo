OBJECTS=main.o demo_pointer.o
a.out: $(OBJECTS)
	g++ -std=c++11 -o a.out $(OBJECTS)

.cpp.o:
	g++ -std=c++11 -g -c $<
