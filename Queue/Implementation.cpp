
//  #microsoft

class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
    
public:
    Queue() {
        // Implement the Constructor
        size = 100000;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear)
            return true;
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size)
            cout<<"Queue is full bro"<<endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront == rear)
            return -1;
        else{
           int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear)
        	{
            	qfront = 0;
            	rear = 0;
        	}
            return ans;
        }
//         return front;
    }

    int front() {
        // Implement the front() function
        if(qfront == rear)
            return -1;
        return arr[qfront];
    }
};