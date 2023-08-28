class MyLinkedList {
public:
    typedef struct node {
        node* next;
        short val;
    }node;
    short length;
    node* head;
    MyLinkedList() {
        head = new node;
        head->next = nullptr;
        head->val = NULL;
        length = 0;
    }

    int get(int index) {
        if (index >= length) {
            return -1;
        }
        node* p = head;
        for (int i = 0; i <= index; i++) {
            p = p->next;
        }
        return p->val;
    }

    void addAtHead(int val) {
        node* p = new node;
        p->val = val;
        p->next = head->next;
        head->next = p;
        length++;
    }

    void addAtTail(int val) {
        node* p = new node;
        p->val = val;
        node* q = head;
        while (q->next) {
            q = q->next;
        }
        p->next = nullptr;
        q->next = p;
        length++;
    }

    void addAtIndex(int index, int val) {
        if (index > length )return;
        //if(index==0)addAtHead(val);
        node* p = new node;
        node* q = head;
        for (int i = 0; i < index; i++) {
            q = q->next;
        }
        p->next = q->next;
        p->val = val;
        q->next = p;
        length++;
    }

    void deleteAtIndex(int index) {
        if (index >= length)return;
        node* p = head;
        for (int i = 0; i < index; i++) {
            p = p->next;
        }
        p->next = p->next->next;
        length--;
    }
};