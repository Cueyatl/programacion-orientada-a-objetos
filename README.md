# Programación Orientada a Objetos (POO)

## Introducción

La Programación Orientada a Objetos (POO) es un paradigma de programación que organiza el diseño del software alrededor de objetos, en lugar de funciones y lógica. Un objeto es una instancia de una clase, que puede contener datos (atributos) y métodos (funciones) que operan sobre esos datos. La POO facilita la creación de aplicaciones complejas y escalables mediante la modularización y reutilización de código.

## ¿Qué es y cómo se usa?

En la POO, el mundo se modela como un conjunto de objetos que interactúan entre sí. Cada objeto es una instancia de una clase, que define su estructura y comportamiento. La POO se usa para:

- **Encapsulación:** Agrupar datos y métodos que operan sobre esos datos dentro de una misma unidad (objeto).
- **Herencia:** Permitir que las clases deriven de otras clases, compartiendo y extendiendo funcionalidades.
- **Polimorfismo:** Habilitar que diferentes objetos puedan ser tratados de manera uniforme a través de una interfaz común.
- **Abstracción:** Permitir que los detalles internos de la implementación sean ocultados, exponiendo solo las partes necesarias para la interacción con otros objetos.

### Ejemplo básico en POO:

```python
class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def saludar(self):
        print(f"Hola, me llamo {self.nombre} y tengo {self.edad} años.")

# Crear una instancia de la clase Persona
persona1 = Persona("Juan", 30)
persona1.saludar()  # Salida: Hola, me llamo Juan y tengo 30 años.
