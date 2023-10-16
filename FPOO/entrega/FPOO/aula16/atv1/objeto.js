// Objeto declarado diretamente
const obj = {};

// Atributos dinamicamente
obj.nome = 'ai chavinho';
obj.preço = 39.90;
obj.qtd = 10;

// Método
obj.total = function(){
    return obj.preço * obj.qtd;
}

// Método com arrow function
obj.showHTML = () => {
    let str = `<div>`;
    str += `<div><label>Nome: </label><label>${obj.nome}</label></div>`;
    str += `<div><label>Preço: </label><label>${obj.preço}</label></div>`;
    str += `<div><label>Quantidade: </label><label>${obj.qtd}</label></div>`;
    str += `<div><label>Total: </label><label>${obj.total()}</label></div>`;
    str += `</div>`;
    return str;
}

// Saída no console
console.log(obj);
console.log('valor total = R$ ' +obj.total().toFixed(2));

// Saída no HTML
const main = document.getElementById('objetos');
main.innerHTML = obj.showHTML();