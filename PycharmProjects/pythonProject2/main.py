def count_bauble_colors(baubles):
    color_counts = {'rood': 0, 'groen': 0, 'blauw': 0, 'overig': 0}
    for bauble in baubles:
        if bauble == 'rood':
            color_counts['rood'] += 1
        elif bauble == 'groen':
            color_counts['groen'] += 1
        elif bauble == 'blauw':
            color_counts['blauw'] += 1
        else:
            color_counts['overig'] += 1
    return color_counts


baubles = ['rood', 'groen', 'rood', 'blauw', 'overig', 'groen', 'blauw', 'groen']
color_counts = count_bauble_colors(baubles)
print(color_counts)
