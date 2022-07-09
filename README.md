# Taller 1: Control de Servomotor con ARDUINO NANO - Vista LED
### Autores: SEVILLANO-RAMIREZ, V. & ESCOBAR-CARDONA, A.J.

Programa Académico: INGENIERÍA TOPOGRÁFICA

Escuela: ESCUELA DE INGENIERÍA CIVIL Y GEOMÁTICA

Facultad: FACULTAD DE INGENIERÍA

Institución: UNIVERSIDAD DEL VALLE

1. Los servos (también conocidos como actuadores) son esenciales para el funcionamiento de la mayoría de los UAV* porque proporcionan la capacidad de mover las superficies de control.

* algunos UAV multirotor utilizan solo el control de velocidad de motores individuales para lograr un control aerodinámico.

2. Un servo típico consiste en un motor eléctrico que mueve un actuador rotativo a través de un conjunto de engranajes de reducción, normalmente proporcionando un mayor par y tal vez un mecanismo de embrague.

3. Parámetros del servo. Cada salida servo en un piloto automático de navegación UAV puede generar una señal PWM estándar (es decir, Futaba, JR o Spektrum): el pico de la señal dura un período de entre uno y dos milisegundos (μs), con un control de resolución de 1 μs. El ancho (es decir, la duración) de la señal es utilizado por la electrónica de servocontrol para ordenar una deflexión servo proporcional. El siguiente diagrama representa gráficamente estos parámetros:

![image](https://user-images.githubusercontent.com/98371007/178113414-b20d128d-b217-41c6-8320-296e5d0f55a1.png)
![image](https://user-images.githubusercontent.com/98371007/178113426-930591da-7246-4a06-9c2b-e5cfc991b054.png)

4. Marcas de servo compatibles. Aunque la mayoría de los servos utilizan señales PWM, hay algunos servos especiales que informan información sobre el estado del servo (posición, consumo de corriente, temperatura interna, etc.). Este tipo de servo generalmente utiliza la comunicación de puerto serie. Póngase en contacto con UAV Navigation para obtener una lista actualizada de dispositivos compatibles.

5. Calibración y configuración de servo.
