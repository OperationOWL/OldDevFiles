/*
let userName = "";

while(userName=="" || userName==null){
    userName = window.prompt("enter name");
}

for(let counter = 10; counter>0; counter--){
    console.log(counter);
}
*/

window.prompt("enter 0 for rectangle or 1 for triangle")==1 ? console.log(triangle(23)): console.log(rectangle(10,20));

function triangle(height){
    document.getElementById("canvas").innerHTML = "";
    for(let i=1; i<height; i++){
        for(let j = 0; j<i; j++){
            document.getElementById("canvas").innerHTML += "* ";
        }
        document.getElementById("canvas").innerHTML+="<br>"
        console.log();
    }
    return 1/2*height*height;
}

function rectangle(height, breadth){
    document.getElementById("canvas").innerHTML="";
    for(let i=1; i<height; i++){
        for(let j = 0; j<breadth; j++){
            document.getElementById("canvas").innerHTML += "* ";
        }
        document.getElementById("canvas").innerHTML+="<br>"
        console.log();
    }
    return height*breadth;
}