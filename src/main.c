#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define SIZE 1024

// lifecycle:
// 1. Prompt
// 2. Read input
// 3. Lex input
// 3. Parse lexed input
// 4. Interpret parsed input
// 5. Repeat
// 6. Cleanup

void prompt_user()
{
  // prompt section:
  // get the current working directory for prompting info
  char cwd[SIZE];
  getcwd(cwd, SIZE);

  // extract the folder name from it
  // traverse the strings till the last \0 is hit
  char *last_slash = &cwd[0];
  for (int i = 0; cwd[i] != '\0'; i++)
  {
    if (cwd[i] == '/')
    {
      last_slash = &cwd[i];
    }
  }
  char *dir_name = last_slash + 1;

  // colored folder name and arrow for taking prompt
  printf("\033[1;36m%s\033[0m \033[1;32m❯\033[0m ", dir_name);
}

void lexer(char* command, char **tokens)
{
  // remove trailing \n if exists
  command[strcspn(command, "\n")] = 0;

  // skip leading whitespaces
  int i = 0;
  while (command[i] == ' ')
  {
    i++;
  }

  int t = 1; // index for tokens

  // put the first token into the pointer array
  tokens[0] = &command[i];
  
  // lexer
  int command_length = strlen(command);
  while (i < command_length)
  {
    // convert whitespaces to \0 to terminate strings
    if (command[i] == ' ' && command[i - 1] != ' ')
    {
      command[i] = '\0';
    }

    // token detected if the previous char is '\0'
    if ((i > 0 && command[i - 1] == '\0') && command[i] != ' ' && command[i] != '\0')
    {
      tokens[t] = &command[i];
      t++;
    }
    i++;
  }

  // set null ptr at end
  tokens[t] = NULL;
}

int main()
{ 
  while (1)
  {
    prompt_user();

    // get command
    char command[SIZE];
    fgets(command, SIZE, stdin);

    // array of pointers to strings for tokens
    char *tokens[256];
    lexer(command, tokens);

    for (int i = 0; tokens[i] != NULL; i++)
    {
      printf("%s\n", tokens[i]);
    }
  }

  return 0;
}