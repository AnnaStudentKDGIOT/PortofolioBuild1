import random

answers = [
    "Zeker weten!",
    "Het is zeker zo.",
    "Ja, absoluut.",
    "Zonder twijfel.",
    "Ja, dat lijkt erop.",
    "Vraag later nog eens.",
    "Ik kan het nu niet voorspellen.",
    "Focus je vraag en stel hem opnieuw.",
    "Antwoord vaag, probeer opnieuw.",
    "Niet zo zeker.",
    "Eerder nee.",
    "Mijn bronnen zeggen van niet.",
    "Er is weinig kans.",
    "Helemaal niet.",
    "Absoluut niet."
]

print("Stel je vraag aan de magic 8 ball:")
question = input()

print("De magic 8 ball zegt: " + random.choice(answers))

# ________________________#


with open("exerciseread.txt", "r") as file:
    lines = file.readlines()

for i in range(3, len(lines), 4):
    print(lines[i])


# _____________________________#


def fibonacci(n):
    if n == 0 or n == 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)


with open("exercisewrite.txt", "w") as file:
    for i in range(10):
        file.write(str(fibonacci(i)) + "\n")

print("De eerste 10 getallen van de rij van Fibonacci zijn naar het bestand exercisewrite.txt geschreven.")
# ______________________________#

with open("exercisewrite.txt", "a") as file:
    file.write(str(fibonacci(11)) + "\n")

print("Het elfde getal van de rij van Fibonacci is naar het bestand exercisewrite.txt toegevoegd.")
# _______________________________#
