// js program for a Linear singly linked list
// class for a node in a linked list
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// class for linked list
class LinkedList {
    constructor() {
        this.first = null;
    }

    // create using insert at end of a linked list
    create(A) {
        this.first = new Node(A[0]);
    
        this.last = this.first;
    
        let t = null;

        let i;
        
        for(i=1;i<A.length;i++) {
            t = new Node(A[i]);
    
            this.last.next = t;
    
            this.last = t;
        }
    }
    
    Display() {
        let p = this.first;
        
        console.log('Linked list :');

        while(p != null) {
            console.log(p.data);
    
            p = p.next;
        }
        console.log('null');
    }

    length() {
        let p = this.first;
    
        let len = 0;
    
        while(p != null) {
                len++;
    
                p = p.next;
        }
    
        return len;
    }
    
    // insert after the given position
    insert(index, x) {
        if(index < 0 || index > this.length()) {
            return ;
        } 
    
        let p = null;
    
        // insert before first (or) head
        if(index == 0) {
            p = new Node(x);
    
            p.next = this.first;
    
            this.first = p;
        } else {
            let i, t;
    
            p = this.first;
    
            for(i=0;i<index-1;i++) 
                p = p.next;
    
            t = new Node(x);
            
            t.next = p.next;
            p.next = t;
        }
    }
    
    //delete the node with the given position
    delete(index) {
        if(index < 1 || index > this.length()) 
            return -1;  // enter valid index
    
        let p, q, x;
    
        x = -1;
    
        p = q = null;
    
        // delete first (or) head
        if(index == 1) {
            if(this.first == null) 
                return -1;
            else {
                x = this.first.data;
    
                p = this.first.next;
    
                this.first = null;
    
                this.first = p;
            }
        }
        else {
            let i;
    
            q = this.first;
    
            for(i=0;q&&i<index-2;i++)   // p will be at deleting node, q will be at previous node of p
                q = q.next;
            
            p = p.next;
    
            q.next = p.next;
    
            p = null;
        }
    }
    
}

module.exports = LinkedList;

