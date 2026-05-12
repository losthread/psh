CC = gcc
CFLAGS = -Wall -Wextra
TARGET = psh
SRC_DIR = src
SRC = $(SRC_DIR)/psh.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(SRC_DIR)/$(TARGET) $(SRC)

install: $(TARGET)
	install -d /usr/local/bin
	install -m 755 $(SRC_DIR)/$(TARGET) /usr/local/bin

uninstall:
	rm -f /usr/local/bin/$(TARGET)

clean:
	rm -f $(SRC_DIR)/$(TARGET)

.PHONY: install uninstall clean