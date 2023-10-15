def btwinclusive(percent):
    whole = itemA + itemB

    return (percent / 100) * whole  # to calculate itemprice and vat together #### (percent / 100) * whole+whole
    # usually in functions like this you have to declare what the parameters are##n\ in my first version of this ## # calculator i wrote as value of percent 21# you can write the definitions of the parameters of this function as btwinclusive(21)


itemA = int(input("please enter the first item"))
print(itemA)
itemB = int(input("please enter the second item"))
print(itemB)

narrator = float(input(f"the btw of your smos is {btwinclusive(21)} "))

print(narrator)

# this as it is calculates the vat of any given number which you have to type into the terminal which is running # # # this# code if you want to calculate the price of a product and add the vat ontop of the price which is typed inwithout vat the simple addition which you need to make is a +whol
