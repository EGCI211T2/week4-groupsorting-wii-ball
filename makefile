compile: main.cpp
	 g++  main.cpp -o sort

run: sort
	 ./sort insert 1 5 6 8 4 2
