class CustomStack {
    int maxsize;
    int* arr;
    int top=-1;;
public:
    CustomStack(int maxSize) {
        maxsize=maxSize;
        arr=new int[maxSize];
        top=-1;
    }
    
    void push(int x) {
        if(top+1 == maxsize)
            return;
        arr[++top]=x;
        
    }
    
    int pop() {
        if(top==-1)
            return top;
        int x=arr[top];
        arr[top]=NULL;
        top--;
        return x;
        
    }
    
    void increment(int k, int val) {
        if(k>top+1)
        {
            for(int i = 0 ; i<maxsize;i++)
                arr[i]+=val;
        }
        else
            for(int i=0 ; i< k; i++)
                arr[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */