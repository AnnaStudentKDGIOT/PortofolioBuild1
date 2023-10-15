class Modelhouse:
    count = 0

   def __init__(self, state):
       Modelhouse.count += 1
       self.state = state


    @staticmethod
    def print_count():
        print(f'Total number of states switched: {Modelhouse.count}')

s1 = Modelhouse(True)
s2 = Modelhouse(False)


Modelhouse.print_count()
Modelhou