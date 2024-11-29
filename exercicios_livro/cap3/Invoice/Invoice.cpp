// Classe Invoice: Invoice.cpp
// Implementação da classe Invoice
// 28/11/2024 por Reginaldo Moura
// Resolução do item 3.13 da lista de exercício do cap. 03 do livro "C++ Como Programar"

#include <string>
using namespace std;

#include "Invoice.h" // inclui da declaração da classe Invoice

// o construtor inicializa os membros de dados da classe Invoice
Invoice::Invoice(string identificador, string descricao, int quantidade, int preco)
{
    setIdentificador( identificador );
    setDescricao( descricao );
    setQuantidade( quantidade );
    setPreco( preco );
} // fim do construtor Invoice

// modifica o codigo identificador do produto
void Invoice::setIdentificador( string codigo )
{
    identificador = codigo;
} // fim da função setIdentificador

// modifica a descrição do produto
void Invoice::setDescricao( string nome )
{
    descricao = nome;
} // fim da função setDescrição

// altera e valida a quantidade do produto
void Invoice::setQuantidade(int qtd )
{
    if (qtd >= 0 )
        quantidade = qtd;
    if (qtd < 0)
        quantidade = 0;
} // fim da função setQuantidade

// altera e valida o preço do produto
void Invoice::setPreco( int valor )
{
    if ( valor >= 0 )
        preco = valor;
    if (valor < 0)
        preco = 0;
} // fim da função setPreco

// obtem o identificador do produto
string Invoice::getIdentificador()
{
    return identificador;
} // fim da função getIdentificador

// obtém a descrição do produto
string Invoice::getDescrição()
{
    return descricao;
} // fim da função getDescrição

// obtem a quantidade do produto
int Invoice::getQuantidade()
{
    return quantidade;
} // fim da função getQuantidade

// obtém o preço do produto
int Invoice::getPreco()
{
    return preco;
} // fim da função getPreco

// obtém o valor final da fatura
int Invoice::getInvoiceAmount()
{
    return getQuantidade() * getPreco();
} // fim da função getInvoiceAmount