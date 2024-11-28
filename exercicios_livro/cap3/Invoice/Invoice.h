// Classe Invoice: Invoice.h
// Declaração da classe Invoice
// 28/11/2024 por Reginaldo Moura
// Resolução do item 3.13 da lista de exercício do cap. 03 do livro "C++ Como Programar"

#include <string>
using namespace std;

class Invoice
{
public:
    Invoice( string identificador, string descricao, int quantidade, int preco); // o construtor inicializa todos os membros de dados
    void setIdentificador( string ); // modifica o identificador do produto
    string getIdentificador(); // obtém o identificador do produto
    void setDescricao( string ); // modifica a descrição do produto
    string getDescrição(); // obtem a descrição do produto
    void setQuantidade( int ); // modifica a quantidade do produto
    int getQuantidade(); // obtém a quantidade do produto
    void setPreco( int ); // modifica o preço do produto
    int getPreco(); // obtém o preço do produto
    int getInvoiceAmount();
private:
    string identificador; // código identificador do produto
    string descricao; // descrição do produto
    int quantidade; // quantidade do produto
    int preco; // preço do produto
}; // fim da classe Invoice