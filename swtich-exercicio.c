using System;
class HelloWorld {
  static void Main() {
// declarar variaveis
double n1,n2;
double resultado = 0;
int operacao;

//codigo 

Console.WriteLine("Digite o valor 1");
n1 = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("Digite o valor 2");
n2 = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("Digite da operacao - 1,2,3 ou 4");
operacao = Convert.ToInt32(Console.ReadLine());

switch(operacao){
    case 1:
        resultado = (n1+n2/2); 
        break;
    case 2:
        resultado = n1-n2;
        break;
    case 3: 
        resultado = n1*n2;
        break;
    case 4:
        resultado = n1/n2;
        break;
    default:
    Console.WriteLine("Voce nao digitou a operecao correta");
    break;
}

    Console.WriteLine($"você escolheu {operacao}");
    Console.WriteLine($"O resultado é {resultado}");



  }
}
