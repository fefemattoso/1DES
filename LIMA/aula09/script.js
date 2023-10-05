// // let = variável local
// // var = variável global
// // const = variável constante

// const obj = [
//     {
//         name:'Fefê',
//         age: 18,
//         country:'Brazil'
//     },
//     {
//         name:'Jack',
//         age: 60,
//         country:'USA'
//     }
// ]

// console.log(obj);
// console.warn('AVISO');
// console.error('ERRO');
// console.table(obj);

// + soma
// - subtração
// * multiplicação
// / divisão
// ** potenciação
// % resto da divisão
// > maior que
// < menor que
// >= maior que
// <= menor ou igual
// = atribuição
// == igualdade (valor)
// =/= diferente (valor)

// 1. Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
// 2. Desenvolva um programa+ que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
// 3. Desenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de reajuste do salário. Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.

// //1
// var a = 6;
// var b = 2;
// var c = 4;
// var result = (a+b)/c;

// console.log(result);

// //2
// var velocidade = 40;
// var distancia = 1000;
// var tempo = distancia / velocidade;

// console.log(tempo);

// //3
// var nome = 'Nica';
// var salario = 5000;
// var porcent = 50;
// var reajuste = (salario * porcent) / 100;
// var result = salario + reajuste;

// console.log(result);

// var data = new Date();

// var dia = data.getDate();
// var mes = data.getMonth() + 1;
// var ano = data.getFullYear();

// // var anoCompleto = dia + '/' + mes + '/' + ano;
// var anoCompleto = `${dia}/${mes}/${ano}`;

// var hora = data.getHours();
// var min = data.getMinutes();

// var horaCompleta = `${hora}:${min}`;

// console.log(anoCompleto, horaCompleta);

// Math.ceil() - arredonda pra cima
// Math.floor() - arredonda pra baixo
// Math.round() - arredonda para o mais próximo

// var n = '10'

// Number.parseInt(); - converte para inteiro
// Number.parseFloat(); - converte para float

// console.log(n, Number.parseFloat(n));

// if(){

// }else if(){

// }else{

// }

// if ternario -> condição ? true : false;

// switch(){case1: break; default: break;}

// for(let i=0; i<10; i++){}

// while(){}

// do{}while()

// let arr = "a b c d e".split(" ");

// for (let i = 0; i < arr.length; i++) {
//     console.log(arr[i]);
// }

// arr.forEach(item => {
//     console.log(item);
// })

// for (let item of arr) {
//     console.log(item);
// }

// function ex1() {
//     console.log("EXECUTANDO A FUNCAO EX1");
// }

// ex1();
