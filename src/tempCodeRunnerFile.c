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