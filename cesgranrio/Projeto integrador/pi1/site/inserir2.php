<?php
    include('confereLogado.php');
    
//$id=$_POST['num'];
$nome=$_POST['nome'];
$cpf=$_POST['cpf'];
$tel=$_POST['tel'];
$materia=$_POST['mat'];


$query = "INSERT INTO professor(nome,cpf,telefone,materia) VALUES ('".$nome."','".$cpf."','".$tel."','".$materia."');";
    //print $query;
    include('conexao.php');

    // rodar a query
    $recordset = $conn->query($query);
    if($recordset==1){
     header("Location: sucesso.html");
    }
   // print"<h1>Erro</h1>";
   // header('location:entrar.php');


?>