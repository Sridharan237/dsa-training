// class for node
class Node 
{
    constructor(){
       this.data = null;
       this.next = null; 
    }
}

// class for queue
class Queue {
    constructor() {
        this.front = null;
        this.rear = null;
    }

    enqueue(x) {
        let newNode;

        if(this.isEmpty()) {
            this.front = new Node;

            this.front.data = x;
            this.front.next = null;

            this.rear = this.front;
        }
        else {
            newNode = new Node;

            newNode.data = x;

            this.rear.next = newNode;

            this.rear = newNode;
        }
    }

    dequeue() {
        if(this.isEmpty()) {
            return -1;
        } else {
            var x = this.front.data;

            if(this.front == this.rear) {
                this.rear = null;

                this.front = null;
            } else {
                this.temp = this.front.next;

                this.front = null;
                
                this.front = this.temp;
            }
        }

        return x;
    }

    Display() {
        this.temp = this.front;

        while(this.temp != null) {
            console.log(this.temp.data);

            this.temp = this.temp.next;
        }
    }

    isEmpty() {
        return this.front == null && this.rear == null;
    }
}

module.exports = Queue;
