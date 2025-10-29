# Práctica Evasión de protección ASLR

**Objetivos**
* Comprender cómo la aleatorización del diseño del espacio de direcciones (ASLR) protege al software de ataques de corrupción de memoria.
* Aprender cómo los prefetchers de software representan un riesgo de seguridad al revelar qué páginas están presentes en el espacio de direcciones.
* Comprender los desbordamientos de búfer / ataques de reutilización de código e implementar un ataque de programación orientada a retornos (ROP) a partir de gadgets de instrucciones en ensamblador.
* Combinar ataques de software y hardware para derrotar a un binario víctima usando un ataque de programación orientada a retornos (ROP) con ASLR derrotado mediante técnicas de hardware.

**Créditos**

Los códigos de esta práctica están basados en [MATCHA-MIT/SHD-ASLRLab](https://github.com/MATCHA-MIT/SHD-ASLRLab.git)