class MyQueue {
public:
    stack<int> st;
    stack<int> gt;
    MyQueue() {}

    void push(int x) { st.push(x); }

    int pop() {
        if (st.size() == 0)
            return 0;
        while (st.size() != 1) {
            gt.push(st.top());
            st.pop();
        }
        int poppedval = st.top();
        st.pop();
        while (gt.size() != 0) {
            st.push(gt.top());
            gt.pop();
        }
        return poppedval;
    }

    int peek() {
        if (st.size() == 0)
            return 0;
        while (st.size() != 1) {
            gt.push(st.top());
            st.pop();
        }
        int peekedval = st.top();
        while (gt.size() != 0) {
            st.push(gt.top());
            gt.pop();
        }
        return peekedval;
    }

    bool empty() {
        if (st.size() == 0)
            return true;
        else
            return false;
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