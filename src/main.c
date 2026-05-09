#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define SIZE 1024

// lifecycle:
// 1. Prompt
// 2. Read input
// 3. Parse input
// 4. Execute command
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

int main()
{ 
  while (1)
  {
    prompt_user();

    // get command section:
    char command[SIZE];
    fgets(command, SIZE, stdin);

    // remove trailing \n if exists
    command[strcspn(command, "\n")] = 0;
  }

  return 0;
}