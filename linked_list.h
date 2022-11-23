class Node{
public:
	int data;
	Node* next;
}

void insertNode(Node** head_ref, Node* new_node){
	Node* current;

	if(head_ref == NULL || (*head_ref)->data >=new_node->data){
		new_node->next=*head_ref;
		*head_ref=new_node;
	}
	else {
		current = *head_ref;
		while(current->next != NULL
			&& current->next->data < new_node){

		}
	}
}

Node* newNode(int newData) {
	//alocate data
	Node* new_node = new Node();
	
	//
	new_node->data = newData;
	new_node->next = NULL;
	return new_node;
}

void printList(Node* head) {
	Node* temp = head;
	while(temp != NULL){
		std::cout << temp->data << " ";
		temp=temp->next;
	}
}