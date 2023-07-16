<?php
    $decide=$_POST['decide'];
    $num=$_POST['numero'];
   if($decide=="id"){
        header("Location: atualizaId.php?id=".$num."");
   }elseif($decide=="cpf"){
        header("Location: atualizaCpf.php?cpf=".$num."");
   }else{
        header("Location: falhou.html");
   }
?>
