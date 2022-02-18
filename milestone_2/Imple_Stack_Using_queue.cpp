class MyStack {
public:
   	queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
	
    void push(int x) {
		     q1.push(x);  
    }
    
	  int pop() {
        int n = q1.size();
        while(q2.size() != n-1){
            q2.push(q1.front());
            q1.pop();
        }
        int k = q1.front();  
        q1 = q2;    
        while(!q2.empty()){
            q2.pop();
        }
        return k;
    }
    
    int top() {
        int n = q1.size();
        while(q2.size() != n-1){
            q2.push(q1.front());
            q1.pop();
        }
        int k = q1.front();
        q2.push(k);  
        q1 = q2;
        while(!q2.empty()){
            q2.pop();
        }
        return k;
    }
    
    bool empty() {
        return q1.empty() and q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
