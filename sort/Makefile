OBJES = main.o
CC    = gcc
OPT   = -Wall
LIB   =
TARGET= main

.c.o:
	$(CC) $(OPT) -c $<

$(TARGET) : $(OBJES)
	$(CC) $(OBJES) -o $(TARGET) $(OPT) $(LIB)

main.o :

clean :
	rm -rf $(OBJES) $(TARGET)