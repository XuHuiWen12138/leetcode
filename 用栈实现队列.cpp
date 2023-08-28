class MyQueue {
public:
    typedef struct node{
        node* pre;
        node* next;
        int val;
    }node;
    node* head;
    node* tail;
    MyQueue() {
        head = new node;
        head->pre = nullptr;
        head->next= nullptr;
        head->val = NULL;
        tail=head;
    }
    
    void push(int x) {
        node*p = new node;
        tail->next = p;
        p->pre = tail;
        p->next=nullptr;
        p->val=x;
        tail=p;
    }
    
    int pop() {
        node*p = head->next;
        int x = p->val;
        if(head->next->next){
            head->next->next->pre=head;
        }else{
            tail=head;
        }
        head->next=head->next->next;
        delete p;
        return x;
    }
    
    int peek() {
        return head->next->val;
    }
    
    bool empty() {
        return head->next==nullptr;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */