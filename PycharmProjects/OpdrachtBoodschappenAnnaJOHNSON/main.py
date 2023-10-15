
shopping_list = {
    'apples': 1.5,
    'bread': 2.75,
    'milk': 1.15,
    'eggs': None,
    'cheese': 3.0
}


def calculate_total_price(shopping_list):
    total_price = 0
    for item, price in shopping_list.items():
        try:
            total_price += price
        except TypeError:
            total_price += 5  # assume the price is 5 if it's None
    return total_price


total_price = calculate_total_price(shopping_list)
print(f'Total price: {total_price:.2f}')



