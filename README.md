# psh
A minimal shell written in C

## What is a Shell exactly?
A shell is the interface that sits between the applications and the kernel. It takes a command, parses it, separates it into tokens, executes system calls based on them

## psh Shell Lifecyle
1. Prompt
2. Read input
3. Lex input
3. Parse Lexed input
4. Interpret Parsed input
5. Repeat
6. Cleanup