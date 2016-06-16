EXE=main
OBJ=main.o header.o
CXX=g++
CPPFLAGS=-Wall -g -MMD

$(EXE):$(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(EXE)

%.o:%.cpp
	 $(CXX) $(CPPFLAGS) -c $<

-include $(OBJ:.o=.d)

.PHONY: clean

clean:
	rm -f $(EXE) $(OBJ) $(OBJ:.o=.d)
