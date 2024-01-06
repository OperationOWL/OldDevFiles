/*
let age = -2;

if(age>=18){
    console.log("safe");
}
else if(age<18 && age>=0){
    console.log("fbi open up");
}
else{
    console.log("how even...");
}

let online = false;

if(online){
    console.log("player is online");
}
else{
    console.log("player is offline");
}
*/

document.getElementById("myButton").onclick = function(){
    if(document.getElementById("visabtn").checked){
        console.log("visa payment");
    }
    else if(document.getElementById("mastercardbtn").checked){
        console.log("master card payment");
    }
    else if(document.getElementById("paypalbtn").checked){
        console.log("paypal payment");
    }
}