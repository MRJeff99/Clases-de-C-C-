// Example program
// Librerias
#include <iostream>
#include <string>

//Clase principal
int main()
{
    //Variables
  std::string name;
  std::cout << "Cual es tu nombre? ";
  getline (std::cin, name);
  std::cout << "Bienvenido: " << name << "!\n";
  
  //FASE 1
  
  //solicitamos al usuario las notas
  int nota1, nota2, nota3;
  std::cout << "Ingrese nota del primer bimestre \n ";
  std::cin>> nota1;
  std::cout << "Ingrese nota del 2do bimestre \n";
  std::cin >> nota2;
  std::cout << "Ingrese nota del 3er bimestre \n";
  std::cin>> nota3;
  //operamos el promedio
  int nota4;
  nota4 = (nota1 + nota2 + nota3)/3;
  std::cout << "Tu promedio es: " << nota4 <<  std::endl;
  //Fase II - verificamos si el alumno gano el curso.
    if (nota4 >= 100) {
      std::cout << "Felicidades, has ganado el curso \n";
    }else if (nota4 >=80){
        std::cout << "Has ganado el curso \n";    
    }else if(nota4 >= 65){
        std::cout << "Tu nota es regular, tienes derecho a un examen de retrasada \n";
    }else{
        std::cout << "Has perdido el curso, tienes que repetirlo \n";    
    }
    
    return 0;
  
  
  
  
}