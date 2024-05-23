Descripción: El ejercicio consiste en desarrollar un programa en C++ que gestione trabajadores de diferentes categorías laborales, como Asalariado y PorHora. Cada trabajador tiene un nombre, edad, salario base y tipo de empleado. El programa debe permitir agregar, eliminar y mostrar información de los trabajadores. Se debe implementar herencia y polimorfismo para calcular el salario según la categoría laboral del trabajador.

Debe haber una clase base abstracta llamada Trabajador, que represente a todos los trabajadores. Esta clase debe tener los siguientes atributos y métodos:

Atributos:

· Nombre

· Edad

· Salario base

**· ID (un identificador único para cada trabajador)** 

Métodos virtuales puros:

calcularSalario(): Método virtual puro que calculará el salario del trabajador.

getTipo(): Método virtual puro que devolverá el tipo de trabajador (Asalariado, PorHora, etc.).

Deben existir al menos dos clases derivadas de Trabajador: TiempoParcial y TiempoCompleto.

Deben existir al menos dos clases derivadas de TiempoParcial y TiempoCompleto: Asalariado y PorHora.

El programa debe tener una clase llamada SistemaGestionEmpleados que almacene todos los trabajadores registrados y proporcione métodos para agregar y eliminar trabajadores, así como para mostrar una tabla con la informacion de los trabajadores.

el programa require App() con metodo ejecutar para agreagar mostrar y eliminar usuarios.

Al agregar un trabajador, el programa debe solicitar al usuario el nombre, la edad, el salario base y el tipo de trabajador (Asalariado/PorHora). Dependiendo del tipo de trabajador seleccionado, el programa debe solicitar la información adicional necesaria, como las horas trabajadas y la tarifa por hora para los trabajadores por hora.

Al eliminar un trabajador, el programa debe solicitar al usuario el ID del trabajador que desea eliminar.

La tabla de trabajadores mostrada debe incluir el ID, nombre, edad, tipo de trabajador, salario y cualquier detalle adicional dependiendo del tipo de trabajador (por ejemplo, horas trabajadas y tarifa por hora para trabajadores por hora).

metodos vector:
    .push_back(vectorList(data))

    .erase()




Notas trabajador.h
class Pporhra_
experiment with private or public: int horas; sethoras()