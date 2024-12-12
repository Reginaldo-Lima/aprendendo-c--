++++++++++++++++++++
Para compilar de maneira correta o arquivo main.cpp
será necessário transformar o arquivo de código fonte
GradeBook.cpp em um arquivo-objeto com extensão .o

Fazendo uso dos comando:
=======================================
g++ -c GradeBook.cpp
=======================================
este comando gera o arquivo GradeBook.o

E para compilar o arquivo main.cpp em um arquivo executável:
========================================
g++ -o GradeBook main.cpp GradeBook.o
========================================
este comando compila o main.cpp e o link-edita como o GradeBook.o 
criando o arquivo executável GradeBook.exe 