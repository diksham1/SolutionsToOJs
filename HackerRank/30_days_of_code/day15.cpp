      Node* insert(Node *head,int data)
      {
          if(head == NULL){
           head = new Node(data);   
          }
          else{
            Node *temp = head;//temp points to the last node
              while(temp -> next != NULL){
                  temp = temp -> next;
              }
              temp-> next = new Node(data);
          }
          return head;
      }
