#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc < 2) {
    fprintf(stderr, "argument is required\n");
    exit(1);
  }

  int pick_line = atoi(argv[1]) - 1;
  char *file = NULL;
  size_t file_len = 0;
  int line_no = 0;

  while(getline(&file, &file_len, stdin) > 0) {

    if (line_no > pick_line) {
      break;
    }

    if (line_no == pick_line) {
      printf("%s", file);
    }

    line_no++;
  }
}
