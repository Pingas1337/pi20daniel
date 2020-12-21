from math import  sqrt 
a = float(input("Первая переменная = "))
b = float(input("Вторая переменная = "))
c = float(input("Третья переменная = "))

if (b*b-4*a*c > 0):
        d = b * b - 4 * a * c
        x1 = (-1 * b + sqrt(d)) / (2 * a)
        x2 = (-1 * b - sqrt(d)) / (2 * a)
        print("Корни уравнения: x1 = ", x1, ", x2 = ", x2)
        
elif (b*b-4*a*c == 0):
        x1 = -1 * b / (2 * a)
        print("Корень уравнения: x1 = ", x1)

elif (b*b-4*a*c < 0):
        print("Решение невозможно")
