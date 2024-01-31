CC = clang

baby_overflow:
	$(CC) baby_overflow.c main.c -o baby

fuzzer:
	$(CC) -g -O1 -fsanitize=fuzzer baby_overflow.c fuzz_target.c -o fuzz

asan:
	$(CC) -g -O1 -fsanitize=fuzzer,address baby_overflow.c fuzz_target.c -o fuzz	

memory:
	$(CC) -g -O1 -fsanitize=fuzzer,memory baby_overflow.c fuzz_target.c -o fuzz

ubsan:
	$(CC) -g -O1 -fsanitize=fuzzer,undefined baby_overflow.c fuzz_target.c -o fuzz
clean:
	rm -f baby fuzz
