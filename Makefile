all: mnist

run: mnist
	./mnist.out

mnist:
	cc src/*.c -o mnist.out

clean:
	rm mnist.out
