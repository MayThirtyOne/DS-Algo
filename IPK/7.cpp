    #include <bits/stdc++.h>

    using namespace std;

    class SinglyLinkedListNode {
        public:
            int data;
            SinglyLinkedListNode *next;

            SinglyLinkedListNode(int node_data) {
                this->data = node_data;
                this->next = nullptr;
            }
    };

    class SinglyLinkedList {
        public:
            SinglyLinkedListNode *head;
            SinglyLinkedListNode *tail;

            SinglyLinkedList() {
                this->head = nullptr;
                this->tail = nullptr;
            }

            void insert_node(int node_data) {
                SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

                if (!this->head) {
                    this->head = node;
                } else {
                    this->tail->next = node;
                }

                this->tail = node;
            }
    };

    void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
        while (node) {
            fout << node->data;

            node = node->next;

            if (node) {
                fout << sep;
            }
        }
    }

    void free_singly_linked_list(SinglyLinkedListNode* node) {
        while (node) {
            SinglyLinkedListNode* temp = node;
            node = node->next;

            free(temp);
        }
    }

    // Complete the insertNodeAtPosition function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode* next;
     * };
     *
     */
    SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

        if(head==NULL){
            SinglyLinkedListNode *temp= new SinglyLinkedListNode(data);
            return temp;
        }

        if(position==0){
            SinglyLinkedListNode *temp= new SinglyLinkedListNode(data);
            temp->next=head;
            return temp;

        }
        SinglyLinkedListNode *newnode= new SinglyLinkedListNode(data);
        SinglyLinkedListNode *temp1 = head;

        while(position-1){
            position-=1;
            temp1=temp1->next;

        }

        SinglyLinkedListNode *temp2 = temp1->next;
        temp1->next = newnode;
        newnode->next=temp2;
        return head;




    }

    int main()
    {
        ofstream fout(getenv("OUTPUT_PATH"));

        SinglyLinkedList* llist = new SinglyLinkedList();

        int llist_count;
        cin >> llist_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < llist_count; i++) {
            int llist_item;
            cin >> llist_item;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            llist->insert_node(llist_item);
        }

        int data;
        cin >> data;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int position;
        cin >> position;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        SinglyLinkedListNode* llist_head = insertNodeAtPosition(llist->head, data, position);

        print_singly_linked_list(llist_head, " ", fout);
        fout << "\n";

        free_singly_linked_list(llist_head);

        fout.close();

        return 0;
    }
