# IntermiediateLevelCaluculator
import msvcrt
print("GUIDE : You can do Addition, Substration, Multiplication and Division Continously. \nOperators are (+, -, /,*, "
      "=).\nOnce '=' operator is entered, answer will be printed.")
num1 = int(input("\nEnter The First Number"))
for i in range(1, 100):
    sym = input("Enter The Operator")
    if sym == "+":
        num2 = int(input("Enter Next Number"))
        s = num1 + num2
        num1 = s
    if sym == "-":
        num2 = int(input("Enter Next Number"))
        s = num1 - num2
        num1 = s
    if sym == "*":
        num2 = int(input("Enter Next Number"))
        s = num1 * num2
        num1 = s
    if sym == "/":
        num2 = int(input("Enter Next Number"))
        s = num1 / num2
        num1 = s
    if sym == "=":
        break
print("\nThe Answer is",s)
