#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  /*
  NodePtr headPtr = NULL;
  NodePtr tailPtr = NULL;
  */
  NodePtr pPtr = NULL;

  Queue q;
  q.head=NULL;
  q.tail=NULL;
  q.size=0;

  int i,x;
   

  for(i=1;i<argc;i++){
    if(strcmp(argv[i],"x")==0){
      x = dequeue_q(&q); 
      if (x) printf("dequeing %d\n",x);
    }
    else{
      enqueue_q(&q, atoi(argv[i]));
    }
  }
  printf("Queue\n");
  if(q.size){
    for(pPtr = q.head; pPtr != NULL; pPtr = pPtr->nextPtr){
      printf("%d <- ", pPtr->data);
    }
    printf("null");
  }
  else{
    printf("empty");
  }      
  return 0;
}