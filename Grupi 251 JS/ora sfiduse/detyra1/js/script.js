class Person {
    constructor(name, age, state) {
        this.name = name;
        this.age = age;
        this.state = state;
    
    }
    
    detajet(){
        console.log(`Name: ${this.name}`);
        console.log(`Age: ${this.age}`);
        console.log(`State: ${this.state}`);

    }

    
}


const person1 = new Person('Riad', '18', 'Kosova')


person1.detajet();

