<?php
// servidor, usuário, senha, banco de dados
	$conn = new mysqli("localhost","administrador","Headhunter037","site");
    if($conn->connect_error){
        print"Erro na conexão do banco: ".$conn->connect_error;
    }
    
/*
$mysqli_connection = new MySQLi('HOST', 'USUARIO', 'SENHA', 'BASE');
if($mysqli_connection->connect_error){
   echo "Desconectado! Erro: " . $mysqli_connection->connect_error;
}else{
   echo "Conectado!";
}*/

?>


