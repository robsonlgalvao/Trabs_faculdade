<?php
session_start();
$logado = $_SESSION["usuario_logado"];
if($logado!=1){
    header("Location:entrar.php");
}
?>