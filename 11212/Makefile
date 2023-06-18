CC = g++

CFLAGS = -std=c++11 -O2 -Wall -Wextra -Wpedantic -Wnull-dereference -Wlogical-op -Wduplicated-cond -Wshadow -Wconversion


#En donde dice "TARGET = main" deberian cambiar main por el nombre de su archivo sin la extension ".cpp"
TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp
	
clean:
	$(RM) $(TARGET) out
	
run:
	cat in | ./main > out
	
run2:
	cat in | ./main
	
#Si quieren ver el resultado directamente en consola,
# cambiar la definicion de "run:" por la que esta debajo y de "clean:" borrar "out"
#run:
#	cat in | ./main 
