#THis is my Make file for main.cpp
#we can use this for mutilple files 
#first method
#final:
#	gcc main.cpp -o output

#second method
$(CC) = gcc
final:
	$(CC) $(CFLAGS) main.cpp -o output2
clean:
	rm *.o 