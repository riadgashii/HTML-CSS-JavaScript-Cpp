// class Punetor {
//     constructor(emri, pozita) {
//         this.emri = emri;
//         this.pozita = pozita;
//     }
//     pershendet() {
//         console.log(`Pershendetje. Une jam ${this.emri} dhe pozita ime eshte ${this.pozita}`)
//     }

// }

// class Menaxher extends Punetor {
//     constructor(emri, pozita, departamenti) {
//         super(emri, pozita);
//         this.departamenti = departamenti;
//     }
//     miratonProjekte() {
//         console.log(`${this.emri} si ${this.pozita} i departamentit ${this.departamenti} eshte duke miratuar projektet`)
//     }
// }

// const MenaxheriIMadh = new Menaxher("Riad", "Menaxher i pergjithshem", "Zhvillimi");
// MenaxheriIMadh.pershendet();
// MenaxheriIMadh.miratonProjekte();


// detyra 2

// class Shape{
//     calculateArea(){
//         console.log("Duke llogaritur siperfaqen e formave...");
//         return 0;
//     }
// }

// class Rectangle extends Shape {
//     constructor(width, height){
//         super();
//         this.width = width;
//         this.height = height;
//     }

//     calculateArea(){
//         console.log(`Llogaritja e siperfaqes per drejtkendshin me gjeresi ${this.width} dhe lartesi ${this.height}:`);
//         return this.width * this.height;
//     }
// }
// class Triangle extends Shape {
//     constructor(base, height){
//         super();
//         this.base = base;
//         this.height = height;
//     }

//     calculateArea(){
//         console.log(`Llogaritja e siperfaqes oer trekendeshin me baze ${this.base} dhe lartesi ${this.height}:`);
//         return 0.5 * this.base * this.height
//     }
// }

// const myRectangle = new Rectangle(10,5);
// const myTriangle = new Triangle(8,4);

// console.log("Testimi i metodave")

// let areaRectangle = myRectangle.calculateArea();
// console.log(`Siperfaqja e drejtkendeshit (Rectangle): ${areaRectangle}`);

// let areaTriangle = myTriangle.calculateArea();
// console.log(`Siperfaqja e trekendeshit (Triangle): ${areaTriangle}`);



