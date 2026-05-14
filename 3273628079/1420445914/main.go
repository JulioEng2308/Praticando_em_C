package main
import "fmt"

func main () {
  var vetor[10] int
  var indice int
  var num int 
  var cont int
  
  for indice = 0; indice < 10; indice++ {
    fmt.Scan(&vetor[indice])
     }
   fmt.Scanln(&num)

   cont = 0
   for indice = 0; indice < 10; indice++ {
       if vetor[indice] == num {
         cont = cont + 1
       }
    }

  if cont > 0 {
    fmt.Println("achou")
  } else {
    fmt.Println("nao achou")
  }

}