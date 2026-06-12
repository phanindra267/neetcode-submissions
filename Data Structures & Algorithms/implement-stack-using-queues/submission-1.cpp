class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {
    }
    
    void push(int x) {
        // Step 1: push x into q2
        q2.push(x);
        
        // Step 2: move everything from q1 into q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: swap q1 and q2
        swap(q1, q2);
    }
    
    int pop() {
        int val = q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
