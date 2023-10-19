#include <iostream>
#include <vector>
#include <string>

class Transacao {
public:
    Transacao(std::string data, double valor, std::string descricao)
        : data(data), valor(valor), descricao(descricao) {}

    std::string getData() const { return data; }
    double getValor() const { return valor; }
    std::string getDescricao() const { return descricao; }

private:
    std::string data;
    double valor;
    std::string descricao;
};

class Conta {
public:
    Conta(int numero, std::string nome, double saldo)
        : numero(numero), nome(nome), saldo(saldo) {}

    virtual void deposito(double valor) {
        saldo += valor;
        transacoes.push_back(Transacao("Depósito", valor, ""));
    }

    virtual bool retirada(double valor) {
        if (saldo >= valor) {
            saldo -= valor;
            transacoes.push_back(Transacao("Retirada", -valor, ""));
            return true;
        }
        return false;
    }

    virtual void extrato() {
        std::cout << "Número da Conta: " << numero << std::endl;
        std::cout << "Nome do Correntista: " << nome << std::endl;
        std::cout << "Saldo: " << saldo << std::endl;
        std::cout << "Transações:" << std::endl;
        for (const Transacao& transacao : transacoes) {
            std::cout << transacao.getData() << "\t" << transacao.getValor() << "\t" << transacao.getDescricao() << std::endl;
        }
    }

protected:
    int numero;
    std::string nome;
    double saldo;
    std::vector<Transacao> transacoes;
};

class ContaCorrenteComum : public Conta {
public:
    ContaCorrenteComum(int numero, std::string nome, double saldo)
        : Conta(numero, nome, saldo) {}
};

class ContaCorrenteComLimite : public Conta {
public:
    ContaCorrenteComLimite(int numero, std::string nome, double saldo, double limite)
        : Conta(numero, nome, saldo), limite(limite) {}

    bool retirada(double valor) override {
        if (saldo + limite >= valor) {
            saldo -= valor;
            transacoes.push_back(Transacao("Retirada", -valor, ""));
            return true;
        }
        return false;
    }

    void extrato() override {
        Conta::extrato();
        std::cout << "Limite: " << limite << std::endl;
    }

private:
    double limite;
};

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(int numero, std::string nome, double saldo, int diaAniversario)
        : Conta(numero, nome, saldo), diaAniversario(diaAniversario) {}

    void extrato() override {
        Conta::extrato();
        std::cout << "Dia do Aniversário: " << diaAniversario << std::endl;
    }

private:
    int diaAniversario;
};

int main() {
    std::vector<Conta*> contas;
    ContaCorrenteComum conta1(1, "Cliente 1", 1000.0);
    ContaCorrenteComLimite conta2(2, "Cliente 2", 2000.0, 1000.0);
    ContaPoupanca conta3(3, "Cliente 3", 1500.0, 15);

    contas.push_back(&conta1);
    contas.push_back(&conta2);
    contas.push_back(&conta3);

    int escolha;
    int numeroConta;

    while (true) {
        std::cout << "Escolha uma operação:" << std::endl;
        std::cout << "1. Depósito" << std::endl;
        std::cout << "2. Retirada" << std::endl;
        std::cout << "3. Extrato" << std::endl;
        std::cout << "4. Sair" << std::endl;
        std::cin >> escolha;

        if (escolha == 4) {
            break;
        }

        std::cout << "Informe o número da conta: ";
        std::cin >> numeroConta;

        bool contaEncontrada = false;
        for (Conta* conta : contas) {
            if (conta->getNumero() == numeroConta) {
                contaEncontrada = true;

                if (escolha == 1) {
                    double valor;
                    std::cout << "Informe o valor do depósito: ";
                    std::cin >> valor;
                    conta->deposito(valor);
                } else if (escolha == 2) {
                    double valor;
                    std::cout << "Informe o valor da retirada: ";
                    std::cin >> valor;
                    if (!conta->retirada(valor)) {
                        std::cout << "Saldo insuficiente ou limite excedido." << std::endl;
                    }
                } else if (escolha == 3) {
                    conta->extrato();
                }

                break;
            }
        }

        if (!contaEncontrada) {
            std::cout << "Conta não encontrada." << std::endl;
        }
    }

    return 0;
}
