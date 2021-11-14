OBJS	= *.o
SOURCE	= *.cpp
HEADER	= 
OUT	= 12_1
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = -lm

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

*.o: *.cpp
	$(CC) $(FLAGS) *.cpp 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
