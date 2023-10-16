//Criar objetos a partir de uma classe
class Triangulo {
    constructor(lado1, lado2, lado3) {
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }
    tipo() {
        if (this.lado1 == this.lado2 && this.lado2 == this.lado3) {
            return 'TRIANGULO EQUILÁTERO';
        } else if (this.lado1 != this.lado2 && this.lado2 != this.lado3 && this.lado1 != this.lado3) {
            return 'TRIANGULO ESCALENO';
        } else {
            return 'TRIANGULO ISÓSCELES';
        }
    }

    showHTML() {
        let str = `<label>Lado1:</label><label>${this.lado1}</label>`;
        str += `<label>Lado2:</label><label>${this.lado2}</label>`;
        str += `<label>Lado3:</label><label>${this.lado3}</label>`;
        str += `<label>Tipo:</label><label>${this.tipo()}</label>`;
        return str;
    }
}
//Criar instâncias desta classe em uma lista
const lista = [];
lista.push(new Triangulo(10, 10, 10));
lista.push(new Triangulo(10, 20, 10));
lista.push(new Triangulo(10, 40, 90));
lista.push(new Triangulo(10, 10, 50));
lista.push(new Triangulo(10, 10, 10));

//Mostrar no console
console.table(lista);

//Mostrar no HTML
const main = document.getElementById('triangulos');
lista.forEach(obj => {
    const div = document.createElement('div');
    div.innerHTML = obj.showHTML();
    main.appendChild(div);
});