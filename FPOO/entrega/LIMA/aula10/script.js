// var nome = document.getElementById('nome')
// var resultado = document.getElementById('resultado')

// function buscarElemento(){
//     // let nome = document.getElementById('nome')

//     // console.log(nome.value)

//     resultado.innerHTML = nome.value
// }

function calc(){
    var a = Number.parseInt(document.getElementById('a').value);
    var b = Number.parseInt(document.getElementById('b').value);
    var c = Number.parseInt(document.getElementById('c').value);
    var resultado = document.getElementById('resultado')  

    let result = (a + b) / c;

    console.log(result);
    
    resultado.innerHTML = result
}
calc()
    

