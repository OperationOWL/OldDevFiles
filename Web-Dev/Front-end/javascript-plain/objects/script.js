const myObj = {
    'k1': 'v1',
    'k2': 'v2'
}

const head1 = document.querySelector("h1")
const heads2 = document.querySelectorAll("h2")

console.log(head1)
for(let i = 0; i<4; i++){
    console.log(heads2[i])
}

head1.innerText = "Programmed to Create"