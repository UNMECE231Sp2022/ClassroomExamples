all: many_maths

many_maths: math_function.o q_function.o test_math.o
	gcc $^ -o $@

math_function.o: math_function.c maths.h
	gcc -c $<

q_function.o: q_function.c quad.h
	gcc -c $<

test_math.o: test_math.c maths.h quad.h
	gcc -c $<

clean:
	-rm *.o many_maths

