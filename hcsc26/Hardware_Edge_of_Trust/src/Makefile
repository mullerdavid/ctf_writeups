# Edge of Trust - Host Client Application
#
# Build with:  make
# Requires:    libteec (OP-TEE client library)

CC      ?= gcc
CFLAGS  ?= -Wall -Wextra -O2
LDFLAGS ?= -lteec

TARGET  = edge_of_trust
SRC     = main.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC)
        $(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
        rm -f $(TARGET)