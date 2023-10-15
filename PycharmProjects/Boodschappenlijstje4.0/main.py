shopping_list = {
    'apples': 1.5,
    'bread': 2.75,
    'milk': None,
    'eggs': 2.3,
    'cheese': 3.0
}


def calculate_total_price(shopping_list):
    total_price = 0
    for item, price in shopping_list.items():
        try:
            if price is None:
                raise ValueError(f'Geen prijs gevonden voor item {item}')
            total_price += price
        except TypeError:
            total_price += 5
    return total_price


try:
    total_price = calculate_total_price(shopping_list)
    print(f'Total price: {total_price:.2f}')
except ValueError as e:
    print(e)
