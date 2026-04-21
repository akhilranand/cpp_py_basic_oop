class Robot:
    def __init__(self,name):
        self.name = name

class RobotDog(Robot):
    def __init__(self, name , version):
        super().__init__(name)
        self.version = version

r1 = RobotDog("robo123","v3")    

print(r1.name)
print(r1.version)