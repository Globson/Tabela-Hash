all: Main.c Sources/Hashing.c
	gcc Main.c -o EXEC Sources/Hashing.c

run: EXEC
	./EXEC

clear: EXEC
	rm EXEC
