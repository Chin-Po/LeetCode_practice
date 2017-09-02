class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> trackMin;
    
    MinStack() {
        
    }
    
    void push(int x) {
        if(trackMin.empty() || x <= trackMin.top())
        {
            trackMin.push(x);
        }
        s.push(x);
    }
    
    void pop() {
        if(trackMin.top() == s.top())
            trackMin.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return trackMin.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */