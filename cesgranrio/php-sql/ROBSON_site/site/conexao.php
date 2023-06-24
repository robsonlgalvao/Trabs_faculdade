<?php
// servidor, usuário, senha, banco de dados
	$conn = new mysqli("localhost","id20631691_usuario02","Senha123!","id20631691_banco02");
    if($conn->connect_error){
        print"Erro na conexão doo banco: ".$conn->connect_error;
    }
    
/*
$mysqli_connection = new MySQLi('HOST', 'USUARIO', 'SENHA', 'BASE');
if($mysqli_connection->connect_error){
   echo "Desconectado! Erro: " . $mysqli_connection->connect_error;
}else{
   echo "Conectado!";
}*/

?>


