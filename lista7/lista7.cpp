//ex1
#include <iostream>

int main() {
    int numeroFuncionario;
    int horasTrabalhadas;
    double valorPorHora;
    double salario;

   
   std::cout << "Digite o número do funcionário: ";
   std::cin >> numeroFuncionario;
   std::cout << "Digite o número de horas trabalhadas: ";
   std::cin >> horasTrabalhadas;
   std::cout << "Digite o valor recebido por hora: ";
   std::cin >> valorPorHora;

  
   salario = horasTrabalhadas * valorPorHora;

   
   std::cout << "N funcionário: " << numeroFuncionario << std::endl;
   std::cout << "Salário: " << salario << std::endl;

    return 0;
}

//ex2
#include <iostream>
#include <iomanip> // Para usar std::setprecision

int main() {
    int quantidade1, quantidade2;
    double valorUnitario1, valorUnitario2;
    double totalAPagar;

   std::cout << "Digite a quantidade e o valor unitário do primeiro produto: ";
    std::cin >> quantidade1 >> valorUnitario1;

   std::cout << "Digite a quantidade e o valor unitário do segundo produto: ";
    std::cin >> quantidade2 >> valorUnitario2;

    totalAPagar = (quantidade1 * valorUnitario1) + (quantidade2 * valorUnitario2);

    std::cout << "VALOR A PAGAR: " << std::fixed << std::setprecision(2) << totalAPagar << std::endl;

    return 0;
}

//ex3
#include <iostream>
#include <iomanip> 

int main() {
    double A, B, C;
    const double PI = 3.14159;

    std::cout << "Digite os valores de A, B e C: ";
    std::cin >> A >> B >> C;

     double areaTriangulo = (A * C) / 2.0;
    double areaCirculo = PI * C * C;
    double areaTrapezio = ((A + B) / 2.0) * C;
    double areaQuadrado = B * B;
    double areaRetangulo = A * B;

    std::cout << std::fixed << std::setprecision(5); 
    std::cout << "TRIANGULO: " << areaTriangulo << std::endl;
    std::cout << "CIRCULO: " << areaCirculo << std::endl;
    std::cout << "TRAPEZIO: " << areaTrapezio << std::endl;
    std::cout << "QUADRADO: " << areaQuadrado << std::endl;
    std::cout << "RETANGULO: " << areaRetangulo << std::endl;

    return 0;
}


