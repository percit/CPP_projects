class Node{
public:
    int data;
    Node* next;
};

void printList(Node* n){
    while(n != nullptr){
        std::cout << n->data << ' ';
        n = n->next;//przesuwamy o jedno
    }
}

void push(Node** head_ref, int new_data){//to front
    Node* new_head = new Node();
    new_head->data = new_data;
    new_head->next = *head_ref; //push to current head
    *head_ref = new_head; //move the head to the point of a new node// same as node->next = second_node, but with new head and old head
}

void insertAfter(Node *prev_node, int new_data){
    if(prev_node == nullptr)
        return;
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next; //insert before the prev_node so after it, so prev_node->next
    prev_node->next = new_node;
}

void append(Node** head_ref, int new_data){//add to the end
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = nullptr; //zawsze po ostanim musi byc nullptr
    if(*head_ref == nullptr){
        *head_ref = new_node;
        return;
    }
    while(last->next != nullptr) last = last->next;
    last->next = new_node;//doszlismy do konca to ustawiamy tam new_node
    return;
}

void deleteNode(Node** head_ref, int key){
    Node* temp = *head_ref;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == key){// If head node itself holds, key to be deleted
        *head_ref = temp->next; // Changed head to the next node
        delete temp;            // free old head
        return;
    }

    else{
        while (temp != nullptr && temp->data != key){ //search for the key, the prev will be needed later
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) return; //if no key found

        prev->next = temp->next;//actual deletion of a node, if there wasn't deletion, prev-next == temp
        free(temp);
    }
}

void deleteNodePosition(Node** head_ref, int position){
    if(*head_ref == nullptr) return;
    Node* temp = *head_ref;
    if(position == 0){
        *head_ref = temp->next;
        delete temp;
        return;
    }
    for(int i  = 0; temp != nullptr && i < position-1; ++i){
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) //out of bounds
        return;

    Node *next = temp->next->next;    // Node temp->next is the node to be deleted. Store pointer to the next of node to be deleted

    free(temp->next); // Free memory and Unlink the deleted node from list
    temp->next = next;
}



int main(){
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = nullptr; //znaczy, ze ostatni element

    printList(head);


    return 0;
}
