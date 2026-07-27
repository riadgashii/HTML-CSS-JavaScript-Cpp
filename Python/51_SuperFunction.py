# super - Function used in a child class to call methods from a parent class (superclass)
#           Allows you to extend the functionality of the inherited methods

class Shape:
    def __init__(self,color,is_filled):
        self.color = color
        self.is_filled = is_filled

    def describe(self):
        print(f"It is {self.color} and {'filled' if self.is_filled == True else 'not filled'}")


class Circle(Shape):
    def __init__(self, color, is_filled,radius):
        super().__init__(color,is_filled)
        self.radius = radius

    def describe(self):
        super().describe()
        print(f"It is a circle with an area of {3.14 * self.radius * self.radius}")

class Square(Shape):
    def __init__(self, color, is_filled,width):
        super().__init__(color,is_filled)
        self.width = width
    def describe(self):
        super().describe()
        print(f"It is a square with an area of {self.width * self.width }")

class Triangle(Shape):
    def __init__(self, color, is_filled,width,height):
        super().__init__(color,is_filled)
        self.width = width
        self.height = height

    def describe(self):
        super().describe()
        print(f"It is a triangle with an area of {self.width * self.height / 2 }")



circle = Circle("Red", True, 5)
square = Square("Blue", False, 3)
triangle = Triangle("Orange", True, 5 , 10)

print(circle.color)
print(circle.is_filled)
print(circle.radius)
print(square.color)
print(square.is_filled)
print(square.width)
print(triangle.color)
print(triangle.is_filled)
print(triangle.width)
print(triangle.height)

circle.describe()
square.describe()
triangle.describe()
