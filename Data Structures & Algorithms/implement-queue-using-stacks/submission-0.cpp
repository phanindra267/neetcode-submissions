class MyQueue {
public:
    stack<int> inStack, outStack;

    MyQueue() {
        
    }
    
    void push(int x) {
        inStack.push(x);
    }
    
    int pop() {
        shiftStacks();
        int val = outStack.top();
        outStack.pop();
        return val;
    }
    
    int peek() {
        shiftStacks();
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }

private:
    // Move items from inStack to outStack only when needed
    void shiftStacks() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }
};
