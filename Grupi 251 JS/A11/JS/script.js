// class Vetura{
//     constructor(marks,modeli){
//         this.marka = marka;
//         this.modeli = modeli;
//     }
//     pershkruaj(){
//         console.log("Kjo eshte nje " + this.marka + " " + this.modeli)
//     }
// }

// let vetura1 = new Vetura("BMW","X5");
// let vetura2 = new Vetura("AUDI","A6");
// let vetura3 = new Vetura("MERCEDES","E280");

// vetura1.pershkruaj();
// vetura2.pershkruaj();
// vetura3.pershkruaj();




// class automjet {
//     constructor(marka,ngjyra){
//         this.marka = marka;
//         this.ngjyra = ngjyra
//     }

// vendosNgjyren(ngjyra){
//     this.ngjyra = ngjyra
// }



// }

// let Automjeti1 = new Automjeti("Audi","E kuqe");

// console.log(automjeti1.marka)
// console.log(automjeti1.ngjyra)

// automjeti1.vendosNgjyren("te zeze");
// console.log(automjeti1.ngjyra);


class Library {
    constructor(){
        this.librat = [];

    }


shtoLiber(emriLibrit){
    this.librat.push(emriLibrit);
    console.log("Libri u shtua: " + emriLibrit);
}

shfaqLibra(){
    console.log("Librat ne biblioteke jane:")
    for(let i = 0; i < this.librat.length; i++ ){
        console.log((i + 1) + " . " + this.librat[i])
    }
}

}

let bibliotekaIme = new Library();

bibliotekaIme.shtoLiber("Meshari");
bibliotekaIme.shtoLiber("historia skenderbeut");
bibliotekaIme.shfaqLibra();