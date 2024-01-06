let b1 = document.getElementById('b1');
let c
function increment(){
    let count = document.getElementById('count_display');
    count.innerHTML++;

    let scentences = document.getElementById('scentences');
    let textNode = document.createTextNode('Scentence\n');
    scentences.appendChild(textNode)
}
b1.addEventListener('click', increment)
let b2 = document.getElementById('b2');
function decrement(){
    let count = document.getElementById('count_display');
    count.innerHTML--;
}
b2.addEventListener('click', decrement)