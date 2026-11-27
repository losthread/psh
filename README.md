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
git clone https://github.com/losthread/psh.git
cd psh

# Quick Install
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

```bash
psh
```

## Flow

1. Prompt
2. Read input
3. Lex input
4. Parse Lexed input
5. Interpret Parsed input
6. Repeat
7. Cleanup

## Limitations

- No pipe support (`|`)
- No redirection (`>`, `<`)
- No logical operators (`&&`, `||`)
- No background processes (`&`)
- No command history by arrow keys yet

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## License

MIT
