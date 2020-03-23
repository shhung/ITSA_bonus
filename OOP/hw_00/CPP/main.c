#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _char_count {
  char c;
  int count;
  struct _char_count *next;
}char_count;

char_count *insert(char_count *head, char c){
  char_count *tmp = head, *pre = NULL;
  while(tmp){
    if(tmp->c == c){
      tmp->count++;
      return head;
    }
    pre = tmp;
    tmp = tmp->next;
  }
  tmp = (char_count*)malloc(sizeof(char_count));
  tmp->c = c;
  tmp->count = 1;
  tmp->next = NULL;
  if(pre){
    pre->next = tmp;
  }
  else{
    head = tmp;
  }
  return head;
}

int main(int argc, char **argv){
  int i, j;
  char c;
  char_count *headptr, *tmp;
  tmp = NULL;
  headptr = NULL;

  for(i = 1; i < argc; i++){
    j = 0;
    while(argv[i][j] != '\0'){
      c = argv[i][j];
      j++;
      headptr = insert(headptr,c);
    }
  }
  tmp = headptr;
  while(tmp){
    printf("%c:%d\n",tmp->c,tmp->count);
    tmp = tmp->next;
  }
  return 0;
}  
