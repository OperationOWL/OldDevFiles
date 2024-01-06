let count = 0;
document.getElementById("increase").onclick = function(){
    count = Number(document.getElementById("count").innerHTML);
    document.getElementById("count").innerHTML = count+=1;

}
document.getElementById("decrease").onclick = function(){
    count = Number(document.getElementById("count").innerHTML);
    document.getElementById("count").innerHTML = count-=1;
}
document.getElementById("reset").onclick = function(){
    count = 0;
    document.getElementById("count").innerHTML = 0;
}