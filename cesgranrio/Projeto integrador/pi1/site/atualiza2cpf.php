<?php
// veio do form
    $id = $_POST['num'];  
    $nome = $_POST['nome'];  
    $cpf = $_POST['cpf'];  
    $tel = $_POST['tel']; 
    $mat = $_POST['mat'];
//para o banco
    $query = "UPDATE professor SET nome='".$nome."', id='".$id."', telefone='".$tel."',materia='".$mat."' WHERE cpf=".$cpf;
//conexão
    include('conexao.php');

// rodar a query
    $recordset = $conn->query($query);
//mandar para uma pagina
    if($recordset==1){
        header('Location:sucesso.html');  
    }else{
        header('Location:falha.html');
    }  

?>