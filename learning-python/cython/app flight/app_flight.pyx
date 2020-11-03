class Flights:

    def __init__(self,start,end,time):
        self.start = start
        self.end = end
        self.time = time


def main():

    f = Flights(start="Delhi",end="tokoyo",time=2)

    print(f.start)
    print(f.end)
    print(f.time)


if __name__ == "__main__":
    main()
