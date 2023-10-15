def voorbeeldfunctie(percent):
    totaal = brood + eieren + kaas + worst + toiletpapier
    return (percent / 100) * totaal + totaal


brood = int(input("please enter the  price of bread"))
print(brood)

eieren = int(input("please enter the  price of eggs"))
print(f" the price of eggs is {eieren}")
kaas = int(input("please enter the  price of cheese"))
print(f" the price of cheese is{kaas}")
worst = int(input("please enter the  price of  sandwich-sausage"))
print(f" the price of sandwich sausage is {worst}")
toiletpapier = int(input("please enter the  price of toiletpaper"))
print(f" the price of toiletpaper is  {toiletpapier}")

narrator = float(input(f" the total of your shoppinglist is {voorbeeldfunctie(21)}"))
