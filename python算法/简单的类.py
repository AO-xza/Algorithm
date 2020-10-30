class Car:
    def __init__(self, name):
        self.name = name
        self.remain_mile = 0
    def fill_fuel(self, miles):
        self.remain_mile = miles
    def run(self, miles):
        print(self.name, end=': ')
        if self.remain_mile >= miles:
            self.remain_mile -= miles
            print("run %d miles!" % (miles,))
        else:print("fuel out!")
class GasCar(Car):
    def fill_fuel(self, gas):
        self.remain_mile = gas * 6.0
class ElecCar(Car):
    def fill_fuel(self, power):
        self.remain_mile = power * 3.0

gcar = GasCar("BMW")
gcar.fill_fuel(50.0)
gcar.run(200)
ecar = ElecCar("Tesla")
ecar.fill_fuel(60.0)
ecar.run(200.0)