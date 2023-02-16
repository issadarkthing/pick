#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int find_index(int *arr, size_t len, int value)
{
  for (int i = 0; i < len; i++) {
    if (arr[i] == value) return i;
  }

  return -1;
}

int max(int *arr, size_t len)
{
  int max = arr[0];

  for (int i = 0; i < len; i++) {
    int val = arr[i];

    if (val > max) {
      max = val;
    }
  }

  return max;
}

int main(int argc, char **argv)
{
  if (argc < 2) {
    fprintf(stderr, "argument is required\n");
    exit(1);
  }

  int arg_len = argc - 1;
  int pick_line[arg_len];

  for (int i = 0; i < arg_len; i++) {
    pick_line[i] = atoi(argv[i + 1]) - 1;
  }


  int max_pick = max(pick_line, arg_len);
  char *result[arg_len];

  for (int i = 0; i < arg_len; i++) {
    result[i] = NULL;
  }

  char *line = NULL;
  size_t line_len = 0;
  int line_no = 0;

  while(getline(&line, &line_len, stdin) > 0) {

    int index = find_index(pick_line, arg_len, line_no);

    if (index != -1) {
      result[index] = strdup(line);
    }

    line_no++;

    if (line_no > max_pick) break;
  }

  for (int i = 0; i < arg_len; i++) {
    char *line = result[i];

    if (line != NULL) {
      printf("%s", result[i]);
    }
  }
}
