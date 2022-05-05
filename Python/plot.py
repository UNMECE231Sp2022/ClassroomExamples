from matplotlib import pyplot as plt

def f(x):
    return x ** 2;

def g(x):
    return x + 5;

def main():
    x = [i for i in range(100)]
    y = [f(i) for i in x]
    y2 = [g(i) for i in x]

    # start:end => [start,end)
    # :end => 0:end
    # start: => start:len(x)-1
    # start:end:step
    # :end:step => 0:end:step
    # start::step
    print(f"First ten values of x: {x[:10]}")
    print(f"First ten values of y: {y[:10]}")

    plt.plot(x, y, label="f(x) = x ** 2")
    plt.plot(x, y2, label="g(x) = x + 5")
    plt.title("Ploting multiple functions")
    plt.ylabel("f(x)")
    plt.xlabel("x")
    plt.legend()
    plt.show()

if __name__ == "__main__":
    main()
