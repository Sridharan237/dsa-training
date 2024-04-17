// importing using commonJS - method - importing a module
const Queue = require ('./queue.js');

const q = new Queue;

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

q.Display();

console.log("Deleted element : " + q.dequeue());

q.Display();