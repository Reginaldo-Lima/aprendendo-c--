======================

Para compilar de maneira correta o arquivo main.cpp
será necessário transformar o arquivo de código fonte
Invoice.cpp em um arquivo-objeto com extensão .o

Fazendo uso dos comando:

g++ -c Invoice.cpp


este comando gera o arquivo GradeBook.o

E para compilar o arquivo fatura.cpp em um arquivo executável:
========================================

g++ -o Fatura fatura.cpp Invoice.o

este comando compila o fatura.cpp e o link-edita como o Invoice.o 
criando o arquivo executável Fatura.exe 