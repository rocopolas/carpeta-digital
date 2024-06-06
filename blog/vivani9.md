
---

# Actividad 9

Rocco Perez

---

## Codigo

```
<html>
    <style>
        th{
            background-color: rgb(128, 128, 128);
            color: white;
        }

        td {
            background-color: gainsboro;
        }

        .titulos {
            background-color: rgb(182, 182, 182);
        }

        .cero {
            background-color: red;
            text-align: center;
        }
    </style>
    <body>
        <table border="">
            <tr>
                <th colspan="5">Animales en peligro de extincion</th>
            </tr>
            <tr>
                <td class="titulos">Nombre</td>
                <td class="titulos">Cabezas</td>
                <td class="titulos">Prevision 2010</td>
                <td class="titulos">Prevision 2020</td>
            </tr>
            <tr>
                <td>Ballena</td>
                <td>6000</td>
                <td>4000</td>
                <td>1500</td>
            </tr>
            <tr>
                <td>Oso pardo</td>
                <td>50</td>
                <td colspan="2" rowspan="2" class="cero">0</td>
            </tr>
            <tr>
                <td>Lince</td>
                <td>10</td>
            </tr>
            <tr>
                <td>Tigre</td>
                <td>300</td>
                <td colspan="2">210</td>
            </tr>
        </table>
    </body>
</html>
```

## Como se ve

