SRC = $(wildcard *.c)

TARGET = $(basename $(SRC))

kall: $(TARGET)
	./$(TARGET).out

$(TARGET): $(SRC)
	gcc -o $(TARGET).out $(SRC)

clean:
	rm -f $(TARGET).out
