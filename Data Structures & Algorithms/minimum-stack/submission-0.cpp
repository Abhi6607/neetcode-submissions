class MinStack {
public:
    stack<int> st;
    stack<int> minSt;

    MinStack() {}

    void push(int val) {
        int m = minSt.empty() ? val : std::min(minSt.top(), val);
        st.push(val);
        minSt.push(m);
    }

    void pop() {
        st.pop();
        minSt.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};