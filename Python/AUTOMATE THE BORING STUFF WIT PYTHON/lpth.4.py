#赋值cars
cars = 100
#赋值space_in_a_car
space_in_a_car = 4.0
#赋值
drivers = 30
#赋值
passengers = 90
#把cars 和 drivers 的值赋给
cars_not_driven = cars - drivers
#同上
cars_driven = drivers
#同上
carpool_capacity = cars_driven*space_in_a_car
#同上
average_passengers_per_car = passengers/cars_driven

print('There are',cars,'cars avaliable')
print('There are only',drivers,'drivers avaliable')
print('There will be ',cars_not_driven,'drivers available')
print('We can transport ',carpool_capacity,'people today')
print('We have',passengers,'to carpool today')
print('We need to put about',average_passengers_per_car,'in each car')
