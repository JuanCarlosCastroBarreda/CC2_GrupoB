#define PERSONAJE_H__
#include <iostream>

class personaje{
    private:
        std::string nombre;
        int edad;
        std::string especie;
        std::string genero;
        std::string elemento;
    public:     
        personaje(std::string nombre, int edad, std::string especie, std::string genero, std::string elemento){
            this->nombre = nombre;
            this->edad = edad;
            this->especie = especie;
            this->genero = genero;
            this->elemento = elemento;
        }
        
        std::string getNombre(){
            return nombre;
        }
        int getEdad(){
            return edad;
        }
        std::string getEspecie(){
            return especie;
        }
        std::string getGenero(){
            return genero;
        }
        std::string getElemento(){
            return elemento;
        }

        ~personaje(){
        }

        void setNombre(std::string nombre){
            this->nombre = nombre;
        }

        void setEdad(int edad){
            this->edad = edad;
        }

        void setEspecie(std::string especie){
            this->especie = especie;
        }

        void setGenero(std::string genero){
            this->genero = genero;
        }

        void setElemento(std::string elemento){
            this->elemento = elemento;
        }

        void print(){
            cout<<"Nombre: "<<nombre<<"\n";
            std::cout<<"Edad: "<<edad<<"\n";
            std::cout<<"Especie: "<<especie<<"\n";
            std::cout<<"Genero: "<<genero<<"\n";
            std::cout<<"Elemento: "<<elemento<<"\n";
        }
};