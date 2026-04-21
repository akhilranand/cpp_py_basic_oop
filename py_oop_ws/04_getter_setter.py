class Robot:
    def __init__(self,name):
        self.name = name

    def setName(self,name):
        self.name = name

    def getName(self):
        return self.name
    

r1 = Robot("a123") 
r1.setName("robo321")   
print(r1.getName())