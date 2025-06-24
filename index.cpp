#include <iostream>

#define MAX 3
using namespace std;
class Quadrado
{
private:
	float lado;
	//Verifica se o valor lido pode ser considerado para atributo
	bool validarLado()
	{
		string Tentativa;// Variavel de controle, enquanto for verdadeira o loop se repete
		do
		{
			if(this -> lado >= 0)//Condição Verdadeira
			{
				return true;
			}
			else
			{
				cout << "ERRO: Numero inserido deve ser positivo"<<endl;
				cout << "Gostaria de digitar denovo?(sim/nao) "<< endl;
				cin >> Tentativa;
				if(Tentativa == "sim")//Se o usario digitar sim se repete a digitação
				{
					 Lerlado();
				}
			    if (Tentativa == "nao")// sE o usuario digitar não, sai do loop
					return false;
			}

		}while(Tentativa != "nao");

	}
public:
	void setLado(float ladoLido)//Define valor parametrizado como atributo Lado;
	{
		this -> lado = ladoLido;
	}
	// Define um valor lido do teclado e o guarda no atributo lado;
	void Lerlado()
	{
		cout << "Digite o lado do quadrado: ";
		cin >> lado;
		if( validarLado()== true)
		setLado(lado);//chama função de definição de valor parametrizado;
	}
	//Recupera do valor do atributo Lado
	float getLado()
	{
		if(validarLado())
		return this->lado;
	}
	//Escreve o valor do atributo Lado
	void escreveLado()
	{
		if(validarLado())
		cout << "O valor do lado e: " << this -> lado << endl;
	}
	//Calcula o perimetro do Quadrado
	float calcularPerimetro()
	{
		if(validarLado())
		return this -> lado * 4;
	}
	// Calcula a area do Quadrado
	float calcularArea()
	{
		if(validarLado())
		return this -> lado * this->lado;
	}

};

int main()
{
	Quadrado Quadrado1;
	Quadrado1.Lerlado();
	cout << "O perimetro do quadrado e:" << Quadrado1.calcularPerimetro() << endl;
	cout << "A area do quadrado e: " << Quadrado1.calcularArea() << endl;
	Quadrado1.escreveLado();


	Quadrado ArraysQuadrados[MAX];
	for(int i = 0; i < MAX; i++)
	{
		ArraysQuadrados[i].Lerlado();
		cout << "O perimetro do quadrado e:" << ArraysQuadrados[i].calcularPerimetro() << endl;
		cout << "A area do quadrado e: " << ArraysQuadrados[i].calcularArea() << endl;

	}
	return 0;
}
