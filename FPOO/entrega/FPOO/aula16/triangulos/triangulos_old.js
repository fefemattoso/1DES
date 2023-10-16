const obj = {};
var a, b, c;

obj.ladoa = 20;
obj.ladob = 20;
obj.ladoc = 20;

function triangulo() {
a=parseFloat(document.ladoa.value);
b=parseFloat(document.ladob.value);
c=parseFloat(document.ladoc.value);

if (a < b + c && b < a + c && c < a + b){
if (a==b && b==c){
document.saida.value='TRIANGULO EQUILÁTERO';}
else {
if (a==b || a==c || c==b){
document.saida.value='TRIANGULO ISÓSCELES';}
else {
document.saida.value='TRIANGULO ESCALENO';}
}
}
else {
document.saida.value='NÃO É UM TRIANGULO.';
}
}

obj.showHTML = () => {
    let str = `<label>Lado1:</label><label>${obj.ladoa}</label><label>Lado2:</label><label>${obj.ladob}</label><label>Lado3:</label><label>${obj.ladoc}</label>`;
    str += `<label>Lado1:</label><label>${obj.ladoa}</label><label>Lado2:</label><label>${obj.ladob}</label><label>Lado3:</label><label>${obj.ladoc}</label>`;
    str += `<label>Lado1:</label><label>${obj.ladoa}</label><label>Lado2:</label><label>${obj.ladob}</label><label>Lado3:</label><label>${obj.ladoc}</label>`;
    str += `<label>Lado1:</label><label>${obj.ladoa}</label><label>Lado2:</label><label>${obj.ladob}</label><label>Lado3:</label><label>${obj.ladoc}</label>`;
    return str;
}

