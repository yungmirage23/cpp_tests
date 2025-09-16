all:
	g++ program.cpp -g -o build/program

run: all
	./build/program

clean:
	rm -f build/program
