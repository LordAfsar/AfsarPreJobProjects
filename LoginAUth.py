print("Create your Account")
a = input("Enter your Username")
for i in range(0,100):
    print("Enter the PassWord (password must be 8 long)")
    global b
    b = input()
    count = 0
    for val in b:
        count += 1
    if count < 8:
        print("Please Enter 8 Values")
    else:
        break
print("Your Account has created !!! ")
print("\nNow Login To your Account")
print("Press Enter to Login")
i = input()
for j in range(0,100):
    inp_1 = input("Enter username")
    if inp_1 == a:
        break
    else:
        print("Enter correct username")
for p in range(0,100):
    inp_2 = input("Enter PassWord")
    if inp_2 == b:
        break
    else:
        print("Enter Correct PassWord")
print("\nAccess Granted!!!\nWelcome "+a)
