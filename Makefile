build:
	mkdir -p build
	cd build && cmake .. && make

run:
	./build/turn_based_game

clean:
	rm -rf build

.PHONY: clean build run