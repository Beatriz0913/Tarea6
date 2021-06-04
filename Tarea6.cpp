//Beatriz Quijada 61851282
#include<iostream>
#include<stdlib.h>
using namespace std;

class Hospedaje{
	private:
		string nombre;
		int edad;
		
	public:
    	Hospedaje(string, int);
	    void mostrarHospedaje();
			
};


class Hotel : public Hospedaje{
	private:
    	string tipoComida;
	    int cantidad;
	
	public:
		Hotel(string,int,string,int);
		void mostrarHotel();
}; 

class Apartamentos : public Hospedaje{
	private:
		int mes_contrato;
		
	public:
		Apartamentos(string,int,int);
		void mostrarApartamentos();
		
};

class AirBnb : public Hospedaje{
	private:
		string personas;
		int tiempo;
		
	public:
		AirBnb(string,int,string,int);
		void mostrarAirBnb();
		
};

class Habitaciones : public Hotel{
	private:
		string habitacion;
	public:
		Habitaciones(string,int,string,int,string);
		void mostrarHabitaciones();	
	
	
};
Hospedaje::Hospedaje(string _nombre, int _edad){
	nombre = _nombre;
	edad =_edad;

}

void Hospedaje::mostrarHospedaje(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
	
}
Hotel::Hotel(string _nombre, int _edad, string _tipoComida, int _cantidad) : Hospedaje(_nombre,_edad){
	   tipoComida = _tipoComida;
        cantidad = _cantidad;
}
     

void Hotel::mostrarHotel(){
	mostrarHospedaje();
	cout<<"Que desea comer? "<<tipoComida<<endl;
	cout<<"Cuantos platos desea? "<<cantidad<<endl;

}

Habitaciones::Habitaciones(string _nombre,int _edad,string _tipoComida,int _cantidad,string _habitacion) : Hotel(_nombre,_edad,_tipoComida,_cantidad){
	habitacion = _habitacion;
}
 
 void Habitaciones::mostrarHabitaciones(){
 	mostrarHospedaje();
 	cout<<"En que habitacion se hospedara? "<<habitacion<<endl;
 }
 
 
 
Apartamentos::Apartamentos(string _nombre,int _edad, int _mes_contrato) :  Hospedaje(_nombre,_edad){
	   mes_contrato = _mes_contrato;
}
void Apartamentos::mostrarApartamentos(){
	mostrarHospedaje();
	cout<<"Cuanto tiempo se hospedara: "<<mes_contrato<<endl;
}

AirBnb::AirBnb(string _nombre, int _edad,string _personas,int _tiempo) : Hospedaje(_nombre,_edad){
	string personas = _personas;
	int tiempo = _tiempo;
}
void AirBnb::mostrarAirBnb(){
	mostrarHospedaje();
	cout<<"Cuantas personas se hospedaràn? "<<personas<<endl;
	cout<<"Cuantas noches? "<<tiempo<<endl;
}


int main(){
	Hotel hotel1("Beatriz",20, "Desayuno",1);
	cout<<"Hospedaje"<<endl;
	cout<<"\n";
	cout<<"Hotel"<<endl;
	hotel1.mostrarHotel();
	cout<<"\n";
	
	Apartamentos apartamentos1("Adriana", 21, 3);
	cout<<"Apartamento"<<endl;
	apartamentos1.mostrarApartamentos();
	cout<<"\n";
	
	AirBnb airbnb1("Eduardo", 20 ,"3 Personas",2);
	cout<<"AirBnb"<<endl;
	airbnb1.mostrarAirBnb();
	cout<<"\n";
	
	Habitaciones habitaciones1("Carlos", 20, "Almuerzo", 1, "Sencilla");
	cout<<"Habitacion "<<endl;
	habitaciones1.mostrarHabitaciones();
	cout<<"\n";


	system("pause");
	return 0;
}
