// class Student {
//     constructor(emri, mosha, klasa) {
//         this.emri = emri;
//         this.mosha = mosha;
//         this.klasa = klasa;
//     }
// }


// Student.prototype.pershendet = function () {
//     console.log(`Pershendetje une jam ${this.emri} nga klasa ${this.klasa}`)
// }
// const studenti1 = new Student("riad", 19, "12/1")
// console.log(studenti1);
// studenti1.pershendet();

// const studenti2 = new Student("Ardian", 20, "12/2"
// )
// console.log(studenti2);
// studenti2.pershendet();




// Krijo nje klase makina qe i ka keto rregulla
// konstruktor me brand model dhe year
// metode me prototype drive() qe printon "Duke e vozit brand model"
// getter qe kthen sa vjet eshte e vjeter makina 
// setter qe lejon ndryshimin e vitit vetem nese eshte me i vogel se 2025

// class Car{
//     constructor(brand, model, year){
//         this.brand = brand;
//         this.model = model;
//         this.year = year;
//     }

//     drive(){
//         console.log(`Duke vozitur ${this.brand} ${this.model}`)
//     }

//     get age(){
//         return 2025 - this._year;
//     }

//     set year(viti){
//         if(viti <= 2025){
//             this._year = viti
//         }else {
//             console.log("Kujdes me vitin se nuk mund te jete me i madh se 2025")
//         }
//     }
// }



// const car1 = new Car("Mercedes","5500",2022);
// car1.drive()











class Quiz {
    constructor(questions) {
        this.questions = questions;
        this.currentIndex = 0;
        this.score = 0;
        this.selectedAnswers = null;
        this.answerLog = [];
    }

    getCurrentQuestion() {
        return this.questions[this.currentIndex];

    }

    checkAnswer() {
        const correct = this.selectedAnswers === this.getCurrentQuestion().answer;
        if (correct) {
            this.score++;
            this.answerLog.push({
                question: this.getCurrentQuestion().question,
                given: this.selectedAnswers,
                correct: this.getCurrentQuestion().answer,
                status: "sakte"
            });
        } else {
            this.answerLog.push({
                question: this.getCurrentQuestion().question,
                given: this.selectedAnswers,
                correct: this.getCurrentQuestion().answer,
                status: "gabim"
            });
        }
        return correct
    }

    nextQuestion() {
        this.currentIndex++;
        this.selcetedAnswers = null;
    }

    hasEnded() {
        return this.currentIndex >= this.questions.length;
    }

}
const questions = [
    { question: "Cili është kryeqyteti i Shqipërisë?", options: ["Tirana", "Shkodra", "Durrësi", "Vlorë"], answer: "Tirana" },
    { question: "Sa është 5 + 7?", options: ["10", "11", "12", "13"], answer: "12" },
    { question: "Kush është lumi më i gjatë në botë?", options: ["Nili", "Amazon", "Drini", "Vjosa"], answer: "Nili" },
    { question: "Sa kontinente ka në Tokë?", options: ["5", "6", "7", "8"], answer: "7" },
    { question: "Cili është planeti më i madh në sistemin diellor?", options: ["Mars", "Tokë", "Jupiter", "Saturn"], answer: "Jupiter" },
    { question: "Sa është 9 x 9?", options: ["81", "72", "99", "90"], answer: "81" },
    { question: "Cili shtet quhet 'Vendi i Diellit që Lind'?", options: ["Kina", "Japonia", "Korea", "India"], answer: "Japonia" },
    { question: "Sa ditë ka një vit i zakonshëm?", options: ["365", "366", "364", "360"], answer: "365" },
    { question: "Kush është autori i 'Lahuta e Malcis'?", options: ["Naim Frashëri", "Ismail Kadare", "Gjergj Fishta", "Eqrem Çabej"], answer: "Gjergj Fishta" },
    { question: "Cila është detyra kryesore e mushkërive?", options: ["Qarkullimi i gjakut", "Frymëmarrja", "Tretja", "Lëvizja"], answer: "Frymëmarrja" }
];

const quiz = new Quiz(questions)
const questionE1 = document.getElementById("question")
const optionE1 = document.getElementById("options")
const resultE1 = document.getElementById("result")
const submitBtn = document.getElementById("submitBtn")
const timerE1 = document.getElementById("timer")
const answerListE1 = document.getElementById("answeList")

let timer;
let timeleft = 10;

function loadQuestion(){
    const currentQuestion = quiz.getCurrentQuestion();
    questionE1.textContent = currentQuestion.question;
    optionsE1.innerHTML = "";
    timerE1.textContent = `Koha e mbetur: ${timeleft} sekonda`

currentQuestion.options.forEach(option =>{
    const button = document.createElement("button")
    button.textContent = option;
    button.onclick = () => {
        quiz.selectedAnswers = option;
        document.querySelectorAll(".options button").forEach(btn => btn.style.backgroundColor = "#007bff");

    };
    optionE1.appendChild(button);

})
startTimer();
}