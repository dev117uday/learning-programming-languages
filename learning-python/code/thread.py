import threading


class Sendx(threading.Thread):

    def run(self):
        for _ in range(1000000):
            print(threading.current_thread().getName())


x = Sendx(name='thread_name')
y = Sendx(name='thread_name_two')

x.start()
y.start()
