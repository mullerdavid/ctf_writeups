<body bgcolor=lightgreen style="width: 1000px; text-align:center; margin:auto;">
<font color=blue font-size:20px;>
Diana revisited 2<br><br></font>
<font color=red font-size:16px;>
Eml&eacute;keztek m&eacute;g a v&eacute;letlen tal&aacute;lkoz&aacute;s c&iacute;m&udblac; feladatra tavalyr&oacute;l? Az eg&eacute;sz orsz&aacute;g Di&aacute;t kereste, aki mellesleg szuperl&aacute;ny. Kaptunk is emiatt hideget, meleget. Itt szemezgethetsz a levelekb&odblac;l.
<br><br>
</font>

<form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
<table width=200 >
<tr><td>Felad&oacute;:</td>
<td><input type="text" name="felado" size=50 value="Warner"/></td></tr>
<tr><td><input type="submit" value="Submit" /></td></tr>
</table>
</form>

<?php

     if (isset($_POST['felado'])&&(strlen($_POST['felado'])>2))
     {
        include("connect.php");

        $conn = new mysqli($host,$user,$pass,$database);
        if (!$conn) die("Connection failed:".mysqli_connect_error());
        //echo "Connected successfully";


        if ( $conn )
        {
                $felado=substr($_POST['felado'],0,90);
                $sql = "SELECT filename FROM letters Where sender like '%".$felado."%'";
                $result = $conn->query($sql);

                while($row = $result->fetch_assoc())
                {
                  //print($row["filename"]);
                  include($row["filename"]);
                  print("<br>");
                }

                $conn->close();
        }
      }
  //De jo lenne tudni az adatbazis jelszot :)

?>





