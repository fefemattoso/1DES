// Objeto declarado diretamente
const obj = {};

// Atributos dinamicamente
obj.nome = 'Baleia azul - Balaenoptera musculus';
obj.classe = 'Mammalia';
obj.ordem = 'Cetacea';
obj.familia = 'Balaenopteridae';

// Método com arrow function
obj.showHTML = () => {
    let str = `<div>`;
    str += `<label>Nome: </label><label>${obj.nome}</label><br>`;
    str += `<label>Classe: </label><label>${obj.classe}</label><br>`;
    str += `<label>Ordem: </label><label>${obj.ordem}</label><br>`;
    str += `<label>Família: </label><label>${obj.familia}</label>`;
    str += `</div>`;
    return str;
}

// Saída no console
console.log(obj);

// Saída no HTML
const main = document.getElementById('objetos');
main.innerHTML = obj.showHTML();



const obj2 = {
    nome = '',
    classe = '',
    ordem = '',
    familia = '',

    showHTML(){
        let str = `<div>`;
        str += `<label>Nome: </label><label>${obj.nome}</label><br>`;
        str += `<label>Classe: </label><label>${obj.classe}</label><br>`;
        str += `<label>Ordem: </label><label>${obj.ordem}</label><br>`;
        str += `<label>Família: </label><label>${obj.familia}</label>`;
        str += `</div>`;
        return str;
    }
}

//Terceiro objeto, com atributos e métodos
const obj3 = {
    //Atributos locais do objeto
    nome = '',
    classe = '',
    ordem = '',
    familia = '',
    //Métodos locais do objeto
    showHTML(){
        let str = `<div>`;
        str += `<label>Nome: </label><label>${obj.nome}</label><br>`;
        str += `<label>Classe: </label><label>${obj.classe}</label><br>`;
        str += `<label>Ordem: </label><label>${obj.ordem}</label><br>`;
        str += `<label>Família: </label><label>${obj.familia}</label>`;
        str += `</div>`;
        return str;
    }
}

//Saídas no console
console.log(obj);

console.log(obj2);

console.log(obj3);


//Saída no HTML
const main = document.getElementById('objetos');

const div = document.createElement('div');
div.innerHTML = obj.showHTML();
main.appendChild(div);

const div2 = document.createElement('div');
div2.innerHTML = obj2.showHTML();
main.appendChild(div2);

const div3 = document.createElement('div');
div3.innerHTML = obj3.showHTML();
main.appendChild(div3);