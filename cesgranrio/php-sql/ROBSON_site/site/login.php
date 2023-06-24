<?php
    session_start();
    $_SESSION['usuario_logado'] = "0";

    $usuario = $_REQUEST["user"];
    $senha = $_REQUEST["senha"];
    $login = 0;

    include('conexao.php');
    
    $sql = "SELECT usuario, senha, nome, admin FROM usuarios 
    WHERE usuario='".$usuario."' AND senha='".$senha."'";
    
    $recordset = $conn->query($sql);
    
    $linha = $recordset->fetch_assoc();
    
    $_SESSION['nomeUsuario'] = $linha['nome'];
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
        header("Location:index.php");
    } 
?>