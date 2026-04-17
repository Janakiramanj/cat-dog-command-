all:
	gcc -Iinclude src/feature_1.c src/feature_2.c src/feature_3.c src/main.c -o build/dog

clean:
	rm -rf build/dog
