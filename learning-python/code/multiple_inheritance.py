class Mario():

    def move(self):
        print('I am moving')


class mushroom():

    def eat_shroom(self):
        print('Now i am big')


class Shooting_fire():

    def fire_ball(self):
        print('shooting fire ball')


class Big_mario(Mario, mushroom, Shooting_fire):
    pass


mario_player = Big_mario()
mario_player.move()
mario_player.eat_shroom()
mario_player.fire_ball()
