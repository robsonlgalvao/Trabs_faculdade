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
        <a href="Index.html"><img src="_img/logo.png" id="logo" class="left" />
        <h1 class="left">EstudeMais</h1></a>
        <!-- <nav id="menu">
            <ul>
                <li><a href="index.html">Inicio</a></li>
                <li><a href="manutencao.html">Sobre</a></li>
                <li><a href="contato.html">Contato</a></li>
                <li><a href="manutencao.html">Conteúdo</a></li>
                <li><a href="entrar.php">Entrar</a></li>
            </ul>
        </nav> -->
    </header>
    <section id="conteudo">
        <h1>Conteúdo livre para estudo</h1>
        <p>Nosso projeto é para ajudar quem quer estudar de forma gratuíta, 
        cada professor pode colocar seu material para auxilio de alunos</p>
        <div id="contato">
            <fieldset>
                <legend>Insira seu dados ;p</legend>
               <form method="post" action="#" >
                    <table align="center">
                     <tr>
                        <td>Nome:</td><td><input type="text" name="nome"/></td>
                    </tr> 
                    <tr>
                        <td>CPF:</td><td><input type="number" name="cpf"/></td>
                    </tr>
                    <tr>
                        <td>Telefone:</td><td><input type="tel" name="tel"/></td>
                    </tr>
                    <tr>
                    <td>Matéria</td><td><input type="text" placeholder="Digite sua Matéria"/></td>
                    </tr>
                    <tr>
                    <td colspan="2"><input type="submit" value="OK" /></td>
                    </tr>
                    </table>
               </form>
            </fieldset>
        </div>
        
    </section>
    <!-- <aside>
    </aside>
    <footer>
        Todos os Direitos reservdos
    </footer> -->
</body>
</html>