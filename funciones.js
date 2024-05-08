function cambiarModo(){
    var estiloActual = localStorage.getItem("estilo");
    if (estiloActual === "dia") {
        localStorage.setItem("estilo", "noche");
    } else {
        localStorage.setItem("estilo", "dia");
    }
    aplicarEstilo();
}
function aplicarEstilo(){
    var estiloActual = localStorage.getItem("estilo");
    if (estiloActual === "dia") {
        var $cuerpo = document.getElementById("cuerpo");
        $cuerpo.className = "normal"

        var $header = document.getElementById("enca");
        $header.className = "normal"

        var $boton = document.getElementById("bot");
        var $boton1 = document.getElementById("bot1");
        var $boton2 = document.getElementById("bot2");
        $boton.className = "boton-inicio" 
        $boton1.className = "boton-inicio"
        $boton2.className = "boton-inicio"
    } else {
        var $cuerpo = document.getElementById("cuerpo");
        $cuerpo.className = "bodyNoche"

        var $header = document.getElementById("enca");
        $header.className = "headerNoche" 

        var $boton = document.getElementById("bot");
        var $boton1 = document.getElementById("bot1");
        var $boton2 = document.getElementById("bot2");
        $boton.className = "boton-inicio-noche" 
        $boton1.className = "boton-inicio-noche"
        $boton2.className = "boton-inicio-noche"
    }
}

function agregarblog(id){
    var divABorrar = document.getElementById("borrar");
    divABorrar.parentNode.removeChild(divABorrar);

    const d = document,
    $main = d.querySelector("main");

    fetch(`/carpeta-digital/blog/${id}`)
    .then(res => res.ok ? res.text(): Promise.reject(res))
    .then(text =>{
        $main.innerHTML = new showdown.Converter().makeHtml(text)
        console.log(id[0])
        if(id[0] == "v" || id[0] == "e"){
        if(text.indexOf("```") != -1){
            const de = text.indexOf("```");
            const hasta = text.lastIndexOf("```");
            var codigo = text.substring(de+3, hasta -2);
                    
            var iframe = document.createElement('iframe');
            iframe.width = "700";
            iframe.height = "500";
            iframe.srcdoc  = codigo;
            document.body.appendChild(iframe);
        }}
    })
    .catch(err =>{
        console.error(err);
    })  
}
