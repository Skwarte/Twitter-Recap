all:
	g++ -g -o program tr.cpp -std=c++11
clean: 
	$(RM) program 
