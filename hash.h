#include "aluno.h"

class Hash{
    private:

    int funcaohash(Aluno aluno);
    int max_itens;
    int max_position;
    int quant_itens;
    Aluno* estrutura;

    public:

    Hash();// construtor 
    Hash(int tam_vetor, int max);
    ~Hash(); // destrutor

    bool estacheio();
    int abterTamanhoAtual();
    void inserir(Aluno aluno);
    void deletar(Aluno aluno);
    void buscar(Aluno& aluno,bool& buscar);
    void imprimir();

};