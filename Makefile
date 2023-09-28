a: clean
	@g++ $a.cpp -o a -std=gnu++20 -I ./ \
	&& ./a

clean:
	@rm -rf a