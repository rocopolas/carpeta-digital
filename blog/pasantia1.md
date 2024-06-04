
# Tutorial clonacion por red CLONEZILLA

[Descargamos la iso de CLONEZILLA y la meteremos en un pendrive o disco](https://mega.nz/file/x9Rl1BJK#rQp4iviHJRdMw3yCfWmDP44402spkkmxvQzT6jope98)

## Iniciar el programa

EN LA COMPUTADORA QUE SE VA A USAR COMO **SERVER**, OSEA LA QUE TIENE EL DISCO QUE VA A INSTALAR EN LAS DEMAS COMPUTADORAS, ES LA QUE SE VA A UTILIZAR PARA ESTA PARTE.

Iniciamos la PC desde el pendrive

![](https://img001.prntscr.com/file/img001/EtsinPI3Qv2uZdfe7ErgXg.jpeg)

Entramos en "DRBL Live"

![](https://img001.prntscr.com/file/img001/XPK9RhS0S2S7MOvVNI6mLg.jpeg)

Colocamos el idioma español

![](https://img001.prntscr.com/file/img001/fZv3mC6bQlacVd-VcxdF2w.jpeg)

Colocamos lo marcado en rojo

![](https://img001.prntscr.com/file/img001/PchcCf3zRJaiDZA3BKRq6Q.jpeg)

Tocamos enter

se va a iniciar una distribucion de linux (Debian)

## Configurar clonezilla server 

[Seguir todo lo que dice esta parte del video](https://youtu.be/JJH1k2h42kw?t=449)

Usaremos dos discos en la maquina server, uno sera el disco en si que sera clonado y otro se utilizara para guardar la imagen que va a ser mandada a las otras pc

## Configurar PC clientes (por primera vez)

Entramos a la BIOS y habilitamos la opcion "arranque por la red" (AVECES LLAMADA LAN PXE boot option):

- [Asus](https://www.asus.com/es/support/faq/1052166/#:~:text=Presione%20F2%20durante%20el%20inicio%20para%20ingresar%20a,desmarque%20Iniciar%20dispositivos%20de%20red%20en%20%C3%BAltimo%20lugar)
- [Dell](https://www.dell.com/support/kbdoc/es-py/000131551/configuracion-del-bios-para-permitir-el-arranque-pxe-en-modelos-mas-recientes-de-laptops-dell-latitude)
- [Gigabyte](https://todosloshechos.es/como-habilitar-la-tarjeta-de-red-en-la-bios#:~:text=Ingrese%20al%20BIOS%20%28C%C3%B3mo%20ingresar%20al%20BIOS%20en,salga%20del%20BIOS%20%28las%20figuras%20son%20para%20referencia%29)

Reinicionamos el equipo, volvemos a la bios y cambiamos la secuencia de arranque poniendo la tarjeta de red por arriba de todo

Al reiniciarse se van a conectar ya directamente al clonezilla, NO TOCAR NADA, LO DEMAS SE HACE AUTOMATICO

# Bibliografia

- [Video explicativo](https://www.youtube.com/watch?v=JJH1k2h42kw)

- [Video explicativo 2 (no excantamente lo que queremos hacer)](https://www.youtube.com/watch?v=GnQRemEkUhE)

- [Documentacion](https://clonezilla.org/clonezilla-live-doc.php)