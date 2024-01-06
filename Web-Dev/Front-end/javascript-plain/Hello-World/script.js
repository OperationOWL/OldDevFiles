let age = 16;
let assets = [34, 26, 36]
let legal = false;
let emotion = "Fear"
let jail = true;
let whereabouts = undefined;
let escape = null;
// if not initialised, but only declared, variable is given value 'undefined'
//to work with opeations on big numbers, put n. 1111111111111111111111n

function consolePrint(out){
    console.log(out)
}

consolePrint("Hello World");
consolePrint("Im Programmed");

let temp = 1

function increment(val){
    return val+1
}

temp = increment(temp)
consolePrint(temp)

arr = [];
// array methods
arr.push(5); //appends element
arr.unshift(3) //adds elemnt to 0 index
arr.pop(); //pops last elements
console.log(arr.length, arr);


for(let i = 0; i<10; i++){
    console.log(i);
}