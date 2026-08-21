class MinStack {
public:
        stack<int> st;
        stack<int> minst;
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        if( minst.empty()|| val<=minst.top())
        {
            minst.push(val);
        }
    }
    
    void pop() {
        if(st.top() == minst.top()) {
            minst.pop();
        }
        st.pop();
    }
    
    int top() {
        int topp=st.top();
        return topp;
    }
    
    int getMin() {
        return minst.top();
    }
};
