class Robot:
    def speak():
        print("robot is speaking")

class RobotDog(Robot):
    def move():
        print("robot is moving")


r1 = RobotDog

r1.speak()
r1.move()