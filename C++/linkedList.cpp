#include <bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;

        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }

        Node(int data1) {
            data = data1;
            next = NULL;
        }

};

void display(Node* head) {
    while (head != NULL) {
        cout << head -> data << "\t";
        head = head->next;
    }
    cout << "\n";
}

Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}

Node* deleteTail(Node* head) {
    if (head == NULL || head-> next == NULL) {
        return nullptr;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete(temp->next);
    temp->next = NULL;

    return head;
}

int findNode(int search, Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == search) {
            cout << "Element found.";
            
            return 0;
        }
        else
        temp = temp->next;
    }
    cout << "Element not found.";
    
    return 1;
}

Node* findMiddle(Node*head) {
    Node* slow = head;
    Node* fast = head;

    while (fast->next != NULL && fast != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

bool detectCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL) {
        if (slow == fast) {
            delete slow, fast;
            return true;
        }
    }

    return false;
}

Node* reverseLL(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; 
        current->next = prev; 
        prev = current;       
        current = next;
    }

    return prev; 
}

int main(void) {
    vector<int> arr = {14, 16, 34, 54};
    int val = 100;

    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    head = insertHead(head, val);
    display(head);

    head = deleteTail(head);
    display(head);

    int search = 44;
    findNode(search, head);
    cout << endl;

    search = 54;
    findNode(search, head);
    cout << endl;

    Node* middleNode = findMiddle(head);
    cout << "The middle element of the linkedlist is " << middleNode->data << endl;


    Node* head1 = new Node(1);
    Node* second1 = new Node(2);
    Node* third1 = new Node(3);
    Node* fourth1 = new Node(4);
    Node* fifth1 = new Node(5);

    head1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;
    fifth1->next = nullptr;

    if (detectCycle(head1)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    head = reverseLL(head);
    display(head);

}
