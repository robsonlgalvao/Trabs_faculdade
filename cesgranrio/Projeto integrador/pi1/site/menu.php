<?php
    include('confereLogado.php');
?>
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <link href="_css/estilo.css" rel="stylesheet" type="text/css" />
    <title>Estude</title>
</head>
<body>
    <header>
        <a href="index.html"><img src="_img/logo.png" id="logo" class="left" />
        <h1 class="left">EstudeMais</h1></a>
        <nav id="menu">
            <ul>
                <li><a href="inserir.php" target="iframe">Inserir</a></li>
                <li><a href="atualiza.php" target="iframe">Atualizar</a></li>
                <li><a href="iframe.html" target="iframe">Excluir</a></li>
                <li><a href="iframe.html" target="iframe">Buscar</a></li>
                
            </ul>
        </nav>
    </header>
    <section id="conteudo">
        <h1>Conteúdo livre para estudo</h1>
        <p>Nosso projeto é para ajudar quem quer estudar de forma gratuíta, 
        cada professor pode colocar seu material para auxilio dos alunos</p>
        <div id="sistema">

            <iframe src="iframe.html" width="1000" height="400" name="iframe">
            <p>Conteúdo de fallback para navegadores que não suportam iframes.</p>
            </iframe>
            
        </div><br>
        
    </section>
    <aside>
    </aside>
    <footer>
        Todos os Direitos reservdos
    </footer>
</body>
</html>