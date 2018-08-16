enum GranoUnidad { Libra, Medida, Kilo };
std::string GranoUnidadValor[] = {"Libra", "Medida", "Kilo"};

enum LimpiezaTipo {Liquido, Polvo};
std::string LimpiezaTipoValor[] = {"Liquido", "Polvo"};

enum LiquidoCategoria {Lacteo, Gaseosa, Jugo, Agua};
std::string LiquidoCategoriaValor[] = {"Lacteo", "Gaseosa", "Jugo", "Agua"};

enum LiquidoEmpaque {Botella, Caja, Lata};
std::string LiquidoEmpaqueValor[] = {"Botella", "Caja", "Lata"};

enum LiquidoTamanio {Pequenio, Mediano, Grande};
std::string LiquidoTamanioValor[] = {"Pequenio", "Mediano", "Grande"};

enum CarneTipo {Res, Blanca, Cerdo};
std::string CarneTipoValor[] = {"Res", "Blanca", "Cerdo"};

enum CategoriaFruta {NoFruta, Citrico, Tropical, Granos, Fibra};
std::string CategoriaFrutaValor[] = {"NoFruta", "Citrico", "Tropical", "Grano", "Fibra"};

enum CategoriaVerdura {NoVerdura, Tuberculo, Legumbre, Hoja };
std::string CategoriaVerduraValor[] = {"NoVerdura", "Tuberculo", "Legumbre", "Hoja"};

struct Grano {
    int quintales;
    int precio;
    GranoUnidad unidad;
    std::string procedencia;
};

struct Limpieza {
    LimpiezaTipo tipo;
    std::string marca;
    std::string codigo;
    int precio;
    int cantidadInventario;
    std::string proveedor;
    std::string nombre;
};


struct Liquido {
    LiquidoCategoria categoria;
    LiquidoEmpaque empaque;
    LiquidoTamanio tamanio;
    std::string nombre;
    int precio;
    std::string fechaVencimiento;
};

struct Carne {
    std::string procedencia;
    int cantidadInventario;
    CarneTipo tipo;
    int precio;
};

struct FrutaVerdura {
    int precio;
    int cantidadInvetario;
    CategoriaFruta categoriaFruta;
    CategoriaVerdura categoriaVerdura;
};

std::vector <struct Grano> inventarioGranos;
std::vector <struct Grano> inventarioLimpieza;
std::vector <struct Grano> inventarioLiquidos;
std::vector <struct Grano> inventarioCarnes;
std::vector <struct Grano> inventarioFrutaVerdura;

int leerNumero () {
    int eleccion = -1;
    std::cin>>eleccion;
    return eleccion;
}
char leerLetra () {
    char eleccion = 'z';
    std::cin>>eleccion;
    return eleccion;
}

std::string leerPalabra () {
    std::cin.ignore(1);
    std::string palabra;
    std::getline(std::cin, palabra);
    return palabra;
}