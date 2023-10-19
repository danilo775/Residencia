# include <iostream>
# include <vector>
#include <string>

using namespace std;

class Conta{
    private:
        int numero_conta;
        string nome;
        float saldo;
        vector <Transacao> transacao;
    public:
        virtual void depositar(float valor);          
        virtual void sacar(float valor);
        virtual void ver_extrato();
        
};

class ContaCorrenteComlimite : public Conta{
    private:
        float limite;
    public:
        ContaCorrenteComLimite(int numero, string nome, double saldo, double limite)
        : Conta(numero, nome, saldo), limite(limite) {};
        void depositar(float valor);
        void sacar(float valor);
        void ver_extrato();
};

class ContaPoupanca : public Conta{
    private:
        float taxa;
    public:
        void depositar(float valor);
        void sacar(float valor);
        void ver_extrato();
};

class ContaCorrenteComum : public Conta{
    private:
        string data_aniversario;
    public:
        void depositar(float valor);
        void sacar(float valor);
        void ver_extrato();
};

class Transacao{
    private:
        float valor;
        string decricao;
        string data;
    public:
        void setValor(float valor);
        void setTipo(string tipo);
        float getValor();
        string getTipo();
};