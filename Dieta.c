
// Definicion de estructuras
typedef struct Dieta Dieta;
typedef struct PilaDieta PilaDieta;
typedef struct Tiempo Tiempo;
typedef struct ListaTiempos ListaTiempos;
typedef struct Porcion Porcion;
typedef struct ListaPorciones ListaPorciones;

//Creación de estructuras
struct Dieta
{
	char fechaDieta[20];
	float pesoActual;
	char tiempoComida[20];
	char email[100];
	Dieta *dietaSiguiente;
	ListaTiempos *listaTiempos;
};

struct PilaDieta
{
	int cedulaPaciente[15];
	Dieta *tope;
	int size;
};

struct Tiempo
{
	char nombreTiempo;
	Tiempo *tiempoSiguiente;
	ListaPorciones *listaPorciones;
};

struct ListaTiempos
{
	Tiempo *inicio
};

struct Porcion
{
	int cantidad;
	//Grupo *grupoAlimenticio;
	Porcion *porcionSiguiente;
};

struct ListaPorciones
{
	Porcion *inicio
};

//definicion de funciones
PilaDieta *crearDieta(void);
Dieta consultarDietas(void);
int mostrarDieta(const PilaDieta *P);

//Funciones

PilaDieta *crearDieta(void) // 
{

	PilaDieta *P;
	Paciente *ptr;
	int tiemposComida;
	printf("\nIndique cuantos tiempos de comida desea registrar: \n");
	scanf("%d",&tiemposComida);
	if (tiemposComida<3)
	{
		printf("\nLo sentimos los tiempos de comida deben ser minimo 3.\n");
		return;
	}
	
	
	else if (tiemposComida>6)
	{
		printf("\nLo sentimos los tiempos de comida deben ser maximo 6.\n");
		return;
	}
	
	
	else
	{
		P = (PilaDieta *) malloc(sizeof(PilaDieta));
		
		P->tope = NULL;
		P->cedulaPaciente=ptr->cedula;
		P->size = 0;

		return P;
	}

}


//para esta funcion necesito info del codigo del paciente, para verificar la cedula en los pacientes. (proceso)
Dieta consultarDietas(void)
{
	int identification;
	printf("\nIngrese el numero de cedula del paciente que desea consultar la dieta: \n");
	scanf("%d",&identification);
	Paciente *ptr;
	ptr= ptr->cedula;
	while (identification!=ptr)
	{
		ptr=ptr->pacienteSiguiente;
	}
	
	monstrarDieta(ptr);
}


//funcion en proceso
int mostrarDieta(const PilaDieta *P)
{
	Dieta *i;
	printf("\La dieta del paciente consultado es: \n");
	for (i=P->tope; i!= NULL; i->dietaSiguiente)
	{
		printf("%s",i->)
	}
}
