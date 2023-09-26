prog = quadratique

$(prog): $(prog).c
	gcc -Wall -Wextra -o quadratique -std=c11 quadratique.c

.PHONY: clean

clean:
	-rm $(prog)

test: $(prog)
	./$(prog) 1 8 3

test2: $(prog)
	./$(prog) 1 9 3 5