
# Resumen Seguridad Física

## Riesgo de seguridad

La posibilidad de que se genere una amenaza dentro del sistema informático aprovechándose de una vulnerabilidad existente.

## Relación entre **riesgo**, **amenaza** y **daño**

- **Riesgo:** el equipo tiene una posibilidad de ser dañado. **(Evaluar: cuánto se va a tardar en solucionar y cómo se va a solucionar)**
- **Amenaza:** el equipo es vulnerable a sufrir un ataque y sufrir daños, que generalmente son causados por ataques externos, puede o no ser detectada por el protector. 
- **Daño:** el resultado de la amenaza pero ya realizada, es la debilidad propia de un sistema, osea que el daño ya fue causado por estos ataques externos.

**Riesgo** -> probabiidad de daño material o digital -> **desarrollar un accionar**

**Contrataque:**
- Correccion de las medidas de seguridad
- Reducir al minimo los daños

## Atacante

Persona que accede o intenta acceder sin autorizacion a un sistema ajeno

## Tipos de ataques

- **Ataques pasivos:** el atacante no altera la comunicación, sino que únicamente la **“escucha”**, para obtener información que está siendo transmitida. Sus objetivos son la intercepción de datos y el análisis de tráfico.
- **Ataques activos:** implican algún tipo de modificación del flujo de datos transmitido o la creación de un falso flujo de datos.
  Tipos de ataques activos:
  - **Interrupción:** si hace que un del sistema se pierda, quede inutilizable o no disponible.
  - **Intercepción:** si un elemento no autorizado consigue el acceso a un determinado objeto del sistema.
  - **Modificación:** si además de conseguir el acceso, consigue modificar el objeto.
  - **Fabricación:** se consigue un objeto similar al original atacado de forma que es difícil distinguirlos entre sí. 
  - **Destrucción:** es una modificación que inutiliza el objeto.

## Sistema informatico

El conjunto de elementos físicos y lógicos que se encargan de recibir, guardar y procesar datos para luego entregarlos en forma de resultados.

### Se compone de:

Usuario(maneja según sus necesidades
) -> Aplicacion(programas que realizan tareas) -> Sistema Operativo(el encargado de gestionar los recursos del hardware) -> Hardware (cpu)

## Análisis de riesgos

Fomenta una mayor confianza entre los involucrados ya que da certeza de que las decisiones y acciones a emprender están cuidadosamente valoradas. 

Elementos que lo componen:

- **Activos:** los componentes o recursos del sistema que deben protegerse.
- **Riesgos:**  las posibles amenazas o eventos que podrían afectar negativamente a los activos.
- **Vulnerabilidades:** debilidades o fallos en los activos que podrían ser explotados por amenazas.
- **Amenazas:** eventos o circunstancias que pueden causar daño a los activos.
- **Ataques:** acciones específicas llevadas a cabo por amenazas para explotar vulnerabilidades y dañar activos.
- **Daños:** son las consecuencias negativas que resultan de un ataque exitoso
- **Impactos:** las consecuencias más amplias de un ataque o incidente de seguridad.
- **Objetivos:** identificación de medidas de mitigación, la priorización de activos o la toma de decisiones informadas.

### Tipos de análisis de riesgos

(mirar en el documento por q la verdad no creo q tomen esto xdd)

## Servicio de seguridad

Se determina qué se puede, o no, quien puede, o no, acceder a los recursos del sistema. 

## Mecanismos de seguridad

herramientas que se utilizan para fortalecer la confidencialidad, la integridad y la disponibilidad de los sistemas informáticos. 
Estos se clasifican en: 

- **Preventivos:** monitorear constantemente la información y bienes. Por ejemplo un antivirus. 
- **Detectores:** actuar antes de que la amenaza sea desplegada. 
- **Correctivos:** corregir cualquier daño o error cometido por el ataque de una amenaza
- **Disuasivos:**  Es el encargado de intimidar a los ejecutores del ataque.
  Ejemplos de **Disuasivos**:
  - Tarjeta inteligente
  - Circuitos cerrados de vigilancia.
  - Biometria
  - Contraseña de seguridad 

## Herramientas para gestion de riesgos:

- **Política de seguridad:** Define qué es lo que desea proteger. Es un conjunto de normas y directrices que permiten garantizar la confidencialidad, integridad y disponibilidad de la información.
- **Auditoría:** controlar riesgos informáticos que pueden ser aprovechados 
- **Plan de contingencias:** contiene las medidas técnicas, humanas y organizativas necesarias para garantizar la continuidad de las operaciones del organismo.
- **Modelos de seguridad:**
  - **Lista blanca:** se basa en admitir a los autorizados para acceder a los datos de un sistema.
  - **Lista negra:** protege nuestros sistemas de interactuar (lista de baneados(?))
  - **Seguridad mixta:** combinar el uso de listas blancas con el uso de listas negras. Mayormente esto se puede ver en webs.
