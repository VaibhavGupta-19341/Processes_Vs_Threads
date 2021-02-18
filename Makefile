compile1:
# 	Compile your code for first part here
	gcc Q1_part1.c -o Q1_part1

run1: compile1
# 	 Execute part 1 here
	./Q1_part1

compile2:
# 	Compile your code for second part here
	gcc -pthread Q1_part2.c -o Q1_part2

run2: compile2
#	Execute part 2 here
	./Q1_part2
