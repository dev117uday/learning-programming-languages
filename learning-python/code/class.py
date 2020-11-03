class Health:
    life = 3

    def attack(self):
        print('attack')
        self.life -= 1

    def checklife(self):
        if self.life <= 0:
            print('dead')
        else:
            print(str(self.life) + " life left")


obj1 = Health()
obj1.attack()
obj1.checklife()
