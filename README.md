# psh
A minimal shell written in C

## Features
- Execute system commands
- Built-in commands (`cd`, `exit`, `pwd`)
- Command history navigation
- Supports Linux and MacOS
- Lightweight and fast

## Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/psh.git
cd psh

# Quick Install (installation bash script)
./install.sh

# Manual Install (makefile)
make
sudo make install
```

## Uninstall
```bash
sudo make uninstall
```

## Usage
Launch psh by typing:
```bash
psh
```
inside your terminal

### Example Commands

**Basic commands:**
```bash
psh> ls -la
psh> cat file.txt
psh> echo "Hello, World!"
psh> mkdir newfolder
```

## What is a Shell exactly?
A shell is the interface that sits between the applications and the kernel. It takes a command, parses it, separates it into tokens, executes system calls based on them

## psh Shell Lifecycle
1. Prompt
2. Read input
3. Lex input
4. Parse Lexed input
5. Interpret Parsed input
6. Repeat
7. Cleanup

## Current Limitations ⚠️
- No pipe support (`|`) yet
- No redirection (`>`, `<`) yet
- No logical operators (`&&`, `||`) yet
- No background processes (`&`) yet
- No command history by arrow keys yet

## Contributing
Contributions are welcome! Feel free to open issues or submit pull requests.

## License
MIT License