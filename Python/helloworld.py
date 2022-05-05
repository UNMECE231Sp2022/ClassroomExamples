#import Human
from Human import Person

# def my_name_is(name) -> str:
# def my_name_is(name: str):
# def my_name_is(name: str) -> str:
def my_name_is(name: str):
    return f"My name is {name}"

def main():
    # print("Hello world!")
    x = 12
    name = f"Frankie"
    #print(f"x is {x}, name is {name}")
    #print(f"Hello, {my_name_is(name)}")
    #print(f"Hello, {my_name_is(95)}")

    frankie = Person("Frankie", 26)
    frankie.say_hello()

    grades = [99, 95, 82, 94, 100]
    #print(f"Grades: {grades}")

    '''
    for i in grades:
        print(f"Grade value: {i}")

    for i in range(len(grades)):
        print(f"Grade {i}: {grades[i]}")

    for i in range(2, len(grades)):
        print(f"Grade {i}: {grades[i]}")

    for i in range(1, len(grades), 2):
        print(f"Grade {i}: {grades[i]}")
    '''

    x = [ i**2 for i in range(10) ]
    """
    x = []
    for i in range(10):
        # push_back == append
        x.append(i**2)
    """
    print(f"{x}")

if __name__ == "__main__":
    main()
