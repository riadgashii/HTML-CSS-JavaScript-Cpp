# class variables - Shared among all instances of a class 
#                   Defined outside the constructor
#                   Allow you to share data among all objects created from that class 

class Student:

    class_year = 2024
    num_students = 0

    def __init__(self, name, age):
        self.name = name
        self.age = age
        Student.num_students += 1

student1 = Student("Richie", 18)
student2 = Student("Endrit", 19)
student3 = Student("Andi", 20)
student4 = Student("Baki", 21)

print(f"My graduating class of {Student.class_year} has {Student.num_students} students.")
print(student1.name)
print(student2.name)
print(student3.name)
print(student4.name)
# print(student1.name)
# print(student1.age)
# print(student2.name)
# print(student2.age)
# print(student1.class_year)
# print(Student.class_year)

