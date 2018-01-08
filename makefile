all: build run

build:
	@g++ -g /home/ktsirakos/Documents/Projects/hy352_2018/hy352_files/hy352_files/main.cpp 
	
	
run: 
	@echo "-------------------------------" && ./a.out
