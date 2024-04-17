// stack using linked list in javascript

// class for a node
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// class for stack
class Stack {
    constructor() {
        this.top = null;
    }

    push(x) {
        if(this.isEmpty()) 
            this.top = new Node(x);
        else {
            this.t = new Node(x);

            this.t.next = this.top;

            this.top = this.t;
        }
    }

    pop() {
        var x;

        if(this.isEmpty()) 
            return -1;
        else {
            x = this.top.data;

            this.p = this.top.next;

            this.top = null;
            
            this.top = this.p;
        }

        return x;
    }

    peek() {
        if(this.isEmpty()) 
            return -1;
        else 
            return this.top.data;
    }

    display() {
        this.p = this.top;

        console.log('Stack Elements : ');

        while(this.p != null) {
            console.log(this.p.data);

            this.p = this.p.next;
        }

        console.log('NULL');
    }

    isEmpty() {
        if(this.top == null) {
            console.log('stack is emtpy');
            
            return true;
        } else 
            return false;
    }
}

module.exports = Stack;