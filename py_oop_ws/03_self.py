class Robot:
    def __init__(self,name):
        self.name = name

    def robotName(self):
        print("Robot name is :", self.name)
     
r1 = Robot("r123")  
r1.robotName()