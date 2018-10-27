#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

#define endl "\n"


using namespace std;


struct node{
    int data;
    struct node *next;
};

struct node * insert_node_at_first(struct node * head, int data){
    struct node * temp = (struct node *) malloc(sizeof (struct node));
    temp->data = data;
    temp->next = head;
    return temp;
}


void insert_node_at_middle_before(struct node * head, struct node* point, int data){
    struct node * temp = head;
    struct node * new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = data;

    while(temp->next != NULL){
	if(temp->next->data ==  point->data){
	    struct node * temp2 = temp->next;
	    temp->next = new_node;
	    new_node->next = temp2;
	    break;
	}
	temp = temp->next;
    }
}


void insert_node_at_middle_after(struct node* point, int data){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    struct node * temp2 = point->next;
    point->next = temp;
    temp->next = temp2;
}

void insert_node_at_last(
    struct node * head,
    int data
    ){

    struct node * temp = head;
    struct node * new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    while(temp->next != NULL){
	temp = temp->next;
	if(temp->next == NULL){
	    temp->next = new_node;
	    break;
	}
    }
}


void print_linked_list(struct node * head){

    struct node * temp = head;
    while(temp != NULL){
	printf("%d->", temp->data);
	temp = temp->next;
    }
    printf("\n");
}


struct node * delete_node_given_key(struct node * head, int data){
    struct node * temp = head;
    struct node * prev = head;

    // base case
    if(head->data == data){
	head = head->next;
	free(temp);
	return head;
    }

    temp = temp->next;

    while(temp != NULL){
	// 1->2->3->4
	if(temp->data == data){
	    prev->next = temp->next;
	    free(temp);
	}
	prev = temp;
	temp = temp->next;
    }
    return head;
}

void push(struct node ** head_ref, int data){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *temp = (*head_ref);
    new_node -> data = data;
    new_node -> next = NULL;


    while(temp->next != NULL){
	temp = temp->next;
    }
    temp->next = new_node;
}

void delete_linked_list(struct node ** head){
  struct node * temp = *head, *house_keeping=NULL;
  while(temp!=NULL){
    house_keeping = temp;
    temp = temp->next;
    free(house_keeping);
  }
  *head = NULL;
}

int length_of_linked_list(struct node * head){
  int len = 0;
  struct node * temp = head;
  while(temp != NULL){
    len++;
    temp = temp->next;
  }
  return len;
}

int length_recursive(struct node * head){
  if(head == NULL) return 0;
  return 1 + length_recursive(head->next);
}

bool find_loop(struct node * head){
  bool i[100];
  memset(i, false, sizeof(i));
  struct node * temp = head;
  while( temp != NULL){
    // printf("%d\n", temp->);
    if(i[temp->data]) return true;
    i[temp->data] = true;
    temp = temp->next;
  }
  return false;
}


int find_length_in_loop(struct node * head){
  int i[100];
  memset(i, 0, sizeof(i));

  struct node * temp = head;
  int count = 0;
  while(temp != NULL){
    ++count;
    if(i[temp->data] > 0) return count - i[temp->data];
    i[temp->data] = count;
    temp = temp->next;
  }
  return 0;

}



int main(){

  struct node * head   = NULL;
  struct node * second  = NULL;
  struct node * third = NULL;

  head = (struct node*) malloc(sizeof(struct node));
  second = (struct node*) malloc(sizeof(struct node));
  third = (struct node*) malloc(sizeof(struct node));

  head->data = 1;
  head->next = second;
  second->data = 2;
  second->next = third;
  third->data = 3;
  third->next = NULL;

  printf("before deleting node");
  cout << endl;
  // print_linked_list(head);
  push(&head, 10);
  push(&head, 11);
  push(&head, 12);
  push(&head, 13);
  //delete_linked_list(&head);
  //printf("%d\n", find_loop(head));
  push(&head, 11);
  printf("%d\n", find_length_in_loop(head));
  // printf("%d\n", length_of_linked_list(head));
  // printf("%d\n", length_recursive(head));
  printf("after deleting node");
  cout << endl;
  print_linked_list(head);


  return 0;
}
