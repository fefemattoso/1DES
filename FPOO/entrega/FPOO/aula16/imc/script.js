class Paciente{ 
     constructor(nome,peso,altura){ 
         this.nome = nome; 
         this.peso = peso; 
         this.altura = altura; 
     } 
     imc(){ 
         let imc = this.peso / (this.altura * this.altura); 
         return imc; 
     } 
  
     diagnosticar(){ 
         if(this.imc() < 18.5){ 
             return 'Baixo peso' 
         } 
         else if(this.imc() < 25){ 
             return 'Peso Normal' 
         } 
         else if(this.imc() < 30){ 
             return 'Sobrepeso' 
         } 
         else if(this.imc() < 35){ 
             return 'Obesidade grau I' 
         } 
         else if(this.imc() < 40){ 
             return 'Obesidade grau II' 
         } 
         else{ 
             return 'Obesidade grau III' 
         } 
     } 
  
     showHTML(){ 
         let str = `<h1>${this.nome}</h1>` 
         str += `<div class="dados"><label class="peso">Peso:</label><label>${this.peso}</label>` 
         str += `<label>Altura:</label><label>${this.altura}</label>` 
         str += `<label>Imc:</label><label>${this.imc().toFixed(1)}</label></div>` 
         str += `<div class="diagnostico"><h3>Diagnóstico</h3><h2>${this.diagnosticar()}</h2></div>` 
         return str 
     } 
 } 
  
 const lista = [] 
 lista.push(new Paciente('Eddie Munson',88,1.9)) 
 lista.push(new Paciente('Dustin Henderson',99,1.6)) 
 lista.push(new Paciente('Nancy Wheeler',59,1.80)) 
 lista.push(new Paciente('Steve Harrington',80,1.75)) 
 lista.push(new Paciente('Jane Hopper',65,1.77)) 
 lista.push(new Paciente('Will Byers',35,1.65)) 
 lista.push(new Paciente('Robin Buckley',54,1.57)) 
  
 const main = document.getElementById('pacientes') 
 lista.forEach(paciente =>{ 
     const div = document.createElement('div') 
     div.innerHTML = paciente.showHTML() 
     main.appendChild(div) 
 })
