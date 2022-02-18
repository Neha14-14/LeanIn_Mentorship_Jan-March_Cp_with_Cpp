class MyQueue {
public:
     MyQueue() {
        
    }
    
    void push(int x) {
        //how to use 2 stacks to reverse
        
        while(!in.empty()){//1
            out.push(in.top());
            in.pop();
        }
        in.push(x);
        while(!out.empty()){//1
            in.push(out.top());
            out.pop();
        }
        
    }
    
    int pop() {
        int e = in.top();
        in.pop();
        return e;
    }
    
    int peek() {
        return in.top();
    }
    
    bool empty() {
        return in.empty();
    }
    
private:
    stack<int> in;
    stack<int> out; 
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
