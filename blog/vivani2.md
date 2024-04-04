
---

# Actividad 2

Rocco Perez

---

## Codigo

```
<html>
    <style>
        body {
            background-color: black;
        }
        .rojo {
            background-color: rgb(117, 2, 2);
        }
        .azul {
            background-color: rgb(0, 0, 148);
        }
        h1 {
            color: white;
            text-align: center;
        }
        img {
            height: auto;
            width: 70%;
            padding-left: 15%;
        }
        button {
            margin-left: 45%;
        }
    </style>
    <body id="cuerpo">
        <marquee>Perez y Perez Formento</marquee>
        <h1>hola</h1>
        <img alt="frivani" src="https://www.leagueoflegends.com/static/logo-1200-04b3cefafba917c9c571f9244fd28a1e.png">
        <br>
        <button onclick="bgCambiar()">Cambiar</button>
    </body>
    <script>
        a = 0;
        function bgCambiar(){
            $cuerpo = document.getElementById("cuerpo");
            if (a % 2 == 0){$cuerpo.className = "rojo";}
            if (a % 2 != 0){$cuerpo.className = "azul";}
            a++;       
        }   
    </script>
</html>
```

## Como se ve

