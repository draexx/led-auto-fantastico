# Arduino LED Auto Fantastico Project

## Simulación
[Ver projeto en Tinkercad](https://www.tinkercad.com/things/8sKiVq0F5By-led-auto-fantastico)

## Descripción
Código Arduino que crea un efecto de iluminación LED que se mueve desde los bordes hacia el centro y viceversa.

## Características Principales
- 8 LEDs conectados a pines digitales
- Efecto de movimiento bidireccional
- Control de velocidad configurable

## Variables Clave
```cpp
const int numLeds = 8;  // Número total de LEDs
const int ledPins[numLeds] = {2, 3, 4, 5, 6, 7, 8, 9};  // Pines de conexión
const int delayTime = 500;  // Tiempo entre cambios (ms)
```

## Funciones Principales

### `setup()`
- Inicializa pines de LEDs como salidas
- Apaga todos los LEDs inicialmente

### `clearLeds()`
- Apaga todos los LEDs

### `loop()`
- Mueve los LEDs desde los bordes al centro
- Cambia dirección al completar la secuencia

## Técnicas Utilizadas
- Secuencia personalizada de LEDs
- Cambio dinámico de dirección
- Control preciso de iluminación

## Personalización
- Modificar `delayTime` para ajustar velocidad
- Editar `sequence` para cambiar patrón de iluminación

## Licencia
Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## Autor
[Pedro Carranza](https://github.com/draexx)
