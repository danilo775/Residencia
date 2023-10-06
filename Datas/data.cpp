#include <iostream>

using namespace std;


struct Data
{
  int dia;
  int mes;
  int ano;
  char barra;

};

bool validarData(const Data &data);
int calcularDiasEntreDatas(const Data &data1, const Data &data2);


int main(){
    system("clear");  
  Data data, data1;

    cout << "Digite uma data (dia/mês/ano): " << endl;
    
    cin >> data.dia;
    cin>> data.barra;
    cin >> data.mes;
    cin>> data.barra;
    cin >> data.ano;

    if(validarData(data))
    {
        cout << data.dia << data.barra<< data.mes << data.barra << data.ano << endl;
    }else{
      cout << "Digite uma data Valida" << endl;
    };

    cout << "Digite uma data (dia/mês/ano): " << endl;
    
    cin >> data1.dia;
    cin>> data1.barra;
    cin >> data1.mes;
    cin>> data1.barra;
    cin >> data1.ano;

    if(validarData(data))
    {
        cout << data1.dia << data1.barra<< data1.mes << data1.barra << data1.ano << endl;
    }else{
      cout << "Digite uma data Valida" << endl;
    };

    int dias = calcularDiasEntreDatas(data, data1);
    
    cout << "os dias entre as datas " << dias << endl;

     
            
    return 0;
}



bool validarData(const Data &data)
{
    // Verifique o mês
    if (data.mes < 1 || data.mes > 12)
    {
        cout << "Mês inválido." << endl;
        return false;
    }

    // Verifique o dia
    if (data.dia < 1 || data.dia > 31)
    {
        cout << "Dia inválido." << endl;
        return false;
    }

    // verifica a barra
    if (data.barra != '/')
    {
        cout << "formato inválido." << endl;
        return false;
    }

    // Verifique se fevereiro não tem mais de 29 dias (considerando anos bissextos)
    if (data.mes == 2)
    {
        if ((data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0))
        {
            if (data.dia > 29)
            {
                cout << "Dia inválido para Fevereiro." << endl;
                return false;
            }
        }
        else
        {
            if (data.dia > 28)
            {
                cout << "Dia inválido para Fevereiro." << endl;
                return false;
            }
        }
    }

    // Verifique os meses com 30 dias
    if ((data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) && data.dia > 30)
    {
        cout << "Dia inválido para este mês." << endl;
        return false;
    }

    // Se todas as verificações passarem, a data é válida
    return true;
}

int calcularDiasEntreDatas(const Data &data1, const Data &data2)
{
    // Verifique se as datas são válidas
    if (!validarData(data1) || !validarData(data2))
    {
        cout << "Datas inválidas." << endl;
        return -1; // Valor inválido para representar erro
    }

    // Converte as datas para um número inteiro representando o total de dias desde uma data de referência (por exemplo, 01/01/0000)
    int dias1 = data1.ano * 365 + data1.mes * 30 + data1.dia;
    int dias2 = data2.ano * 365 + data2.mes * 30 + data2.dia;

    // Calcula a diferença em dias entre as duas datas
    int diferenca = abs(dias2 - dias1);

    return diferenca;
}