#include "aluno.h"




    Aluno::Aluno() // iniciando o metodo construtor
    {
        ra = -1;
        nome = " ";
        
     }

    Aluno::Aluno(int r, string n)
    {   
        ra = r;
        nome = n;

    }
    int Aluno::abterRa()
    {
        return ra;

    }
    string Aluno::obterNome()
    {
        return nome;

    }








