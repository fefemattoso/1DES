//1- Desenvolva um programa que leia tr�s vari�veis (a, b, c) e resolva a express�o: ( a + b ) / c. 
  
     var result1 = document.getElementById('result1') 
  
     function calc(){ 
         let  a = Number.parseFloat(document.getElementById('a').value); 
         let  b = Number.parseFloat(document.getElementById('b').value); 
         let  c = Number.parseFloat(document.getElementById('c').value); 
  
         var conta1 = 'O resultado de (a + b) / c é ' + (a + b) / c 
         console.log(conta1) 
  
         result1.innerHTML = conta1 
     } 
  
 //2- Desenvolva um programa que leia a velocidade de um carro (km/h) e a dist�ncia a ser percorrida (km) por ele. 
 //Calcule e apresente na tela, quanto tempo (horas) ser� necess�rio para o carro percorrer a dist�ncia informada. 
  
     var result2 = document.getElementById('result2') 
  
     function calcTempo1(){ 
         let velocidade = Number.parseFloat(document.getElementById('velocidade').value) 
         let distancia = Number.parseFloat(document.getElementById('distancia').value) 
  
         let conta2 = distancia / velocidade + ' horas' 
         console.log(conta2) 
  
         result2.innerHTML = conta2 
     } 
  
     //3- Desenvolva um programa que leia o nome e o sal�rio de uma pessoa, depois leia o valor do �ndice percentual (%)  
     //de reajuste do sal�rio. Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa. 
  
     var result3 = document.getElementById('result3') 
  
     function calcReajuste(){ 
         let nome = document.getElementById('nome').value 
         let salario = Number.parseInt(document.getElementById('salario').value) 
         let reajuste = Number.parseInt(document.getElementById('reajuste').value) 
  
         let novoSalario = salario + (salario * reajuste / 100) 
         console.log(nome, salario, novoSalario) 
  
         result3.innerHTML = nome + ' tem um salário de R$ ' + novoSalario.toFixed(2) + ' com o reajuste de ' + reajuste + '%'  
     } 
  
     //4- Desenvolva um programa que leia o nome de um time de futebol, o n�mero de vit�rias e o n�mero de empates. O programa  
     //dever� calcular e apresentar na tela, o nome do time e o total de pontos. Lembrando que a vit�ria vale 3 pontos e o empate vale 1 ponto. 
  
     var result4 = document.getElementById('result4') 
  
     function calcPontos(){ 
         let time = document.getElementById('time').value 
         let vitorias =Number.parseInt(document.getElementById('vitorias').value) 
         let empates = Number.parseInt(document.getElementById('empates').value) 
  
         let pontos = vitorias * 3 + empates 
         console.log(time,vitorias,empates,pontos) 
  
         result4.innerHTML = `O time ${time} tem ${pontos} pontos, com ${vitorias} vitórias e ${empates} empates.` 
     } 
  
     //5- Desenvolva um programa que leia um n�mero �n� inteiro, positivo e diferente de zero e apresente na tela: n � 1, e tamb�m n + 1. 
  
  
     var result5 = document.getElementById('result5') 
  
     function calcSequencia(){ 
         let n = Number.parseInt(document.getElementById('n').value) 
         let antecessor 
         let sucessor 
  
         if(n > 0 ){ 
             antecessor = n - 1 
             sucessor = n + 1 
             result5.innerHTML = `${antecessor} ${n} ${sucessor}` 
         }else{ 
             result5.innerHTML = `Coloque um valor maior que 0 para n` 
         } 
         console.log(antecessor, n, sucessor) 
     } 
  
     //6- Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h, fa�a um programa que leia uma dist�ncia (km), calcule 
     //e apresente na tela, quanto tempo (horas) ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada. 
  
     var result6 = document.getElementById('result6') 

     function calcTempo2(){ 
         let velocidade = 900 
         let distancia2 = Number.parseInt(document.getElementById('distancia2').value) 
  
         let conta3 = distancia2 / velocidade 
         console.log(velocidade,distancia2,conta3) 
  
         result6.innerHTML = conta3 + ' horas' 
     } 
  
     //7- Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda e a f�brica de suco de laranja. Um alqueire de 
     //terra produz em m�dia 250 toneladas de laranjas. Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas 
     //possui, calcule e apresente na tela quantas viagens de caminh�o ser�o necess�rias para transportar toda a colheita de laranjas. 
  
         var result7 = document.getElementById('result7') 
  
         function viagens(){ 
             let caminhao = Number.parseInt(document.getElementById('caminhao').value) 
             let alqueire = Number.parseInt(document.getElementById('alqueire').value) 
  
             let viagens = Math.ceil((alqueire * 250) / (caminhao * 18)) 
             console.log(caminhao, alqueire, viagens) 
  
             result7.innerHTML = `Serão necessárias ${viagens} viagens` 
  
         } 
  
         //Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro. Calcule e mostre a �rea (cm2) e o volume (cm3) do cilindro. 
  
         var result81 = document.getElementById('result81') 
         var result82 = document.getElementById('result82') 
  
         var raio = Number.parseFloat(document.getElementById('raio').value) 
         var altura = Number.parseFloat(document.getElementById('altura').value) 
         var pi = 3.1415 
  
         function calcArea(){ 
  
             var area = 2 * pi * raio * (raio + altura); 
  
             result81.innerHMTL = `Área do cilindro: ${area}` 
         } 
  
         function calcVolume(){ 
             let volume = pi*raio*raio*altura 
             console.log(raio,volume) 
  
             result82.innerHTML = `Volume do cilindro: ${volume}` 
         } 
  
  
         //9- Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. O programa dever� calcular um aumento de 5% no pre�o da mercadoria e mostrar 
         //o nome da mercadoria e o seu novo pre�o. 
  
         var result9 = document.getElementById('result9') 
  
         function calcAumento(){ 
             let nome2 = document.getElementById('nome2').value 
             let preco = Number.parseFloat(document.getElementById('preco').value) 
  
             let novoPreco = preco + (preco * 5 /100) 
             console.log(nome2,preco,novoPreco) 
  
             result9.innerHTML = `Produto: "${nome2}" Aumento de 5% Preço: ${preco} Novo preço: ${novoPreco}` 
         } 
  
         //10- Desenvolva um programa que leia o nome de uma cidade, o n�mero total de eleitores e o n�mero total de votos apurados na �ltima elei��o. 
         //O programa dever� calcular e exibir a porcentagem de participa��o dos eleitores desta cidade na �ltima elei��o. 
  
         var result10 = document.getElementById('result10') 
  
         function calcPorcent(){ 
             let cidade = document.getElementById('cidade').value 
             let eleitores = Number.parseInt(document.getElementById('eleitores').value) 
             let votos = Number.parseInt(document.getElementById('votos').value) 
  
             let participacao = eleitores / votos * 100 
             console.log(cidade,eleitores,votos,participacao) 
  
             result10.innerHTML = + cidade + 'teve'  + participacao.toFixed(2) + '% dos votos' 
         }
