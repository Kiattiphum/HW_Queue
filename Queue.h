
void enqueue(NodePtr* head, NodePtr* tail, int x){
  Node *newNode = (NodePtr) malloc(sizeof(Node));
  if(newNode){
    newNode->data = x;
    newNode->nextPtr = NULL;
    if(*head == NULL) *head = newNode;
      else (*tail)->nextPtr = newNode;
    *tail = newNode;
  }
  else{
    printf("Cant make node anymore");
  }
}

int dequeue(NodePtr *head, NodePtr *tail){
  if(*head){
    NodePtr temp = *head;
    int x = temp -> data;
    *head = temp->nextPtr;
    if(!*head) *tail = NULL;
    free(temp);
    return x;
  }
  else{
    printf("Queue is empty cant DEQ\n");
    return '\0';
  }
  
}

void enqueue_q(Queue *qq, int x){
  Node *newNode = (NodePtr) malloc(sizeof(Node));
  if(newNode){
    newNode->data = x;
    newNode->nextPtr = NULL;
    if(qq->head == NULL) qq->head = newNode;
      else (qq->tail)->nextPtr = newNode;
    qq->tail = newNode;
    qq->size ++;
  }
  else{
    printf("Cant make node anymore");
  }
}

int dequeue_q(Queue *qq){
  if(qq->size > 0){
    NodePtr temp = qq->head;
    int x = temp -> data;
    qq->head = temp->nextPtr;
    if(!(qq->head)) qq->tail = NULL;
    free(temp);
    qq->size --;
    return x;
  }
  else{
    printf("Queue is empty cant DEQ\n");
    return '\0';
  }
  
}

