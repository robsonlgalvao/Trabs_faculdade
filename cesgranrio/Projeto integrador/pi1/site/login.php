<?php
    session_start();
    $_SESSION['usuario_logado'] = "0";

    $usuario = $_POST["user"];
    $senha = $_POST["senha"];
    $login = 0;

    include('conexao.php');
     
    $sql = "SELECT username, senha, nome_completo, admin FROM usuario
    WHERE username='".$usuario."' AND senha='".$senha."'";
    
    $recordset = $conn->query($sql);
    
    $linha = $recordset->fetch_assoc();
    
    $_SESSION['nomeUsuario'] = $linha['nome_completo'];
    $_SESSION['admin'] = $linha['admin'];
    
    $login = $recordset->num_rows;
    if($login==1) 
    {
        $_SESSION['usuario_logado'] = "1";
        header("Location:menu.php");
    }
    else
    {
        $_SESSION['usuario_logado'] = "0";
        header("Location:entrar.php");
    } 
?>