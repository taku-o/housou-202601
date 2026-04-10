TARGET = a.out
SRC = sqr.c

all:
	gcc $(SRC) -o $(TARGET)
	./$(TARGET)

test:
	gcc -DTEST_ENABLED=1 $(SRC) -o $(TARGET)
	./$(TARGET)

