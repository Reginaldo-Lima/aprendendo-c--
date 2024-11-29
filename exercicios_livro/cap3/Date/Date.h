// Classe Date: Date.h
// Definição da classe Date
// 28/11/2024 por Reginaldo Moura
// Resolução do item 3.15 da lista de exercícios do cap. 03 do livro "C++ Como Programar"

class Date
{
public:
    Date(int dia, int mes, int ano); // o construtor inicializa os membros da classe
    void setDia(int); // configura o dia
    void setMes(int); // valida congigura o mês
    void setAno(int); // configura o ano
    int getDia(); // obtém o dia
    int getMes(); // obtém o mês
    int getAno(); // obtém o ano
    void displayDate(); // exibe a data
private:
    int dia;
    int mes;
    int ano;
}; // fim da classe Date