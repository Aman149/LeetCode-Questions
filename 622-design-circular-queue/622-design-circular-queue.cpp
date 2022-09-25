class MyCircularQueue {

 vector<int> q; 
 public:

int last=-1;
int size;
int start=-1;

//save size of queue
MyCircularQueue(int k) {
    size=k;
}

bool enQueue(int value) {
    //difference is equal to size means queue is full
    if((last-start)!=size){
        q.push_back(value);
        last++;
        return true;
    }
    return false;
}

bool deQueue() {
    // last and start are at same index means it is empty
    if(last==start){
        return false;
    }
    start++;
    return true;
}

int Front() {
    // last and start are at same index means it is empty
    if(last==start){
        return -1;
    }
    return q[start+1];
}

int Rear() {
    // last and start are at same index means it is empty
    if(last==start){
        return -1;
    }
    return q[last];
}

bool isEmpty() {
    // last and start are at same index means it is empty
    if(last==start){
        return true;
    }
    return false;
}

bool isFull() {
    //difference is equal to size means queue is full
    if((last-start)==size){
        return true;
    }
    return false;
}
};