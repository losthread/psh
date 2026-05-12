#!/bin/bash
set -e

echo "Installing psh..."

# Check if make is installed
if ! command -v make &> /dev/null; then
    echo "Error: make is not installed"
    exit 1
fi

# Check if gcc is installed
if ! command -v gcc &> /dev/null; then
    echo "Error: gcc is not installed"
    exit 1
fi

# Build
make clean
make

# Install
echo "Installing to /usr/local/bin (requires sudo)..."
sudo make install

echo "✓ psh installed successfully!"
echo "Try running: psh"