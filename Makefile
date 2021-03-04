CFLAGS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

build:
	gcc exemples/colision-test.c $(CFLAGS) -o  test

clean:
	rm -f build
