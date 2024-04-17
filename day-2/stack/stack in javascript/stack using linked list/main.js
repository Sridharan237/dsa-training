// importing Stack class (module) from stack.js using commonJS method
const Stack = require('./stack');

const s = new Stack();

s.push(10);
s.push(20);
s.push(30);

s.display();

console.log("Popped Element : " + s.pop());

s.display();