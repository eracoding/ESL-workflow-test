CFLAGS = -Wall -g
CCOM = gcc

SOURCES = main.c vectro3d.c
OBJECTS = $(SOURCES:.c=.o)

TARGET = my_program

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c
    $(CC) $(CFLAGS) -c $<

clean:
    rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
.PHONY: clean
