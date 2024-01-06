let s = "10";
let name = "Surendar Malai";
const pi = 3.14;
let radius = 4;

document.getElementById("p1").innerHTML="1. hello "+name;
document.getElementById("p2").innerHTML="2. hello "+name;
document.getElementById("p3").innerHTML="3. hello "+name;

let a1 = 10;
let a2 = "10 dogs";
/*
let age = Number(window.prompt("age"));
age+=2;
console.log(age);
console.log(typeof age);
age = String(age);
*/
let a = 0;
let b = 0;
let c = 0;
document.getElementById("button").onclick = function(){
    a = Number(document.getElementById("aTextBox").value);
    console.log(a);
    b = Number(document.getElementById("bTextBox").value);
    console.log(b);
    c = (a**2+b**2)**(1/2);
    document.getElementById("clabel").innerHTML = "c: "+c;
}