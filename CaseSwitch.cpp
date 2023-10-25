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
  std::cout << "-------------------------------------!\n";
  std::cout << "Bienvenido: " << name << "!\n";
  std::cout << "-------------------------------------!\n";
  std::cout << "\n";
  
  //FASE 1
  
  std::cout << "-------------------------------------!\n";
  std::cout << "        _        Menu!\n";
  std::cout << "1. calcular el promedio !\n";
  std::cout << "2. Datos del usuario!\n";
  std::cout << "3. Salir!\n";
  std::cout << "-------------------------------------!\n";
  //Solicita al user la opcion
  int opcion; // la varible el cual se usara para solicitar al usario es tipo entero
  std:: cout << "Ingrese opcion \n";
  std:: cout << ">> ";
  std::cin >> opcion;
  
  //no aceptara datos de tipo string(letras)
  switch(opcion){
      //calcular promedio
      case 1:
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
        break;
        case 2:
            std::cout << "-------------------------------------!\n";
            std::cout << " Los datos del user son: " << name << "!\n";
            std::cout << "-------------------------------------!\n";
        default:
            std::cout << "Press to botton for exit!\n";
            
      }
    
    
  
  
  
  
  
  
    
    return 0;
  
  
  
  
}