======================

Para compilar de maneira correta o arquivo funcionario.cpp
será necessário transformar o arquivo de código fonte
Employee.cpp em um arquivo-objeto com extensão .o

Fazendo uso dos comando:

g++ -c Employee.cpp


este comando gera o arquivo GradeBook.o

E para compilar o arquivo funcionario.cpp em um arquivo executável:
========================================

g++ -o Funcionario funcionario.cpp Employee.o

este comando compila o funcionario.cpp e o link-edita como o Employee.o 
criando o arquivo executável Funcionario.exe 