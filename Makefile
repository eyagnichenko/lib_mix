CFLAGS=-Wall -Werror -Wextra

main: libcalc libtext_formatter
	cp ./text_formatter/libtext_formatter.so /usr/lib; chmod 755 /usr/lib/libtext_formatter.so; ldconfig
	gcc main.c -L ./calc -l calc -l text_formatter -o main

libcalc:
	cd ./calc; gcc -c *.c $(CFLAGS); ar -src libcalc.a *.o

libtext_formatter:
	cd ./text_formatter; gcc -fpic -c *.c $(CFLAGS); gcc -shared -o libtext_formatter.so *.o

clean-all:
	rm -f ./calc/libcalc.a ./text_formatter/libtext_formatter.so /usr/lib/libtext_formatter.so; ldconfig
	rm -f **/*.o main
