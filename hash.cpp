#include <iostream>
#include "hash.h"


using namespace std;




  int Hash::funcaohash(Aluno aluno)
  {
    return (aluno.abterRa() % max_position);
  }
   Hash::Hash(int tam_vetor, int max)// construtor 
   {
    quant_itens = 0;
    max_itens = max;
    max_position = tam_vetor;
    estrutura = new Aluno[tam_vetor];
  }
    Hash::~Hash() // destrutor
    {
        delete [] estrutura;
    }

    bool Hash:: estacheio()
    {
        return(quant_itens == max_itens);
    }
    int Hash::abterTamanhoAtual()
    {
        return(quant_itens);
    }
    void Hash::inserir(Aluno aluno)
    {
        int local = funcaohash(aluno);
        estrutura[local] = aluno;
        quant_itens++;
    }
    void Hash::deletar(Aluno aluno)
    {
        int local = funcaohash(aluno);
        if(estrutura[local].abterRa() != -1){
            estrutura[local] = Aluno(-1," ");
            quant_itens--;
        }
    }
    void Hash::buscar(Aluno& aluno,bool& buscar)
    {
        int local = funcaohash(aluno);
        Aluno aux = estrutura[local];
        if(aluno.abterRa() != aux.abterRa()){
            buscar = false;
        }else{
            buscar = true;
            aluno = aux;
        }
    }
    void Hash::imprimir()
    {
        cout << "Tabela hash:\n";
        for(int i = 0; i< max_position;i++){
            if(estrutura[i].abterRa() != -1){
                cout << i <<":" << estrutura[i].abterRa() << endl;
                cout << estrutura[i].obterNome()  << endl;
            }
        }
    }