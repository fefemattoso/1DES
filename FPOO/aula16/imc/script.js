class Pessoa { 
     constructor(nome, nascimento, sexo){ 
         this.nome = nome; 
         this.nascimento = nascimento; 
         this.sexo = sexo; 
         this.idade = this.calcIdade(); //Atributo calculado 
         this.classificação = this.classificar(); 
     } 
  
     calcIdade() { 
         if (this.nascimento == undefined) return 0; 
         let hoje = new Date(); 
         let difAno = hoje.getFullYear() - this.nascimento.getFullYear(); 
         let difMes = hoje.getMonth() - this.nascimento.getMonth(); 
         let difDia = hoje.getDate() - this.nascimento.getDate(); 
         if (difMes < 0 || (difMes == 0 && difDia < 0)) { 
             difAno--; 
         } 
         return difAno; 
     } 
  
     classificar(){ 
         if(this.sexo == 'F'){ 
             if(this.idade <= 10){ 
                 return 'Criança'; 
                 } 
                 else if(this.idade <= 15){ 
                     return 'Adolescente'; 
                 } 
                 else if(this.idade <= 20){ 
                     return 'Jovem'; 
                 } 
                 else if(this.idade <= 35){ 
                     return 'Adulta'; 
                 } 
                 else if(this.idade <= 55){ 
                     return 'Meia idade'; 
                 } 
                 else{ 
                     return 'Idosa';  
                 } 
         } 
         if(this.sexo == 'M'){ 
             if(this.idade <= 10){ 
             return 'Criança'; 
             } 
             else if(this.idade <= 15){ 
                 return 'Adolescente'; 
             } 
             else if(this.idade <= 20){ 
                 return 'Jovem'; 
             } 
             else if(this.idade <= 35){ 
                 return 'Adulto'; 
             } 
             else if(this.idade <= 55){ 
                 return 'Meia idade'; 
             } 
             else{ 
                 return 'Idoso';  
             } 
         } 
     } 
  
     toTable() { 
         return `<tr> 
                     <td>${this.nome}</td> 
                     <td>${this.nascimento.toLocaleDateString()}</td> 
                     <td>${this.sexo}</td> 
                     <td>${this.idade}</td> 
                     <td>${this.classificação}</td> 
                 </tr>`; 
     } 
  
 } 
  
 const pessoas = []; 
  
 pessoas.push(new Pessoa("Erica Sinclair", new Date(1989, 10, 2), "F")); 
 pessoas.push(new Pessoa("Lucas Sinclair", new Date(2012, 12, 10), "M")); 
 pessoas.push(new Pessoa("Jonathan Byers", new Date(1970, 9, 16), "M")); 
 pessoas.push(new Pessoa("Mike Wheeler", new Date(2002, 7, 21), "M")); 
 pessoas.push(new Pessoa("Max Mayfield", new Date(1998, 4, 1), "F")); 
  
 const form = document.getElementById("novaPessoa"); 
 const corpo = document.getElementById("corpoTabela"); 
  
 form.addEventListener("submit", (event) => { 
     event.preventDefault(); 
     let pessoa = new Pessoa(form.nome.value, new Date(form.nascimento.value), form.sexo.value); 
     pessoas.push(pessoa); 
     form.reset(); 
     atualizaTabela(); 
 }); 
  
 function atualizaTabela() { 
     corpo.innerHTML = ""; 
     pessoas.forEach((pessoa) => { 
         corpo.innerHTML += pessoa.toTable(); 
     }); 
 }
