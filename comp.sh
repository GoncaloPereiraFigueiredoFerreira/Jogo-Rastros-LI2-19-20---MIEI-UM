echo "gcc -c Logica/interface.c main.c Logica/funcoes.c"
gcc -c Logica/interface.c main.c Logica/funcoes.c
echo "gcc -o main main.o interface.o funcoes.o"
gcc -o main main.o interface.o funcoes.o
for i in *.o
do 
	echo "rm $i"
	rm $i
done