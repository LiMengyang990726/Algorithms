#include <iostream>
using namespace std;

struct Node { 
   int data; 
   struct Node *next; 
}; 
  
int getCount(struct Node* head) 
{ 
    int count = 0;   
    struct Node* current = head;  
    while (current != NULL) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 

Node* GetLast(struct Node* head) 
{ 
      
    struct Node* current = head; 
      
    while (current != NULL) 
    { 
        current = current->next; 
    } 
  
    return current;              
} 

Node* GetSecondLast(struct Node* head) 
{ 
    struct Node* temp = head; 
  
    // If the list is empty or contains less 
    // than 2 nodes 
    if (temp == NULL || temp->next == NULL) 
        return NULL; 
  
    // Traverse the linked list 
    while (temp != NULL) { 
  
        // Check if the current node  is the 
        // second last node or not 
        if (temp->next->next == NULL) 
            return temp; 
  
        // If not then move to the next node 
        temp = temp->next; 
    } 
} 

int main(){
    // given the head of the singly linked list 

    // int n = getCount(head); // n is the length of the sigly linked list
    // Node* curr = head;
    // bool flag = false;

    // for(int counter = 1; counter < (n/2) ; counter ++){
        // if(!flag){
            // flag = true;
            // curr = curr->next;
        // }else{
            // flag = false;
            // Node* last = GetLast(head);
            // last->next = curr;
            // curr->next = last;
            // curr = curr->next;

            // Node* secondLast = GetSecondLast(head);
            // secondLast->next = Null;
        // }
    //}
}

int roverMove(int matrixSize, vector<string> cmds) {

  // Method 1:
  //   int current = 0;
  //   int max = (matrixSize * matrixSize)-1;
  //   for (int i = 0; i < cmds.size(); i++) {
    //   if(cmds[i] == "LEFT"){
    //     if (current % matrixSize != 0 && current % matrixSize != matrixSize)
    //     {
    //       current = current - 1;
    //       }
    //   }
    //   if(cmds[i] == "RIGHT"){
    //       if((current) % matrixSize !=(matrixSize-1)){
    //         current = current + 1;
    //       }
    //   }
    //   if(cmds[i] == "UP"){
    //       if(current >= matrixSize){
    //         current = current - matrixSize;
    //       }
    //   }
    //   if (cmds[i] == "DOWN") {
    //     if ((current + matrixSize) <= max) {
    //       current = current + matrixSize;
    //     }
    //   }
    // return current;


 // Method 2
    int x = 0;
    int y = 0;

    for (int i = 0; i < cmds.size(); i++) {
      if (cmds[i] == "LEFT") {
        if (x - 1 >= 0) {
          x--;
        }
      } else if (cmds[i] == "RIGHT") {
        if (x + 1 <= (matrixSize - 1)) {
          x++;
        }
      } else if (cmds[i] == "UP") {
        if (y - 1 >= 0) {
          y--;
        }
      } else if (cmds[i] == "DOWN") {
        if (y + 1 <= (matrixSize - 1)) {
          y++;
        }
      }
    }
    return ((y * matrixSize) + x);
}